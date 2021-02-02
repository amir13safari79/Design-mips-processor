`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:18 06/12/2020 
// Design Name: 
// Module Name:    mips 
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
module mips(
	// initialize inputs and outputs
	input wire clk, reset,
	output wire [31:0] PCF,
	input wire [31:0] InstrF,
	output wire MemWriteM,
	output wire [31:0] ALUOutM, WriteDataM,
	input wire [31:0] ReadDataM
	);
	
	// initialize wire
	wire StallF, StallD;
	wire PCSrcD, RegWriteW, sign_extend;
	wire ForwardAD, ForwardBD;
	wire FlushE, RegDstE;
	wire [1:0] ForwardAE, ForwardBE;
	wire ALUSrcE;
	wire [2:0] ALUControlE;
	wire MemtoRegW;
	wire [31:0] InstrD;
	wire EqualD;
	wire [4:0] RsD, RtD;
	wire [4:0] RsE, RtE, WriteRegE, WriteRegM;
	wire [4:0] WriteRegW;
	
	wire BranchD, SgnZeroD;
	wire MemtoRegE, RegWriteE;
	wire MemtoRegM, RegWriteM;
	
	// instance HazardUnit:
	HazardUnit h(BranchD, RsD, RtD, RsE, RtE, WriteRegE,
					MemtoRegE, RegWriteE, WriteRegM, RegWriteM, MemtoRegM,
					WriteRegW, RegWriteW, StallF, StallD, ForwardAD, ForwardBD,
					FlushE, ForwardAE, ForwardBE);
	
	// instance ControlUnit:
	ControlUnit c(clk, reset, InstrD[31:26], InstrD[5:0], EqualD,
					FlushE, BranchD, SgnZeroD, PCSrcD,RegDstE,
					ALUSrcE, ALUControlE, MemtoRegE, RegWriteE,
					MemWriteM, MemtoRegM, RegWriteM, RegWriteW, MemtoRegW);
					  
	// instance datapath:
	datapath dp(clk, reset, StallF, StallD, PCSrcD, RegWriteW, sign_extend,
				ForwardAD, ForwardBD, FlushE, RegDstE, ForwardAE, ForwardBE,
				ALUSrcE, ALUControlE, MemtoRegW, InstrF, ReadDataM, PCF, InstrD, EqualD,
				RsD, RtD, RsE, RtE, WriteRegE, WriteRegM, ALUOutM, WriteDataM,
				WriteRegW);
endmodule
