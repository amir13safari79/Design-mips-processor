`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:09:09 07/21/2020 
// Design Name: 
// Module Name:    Cache 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Cache(
	// defien inputs and outputs:
	input wire clk, reset,
	input wire [5:0] Address_in,
	input wire [7:0] WriteData,
	input wire WriteEn_in, RWB,
	
	output wire [7:0] Data_out,
	output wire [5:0] Address_out,
	output wire WriteEn_out, Hit
	);
	
	// define cache memory:
	reg [26 : 0] CacheMemory [0 : 7];

	// define wires:
	wire Hit0, Hit1;
	wire [2:0] tag_out;
	wire DataS, WriteEnMux;
	integer i;
	
	// combinational logic for read data:
		// logic for find Hit:
			// logic for Hit1:
				assign Hit1 = (Address_in[5:3] == CacheMemory[Address_in[2:0]][23:21]) ? CacheMemory[Address_in[2:0]][26] : 0 ;
			//logic for Hit0	
				assign Hit0 = (Address_in[5:3] == CacheMemory[Address_in[2:0]][10:8]) ? CacheMemory[Address_in[2:0]][12] : 0 ;
			assign Hit = Hit1 | Hit0;
		
		// logic for Data_out:
			MUX#(1) Data_out_mux1(CacheMemory[Address_in[2:0]][25], Hit1, Hit, DataS);
			MUX#(8) Data_out_mux2(CacheMemory[Address_in[2:0]][7:0], CacheMemory[Address_in[2:0]][20:13], DataS, Data_out);
		
		// logic for Address_out:
			MUX#(3) tag_out_mux(CacheMemory[Address_in[2:0]][10:8], CacheMemory[Address_in[2:0]][23:21], CacheMemory[Address_in[2:0]][25], tag_out);
			assign Address_out = {tag_out, Address_in[2:0]};
			
		// logic for WriteEn_out:
			MUX#(1) WriteEn_mux(CacheMemory[Address_in[2:0]][11], CacheMemory[Address_in[2:0]][24], CacheMemory[Address_in[2:0]][25], WriteEnMux);
			assign WriteEn_out = !(Hit | WriteEnMux);
			
			
	// sequentioal logic for write data:
		always @(posedge clk)
		begin
			if (reset) 
			begin
				for(i=0;i<8;i=i+1)
					CacheMemory[i] <= {27{1'b0}};		
			end 
	 
			else  if (WriteEn_in)
				if(CacheMemory[Address_in[2:0]][25] == 0)
				begin
					CacheMemory[Address_in[2:0]][25] <= 1;
					CacheMemory[Address_in[2:0]][12] <= 1;
					CacheMemory[Address_in[2:0]][10:8] <= Address_in[5:3];
					CacheMemory[Address_in[2:0]][7:0] <= WriteData;
					if(!(RWB | Hit))
						CacheMemory[Address_in[2:0]][11] <= 1;
					else if(RWB)
						CacheMemory[Address_in[2:0]][11] <= 0;
				end
				
				else
				begin
					CacheMemory[Address_in[2:0]][25] <= 0;
					CacheMemory[Address_in[2:0]][26] <= 1;
					CacheMemory[Address_in[2:0]][23:21] <= Address_in[5:3];
					CacheMemory[Address_in[2:0]][20:13] <= WriteData;
					if( !(RWB | Hit))
						CacheMemory[Address_in[2:0]][24] <= 1;
					else if(RWB)
						CacheMemory[Address_in[2:0]][24] <= 0;
				end
		end
	
endmodule
