`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:21:12 06/12/2020 
// Design Name: 
// Module Name:    reset_ff 
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
module reset_ff(clk, reset, enable, d, q);
	// initialize inputs and outputs:
	input wire clk,reset,enable;
	input wire [31:0] d;
	output reg [31:0] q;
	
	// determine q;
	always@(posedge clk, posedge reset)
	begin
		if(reset)
			q <= 0;
		else
			if(!enable)
				q <= d;		
	end
endmodule
