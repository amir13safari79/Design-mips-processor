`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:50:35 06/12/2020 
// Design Name: 
// Module Name:    top 
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
module top(clk, reset);
	input wire clk, reset;
	
	// define wires:
	wire memwrite;
	wire [31:0] writedata, dataadr, pc;
	wire [31:0]	instr, readdata;
					
	// instantiate processor and memories
	mips mips(clk, reset, pc, instr, memwrite,
				 dataadr, writedata, readdata);
	 
	Instruction_mem imem(pc, instr);
	t_DataMemory    dmem(clk, memwrite, dataadr, writedata, readdata);
	

endmodule
