`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:39:16 06/10/2020 
// Design Name: 
// Module Name:    PCsrcMUX 
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
module PCsrcMUX(in0, in1 , s, out, clk);
	input wire [31:0] in0,in1;
	input wire s, clk;
	output reg [31:0] out;
	
	always@(posedge clk)
	begin
		if(s == 0)
			out = in0;
		else
			out = in1;
	end
endmodule
