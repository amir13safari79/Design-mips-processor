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
	wire MemWriteM;
	wire [31:0] WriteDataM, ALUOutM, PCF;
	wire [31:0]	InstrF, ReadDataM;
					
	// instantiate processor and memories
	mips mips(clk, reset, PCF, InstrF, MemWriteM, ALUOutM,
				WriteDataM, ReadDataM);
	 
	Instruction_mem imem(PCF, InstrF);
	t_DataMemory    dmem(clk, MemWriteM, ALUOutM, WriteDataM, ReadDataM);
	

endmodule
