`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:38:06 06/12/2020 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
	input wire clk, reset,
	input wire memtoreg, pcsrc,
	input wire alusrc, regdst,
	input wire regwrite, sign_extend,
	input wire [2:0] alucontrol,
	output wire zero,
	output wire [31:0] pc,
	input wire [31:0] instr,
	output wire [31:0] alu_result,writedata,
	input wire [31:0] readdata
	);
	
	wire [4:0] writereg;
	wire [31:0] pcnext,pcplus4,pcbranch;
	wire [31:0] signimm,signimm_shift;
	wire [31:0] srca,srcb;
	wire [31:0] result;
	
	// logic for next PC:
	reset_ff pcreg(clk, reset, pcnext, pc);
	PCplus4  pcadd1(pc, pcplus4);
	shift    shift_imm(signimm, signimm_shift);
	adder    pcadd2(pcplus4, signimm_shift, pcbranch);
	MUX#(32) pcmux(pcplus4, pcbranch, pcsrc, pcnext);
	
	// logic for register file:
	RegisterFile rf(clk, regwrite, instr[25:21], instr[20:16],
	                writereg, result, srca, writedata);
	MUX#(5)   write_reg(instr[20:16], instr[15:11],
						 regdst, writereg);
	MUX#(32)   MemtoReg(alu_result, readdata, memtoreg, result);
	signORzeroExtend se(instr[15:0], sign_extend, signimm);
	
	// logic for ALU:
	MUX#(32) srcbmux(writedata, signimm, alusrc, srcb);
	ALU alu(srca, srcb, alucontrol, zero, alu_result);
	
endmodule
