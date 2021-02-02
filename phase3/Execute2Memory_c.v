`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:39:46 06/22/2020 
// Design Name: 
// Module Name:    Execute2Memory_c 
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
module Execute2Memory_c(
	// initialize inputs and outputs:
	input wire clk, reset,
	input wire RegWriteE,
	input wire MemtoRegE, MemWriteE,
	
	output reg RegWriteM,
	output reg MemtoRegM, MemWriteM
	);
	
	// determine outputs:
	always@(posedge clk, posedge reset)
	begin
		if(reset)
		begin
			RegWriteM <= 0;
			MemtoRegM <= 0;
			MemWriteM <= 0;
		end
		
		else
		begin
			RegWriteM <= RegWriteE;
			MemtoRegM <= MemtoRegE;
			MemWriteM <= MemWriteE;
		end
	end
endmodule
