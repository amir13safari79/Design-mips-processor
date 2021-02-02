`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:21 06/22/2020 
// Design Name: 
// Module Name:    Decode2Execute_d 
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
module Decode2Execute_d(
	// initialize inputs and outputs:
	input wire clk, reset, clear,
	input wire [31:0] RD1D, RD2D,
	input wire [4:0] RsD, RtD,RdD,
	input wire [31:0] SignImmD,
	
	output reg [31:0] RD1E, RD2E,
	output reg [4:0] RsE, RtE,RdE,
	output reg [31:0] SignImmE
	);

	// determine outputs:
	always@(posedge clk, posedge reset)
	begin
		if(reset)
		begin
			RD1E <= 0;
			RD2E <= 0;
			RsE <= 0;
			RtE <= 0;
			RdE <= 0;
			SignImmE <= 0;
		end
	
		else if(clear)
		begin
			RD1E <= 0;
			RD2E <= 0;
			RsE <= 0;
			RtE <= 0;
			RdE <= 0;
			SignImmE <= 0;
		end
		
		else
		begin
			RD1E <= RD1D;
			RD2E <= RD2D;
			RsE <= RsD;
			RtE <= RtD;
			RdE <= RdD;
			SignImmE <= SignImmD;
		end
	end
endmodule
