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
	output wire [31:0] pc,
	input wire [31:0] instr,
	output wire memwrite,
	output wire [31:0] alu_result, writedata,
	input wire [31:0] readdata
	);
	
	// initialize wire
	wire memtoreg, alusrc, regdst,regwrite;
	wire sign_extend, pcsrc, zero;
	
	wire [2:0] alucontrol;
	
	// instance ControlUnit:
	ControlUnit c(instr[31:26], instr[5:0], zero,
					  memtoreg, memwrite, pcsrc, alucontrol,
					  alusrc, regdst, regwrite, sign_extend);
					  
	// instance datapath:
	datapath dp(clk, reset, memtoreg, pcsrc,
					alusrc, regdst, regwrite, sign_extend,
					alucontrol, zero, pc, instr, alu_result,
					writedata, readdata);
endmodule
