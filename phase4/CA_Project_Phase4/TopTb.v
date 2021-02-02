`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:18:48 07/21/2020
// Design Name:   Top
// Module Name:   D:/electrical engineering/computer Architecture/project/phase4/CA_Project_Phase4/TopTb.v
// Project Name:  CA_Project_Phase4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module TopTb();

	integer i,HitNum = 0;

	/*-----------------------------------------------------------------------------------------------
						Wires and registers
	-------------------------------------------------------------------------------------------------*/
	reg  clock, reset;								// clock , reset register
	wire Hit;
	wire [7:0]MemSysOut;
	wire RWB;
	wire [7:0] Data;
	wire [5:0] Address;
	/*-----------------------------------------------------------------------------------------------
						Generating Reset and Clock
	-------------------------------------------------------------------------------------------------*/
	initial  				// meghdar dahi avalie reset va clock 
		begin
			clock = 1'b0 ;
		end

	always 					// sakhtan clock be dore 20ns 
		begin
			#5 clock = 1 ;
			#5 clock = 0 ;
     end

	 


	initial                                                
	begin                                                  
		reset=1;
		@(posedge clock);
		reset=0;
		for(i=0;i<100;i=i+1)begin
			@(posedge clock);
			#1;
			HitNum=HitNum+Hit;
			$display("Memory Out: %d\n", MemSysOut);
		end
		$display("The Number of Hits is: %d", HitNum);
		$stop;
	
	end    
                                          
                       
	Top T1(.clk(clock),.reset(reset),.Hit(Hit),.MemSysOut(MemSysOut), .RWB(RWB), .Data(Data), .Address(Address)) ;
                                                
endmodule

