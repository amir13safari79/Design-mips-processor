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
	// initialize inputs and outputs:
	input wire clk, reset,
	input wire StallF, StallD,
	input wire PCSrcD,RegWriteW,sign_extend,
	input wire ForwardAD, ForwardBD,
	input wire FlushE,RegDstE,
	input wire [1:0] ForwardAE, ForwardBE,
	input wire ALUSrcE,
	input wire [2:0] ALUControlE,
	input wire MemtoRegW,
	input wire [31:0] InstrF, ReadDataM,
	
	output wire [31:0] PCF,
	output wire [31:0] InstrD,
	output wire EqualD,
	output wire [4:0] RsD, RtD,
	output wire [4:0] RsE, RtE, WriteRegE, WriteRegM,
	output wire [31:0] ALUOutM,WriteDataM,
	output wire [4:0] WriteRegW
	);
	
	// define wires:
	wire [31:0] PCPlus4F, PCPlus4D;
	wire [31:0] RD1D, RD2D, RD1E, RD2E;
	wire [4:0]  RdD, RdE;
	wire [31:0] SignImmD, SignImmE;
	wire [31:0] ALUOutE, WriteDataE;
	wire [31:0] ReadDataW, ALUOutW;
	wire [31:0] SignImmD_shift, PCBranchD;
	wire [31:0] pcnext;
	wire [31:0] ResultW;
	wire [31:0] RD1D_MUXout, RD2D_MUXout;
	wire [31:0] SrcAE, SrcBE;
	
	
	// instance registers:
	// instance Fetch2Decode register:
	Fetch2Decode F2D(clk, reset, PCSrcD, StallD, InstrF, PCPlus4F, InstrD, PCPlus4D);
	
	// instance Decode2Execute_d register:
	assign RsD = InstrD[25:21];
	assign RtD = InstrD[20:16];
	assign RdD = InstrD[15:11];
	Decode2Execute_d D2E_d(clk, reset, FlushE, RD1D, RD2D, RsD, RtD,
								RdD, SignImmD, RD1E, RD2E, RsE, RtE, RdE, SignImmE);
	
	// instance Execute2Memory_d register:
	Execute2Memory_d E2M_d(clk, reset, ALUOutE, WriteDataE, WriteRegE, ALUOutM,
								WriteDataM, WriteRegM);
	
	// instance Memory2Writeback_d register:
	Memory2Writeback_d M2W_d(clk, reset, ReadDataM, ALUOutM, WriteRegM, ReadDataW,
									ALUOutW, WriteRegW);
								
	
	// logic for Fetch section of processor:
	reset_ff pcreg(clk, reset, StallF, pcnext, PCF);
	PCplus4  pcadd1(PCF, PCPlus4F);
	shift    shift_imm(SignImmD, SignImmD_shift);
	adder    pcadd2(PCPlus4D, SignImmD_shift, PCBranchD);
	MUX#(32) pcmux(PCPlus4F, PCBranchD, PCSrcD, pcnext);
	
	// logic for Decode section of processor:
	RegisterFile rf(clk, RegWriteW, InstrD[25:21], InstrD[20:16],
	                WriteRegW, ResultW, RD1D, RD2D);
	MUX#(32)   MemtoReg(ALUOutW, ReadDataW, MemtoRegW, ResultW);
						 
	MUX#(32) RD1D_mux(RD1D, ALUOutM, ForwardAD, RD1D_MUXout);
	MUX#(32) RD2D_mux(RD2D, ALUOutM, ForwardBD, RD2D_MUXout);
	assign EqualD = (RD1D_MUXout == RD2D_MUXout)? 1'b1 : 1'b0;
	
	signORzeroExtend se(InstrD[15:0], sign_extend, SignImmD);
	
	// logic for Execute section of processor:
	MUX#(5) WriteRegE_mux(RtE, RdE, RegDstE, WriteRegE);
	MUX3 SrcAE_mux(RD1E, ResultW, ALUOutM, ForwardAE, SrcAE);
	MUX3 WriteDataE_mux(RD2E, ResultW, ALUOutM, ForwardBE, WriteDataE);
	MUX#(32) SrcBE_mux(WriteDataE, SignImmE, ALUSrcE, SrcBE);
	ALU alu(.A(SrcAE), .B(SrcBE), .ALUcontrol(ALUControlE), .Y(ALUOutE));
endmodule
