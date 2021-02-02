`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:49:46 05/28/2020 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory(clk, mem_write, address, write_data, read_data, mem_ready);
	// initialize inputs and outputs:
	input clk;
	input mem_write;
	input [31:0] address;
	input [31:0] write_data;
	output reg[31:0] read_data;
	output reg mem_ready;
	
	// define reg for save old address and counter
	reg [31:0] old_address;
	reg [1:0] counter;
	
	// define parameters:
	parameter mem_delay = 3;
	
	// initialize memory:
	reg [31:0] RAM [1023:0];
	initial
		$readmemh("memfile.dat",RAM);
	
	// read Data :(according to instruction of project this logic is sequential)
	always@(posedge clk)
		if((mem_delay) == 0)
			begin
			read_data <= RAM[address[31:2]];
			mem_ready <= 1'b1;
			end
		else
			begin
			if(old_address != address)
				begin
				old_address <= address;
				counter <= 2'b01;
				mem_ready <= 1'b0;
				end
			else if((counter == mem_delay) & (old_address == address))
				begin
				mem_ready <= 1'b1;
				read_data <= RAM[address[31:2]];
				end
			else if((counter != mem_delay) & (old_address == address))
				counter <= counter +1 ;
			end				
	// write Data:
	always @(posedge clk)
		if(mem_write)
			RAM[address[31:2]] <= write_data;

endmodule
