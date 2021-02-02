`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:03:33 06/12/2020 
// Design Name: 
// Module Name:    t_DataMemory 
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
module t_DataMemory(clk, mem_write, address, write_data, read_data);
	// initialize inputs and outputs :
	input wire clk;
	input wire mem_write;
	input wire [31:0] address,write_data;
	output wire [31:0] read_data;
	
	// define RAM:
	reg [31:0] RAM [1023:0];
	
	// read data:
	assign read_data = RAM[address[31:2]];
	
	// write data:
	always@(posedge clk)
	begin
		if(mem_write)
			RAM[address[31:2]] <= write_data;
			
	end
endmodule
