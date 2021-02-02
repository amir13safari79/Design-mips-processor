`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:10 06/22/2020 
// Design Name: 
// Module Name:    Memory2Writeback_d 
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
module Memory2Writeback_d(
	// initialize inputs and outputs:
	input wire clk, reset,
	input wire [31:0] ReadDataM,ALUOutM,
	input wire [4:0] WriteRegM,
	
	output reg [31:0] ReadDataW,ALUOutW,
	output reg [4:0] WriteRegW
	);
	
	// determine outputs:
	always@(posedge clk, posedge reset)
	begin
		if(reset)
		begin
			ReadDataW <= 0;
			ALUOutW <= 0;
			WriteRegW <= 0;
		end
		
		else
		begin
			ReadDataW <= ReadDataM;
			ALUOutW <= ALUOutM;
			WriteRegW <= WriteRegM;
		end
	end
endmodule
