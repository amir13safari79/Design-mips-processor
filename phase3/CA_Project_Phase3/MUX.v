`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:07:17 06/10/2020 
// Design Name: 
// Module Name:    MUX 
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
module MUX(in0, in1, s, out);
	parameter width = 8;
	input wire s;
	input wire [width - 1:0] in0,in1;
	output wire [width - 1:0] out;
	
	assign out = s ? in1 : in0;

endmodule
