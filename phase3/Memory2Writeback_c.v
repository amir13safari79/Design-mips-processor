`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:00 06/22/2020 
// Design Name: 
// Module Name:    Memory2Writeback_c 
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
module Memory2Writeback_c(
	// initialize inputs and outputs:
	input wire clk, reset,
	input wire RegWriteM, MemtoRegM,
	
	output reg RegWriteW, MemtoRegW
	);

	// determine outputs:
	always@(posedge clk, posedge reset)
	begin
		if(reset)
		begin
			RegWriteW <= 0;
			MemtoRegW <= 0;
		end
		
		else
		begin
			RegWriteW <= RegWriteM;
			MemtoRegW <= MemtoRegM;
		end
	end

endmodule
