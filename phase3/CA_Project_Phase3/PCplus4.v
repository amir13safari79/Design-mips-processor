`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:44:44 06/10/2020 
// Design Name: 
// Module Name:    PCplus4 
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
module PCplus4(in,out);
	input wire [31:0] in;
	output wire [31:0] out;
	
	assign out = in + 4;

endmodule
