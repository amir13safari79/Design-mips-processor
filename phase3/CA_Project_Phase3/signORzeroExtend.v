`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:53:15 06/10/2020 
// Design Name: 
// Module Name:    signORzeroExtend 
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
module signORzeroExtend(in,s,out);
	input wire s;
	input wire [15:0] in;
	output wire [31:0] out;
	
	assign out = s ? {{16{in[15]}},in} : {{16{1'b0}},in};

endmodule
