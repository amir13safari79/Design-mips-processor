`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:00:46 06/09/2020 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
	// initial inputs and outputs :
	input wire clk, reset,
	input wire [5:0] op, Funct,
	input wire EqualD,
	input wire FlushE,
	
	output wire BranchD, SgnZeroD,
	output wire PCSrcD,
	output wire RegDstE, ALUSrcE,
	output wire [2:0] ALUControlE,
	output wire MemtoRegE, RegWriteE,
	output wire MemWriteM, MemtoRegM, RegWriteM,
	output wire RegWriteW, MemtoRegW
	);
	
	// define wires:
	wire RegWriteD, MemtoRegD, MemWriteD;
	wire ALUSrcD, RegDstD;
	wire [2:0] ALUControlD;
	wire MemWriteE;
	
	// instance Control_logic:
	Control_logic cl(op, Funct, EqualD, RegWriteD,
						MemtoRegD, MemWriteD, ALUControlD, ALUSrcD,
						RegDstD, BranchD, PCSrcD, SgnZero);
	
	// instance registers:
	// instance Decode2Execute_c Register:
	Decode2Execute_c D2E_c(clk, reset, FlushE, RegWriteD, MemtoRegD, MemWriteD,
								ALUSrcD, RegDstD, ALUControlD, RegWriteE, MemtoRegE,
								MemWriteE, ALUSrcE, RegDstE, ALUControlE);
	
	// instance Execute2Memory_c Register:
	Execute2Memory_c E2M_c(clk, reset, RegWriteE, MemtoRegE, MemWriteE,
								RegWriteM, MemtoRegM, MemWriteM);
	
	// instance Memory2Writeback_c Register:
	Memory2Writeback_c M2W_c(clk, reset, RegWriteM, MemtoRegM, RegWriteW, MemtoRegW);
	
endmodule
