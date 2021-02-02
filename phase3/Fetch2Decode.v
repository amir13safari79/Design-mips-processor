`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:18:58 06/22/2020 
// Design Name: 
// Module Name:    Fetch2Decode 
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
 module Fetch2Decode(
	// initialize inputs and outputs:
	input wire clk, reset, clear, enable,
	input wire [31:0] InstrF, PCPlus4F,
	output reg [31:0] InstrD, PCPlus4D
	);
	
	// determine outputs:
	always@(posedge clk, posedge reset)
	begin
		if(reset)
		begin
			InstrD <= 0;
			PCPlus4D <= 0;
		end
		
		else if(!enable)
		begin
			if(clear)
			begin
				InstrD <= 0;
				PCPlus4D <= 0;
			end
			
			else
			begin
				InstrD <= InstrF;
				PCPlus4D <= PCPlus4F;
			end
		end
	end
endmodule
