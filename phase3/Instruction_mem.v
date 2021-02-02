`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:49:49 05/28/2020 
// Design Name: 
// Module Name:    Instruction_mem 
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
module Instruction_mem(address,read_data);
	input [31:0] address;
	output [31:0] read_data;
	
	reg [31:0] RAM [1023:0];
	

	assign read_data = RAM[address[31:2]];

endmodule
