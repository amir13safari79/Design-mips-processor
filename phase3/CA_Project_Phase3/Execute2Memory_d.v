`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:34 06/22/2020 
// Design Name: 
// Module Name:    Execute2Memory_d 
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
module Execute2Memory_d(
	// initialize inputs and outputs:
	input wire clk, reset,
	input wire [31:0] ALUOutE, WriteDataE,
	input wire [4:0] WriteRegE,
	
	output reg [31:0] ALUOutM, WriteDataM,
	output reg [4:0] WriteRegM
	);
	
	// define outputs:
	always@(posedge clk, posedge reset)
	begin
		if(reset)
		begin
			ALUOutM <= 0; 
			WriteDataM <= 0;
			WriteRegM <= 0;
		end
		
		else
		begin
			ALUOutM <= ALUOutE; 
			WriteDataM <= WriteDataE;
			WriteRegM <= WriteRegE;
		end
	end
endmodule
