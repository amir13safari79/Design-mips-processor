`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:17 06/22/2020 
// Design Name: 
// Module Name:    Decode2Execute_c 
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
module Decode2Execute_c(
	// initialize inputs and outputs:
	input wire clk,reset, clear,
	input wire RegWriteD, MemtoRegD,
	input wire MemWriteD, ALUSrcD,
	input wire RegDstD, 
	input wire [2:0] ALUControlD,
	
	output reg RegWriteE, MemtoRegE,
	output reg MemWriteE, ALUSrcE,
	output reg RegDstE, 
	output reg [2:0] ALUControlE
	);
	
	// determine outputs:
	always@(posedge clk, posedge reset)
	begin
		if(reset)
		begin
			RegWriteE <= 0;
			MemtoRegE <= 0;
			MemWriteE <= 0;
			ALUSrcE   <= 0;
			RegDstE   <= 0;
			ALUSrcE   <= 0;
		end
		
		else if(clear)
		begin
			RegWriteE <= 0;
			MemtoRegE <= 0;
			MemWriteE <= 0;
			ALUSrcE   <= 0;
			RegDstE   <= 0;
			ALUSrcE   <= 0;
		end
		
		else
		begin
			RegWriteE <= RegWriteD;
			MemtoRegE <= MemtoRegD;
			MemWriteE <= MemWriteD;
			ALUSrcE   <= ALUSrcD;
			RegDstE   <= RegDstD;
			ALUSrcE   <= ALUSrcD;
		end
	end
endmodule
