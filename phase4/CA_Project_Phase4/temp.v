`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:02:09 07/21/2020 
// Design Name: 
// Module Name:    temp 
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
module temp(a, b);
	input wire [2:0] a;
	input wire [2:0] b;
	wire [5:0] ram [4:0];
	
	assign ram[b[1:0]][2:0] = a;

endmodule
