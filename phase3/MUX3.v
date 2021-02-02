`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:24:06 06/23/2020 
// Design Name: 
// Module Name:    MUX3 
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
module MUX3(in00, in01, in10, s, out);
	// initialize inputs and outputs:
	input wire [31:0] in00, in01, in10;
	input wire [1:0] s;
	output reg [31:0] out;
	
	// define output:
	always@(in00, in01, in10, s)
	begin
		if(s == 2'b00)
			out = in00;
		else if(s == 2'b01)
			out = in01;
		else if (s == 2'b10)
			out = in10 ;
		else
			out = 32'hxxxx;

	end
endmodule
