`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:47:28 06/23/2020 
// Design Name: 
// Module Name:    HazardUnit 
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
module HazardUnit(
	// initialize inputs and outputs:
	input wire BranchD,
	input wire [4:0] RsD, RtD,
	input wire [4:0] RsE, RtE,
	input wire [4:0] WriteRegE,
	input wire MemtoRegE, RegWriteE,
	input wire [4:0] WriteRegM,
	input wire RegWriteM, MemtoRegM,
	input wire [4:0] WriteRegW,
	input wire RegWriteW,
	
	output wire StallF, StallD,
	output wire ForwardAD, ForwardBD,
	output wire FlushE,
	output reg [1:0] ForwardAE, ForwardBE
	);
	
	// dfine wires:
	wire lwstall, branchstall;

	// determine outputs:
	// Forwarding logic:
	assign ForwardAD = (RsD != 0) & (RsD == WriteRegM) & RegWriteM;
	assign ForwardBD = (RtD != 0) & (RtD == WriteRegM) & RegWriteM;
	
	always@(RsE, RtE, WriteRegM, RegWriteM, WriteRegW, RegWriteW)
	begin
		// determine ForwardAE:
		if ((RsE != 0) & (RsE == WriteRegM) & RegWriteM)
			ForwardAE = 2'b10;
		else if((RsE != 0) & (RsE == WriteRegW) & RegWriteW)
			ForwardAE = 2'b01;
		else
			ForwardAE = 2'b00;
		
		// determine ForwardBE:
		if ((RtE != 0) & (RtE == WriteRegM) & RegWriteM)
			ForwardBE = 2'b10;
		else if((RtE != 0) & (RtE == WriteRegW) & RegWriteW)
			ForwardBE = 2'b01;
		else
			ForwardBE = 2'b00;
	end

	
	// Stalling logic:
	assign lwstall = ((RsD == RtD) | (RtD == RtE)) & MemtoRegE ;
	assign branchstall = (BranchD & RegWriteE & (WriteRegE == RsD | WriteRegE == RtD))
								|
								(BranchD & MemtoRegM & (WriteRegM == RsD | WriteRegM == RtD));
								
	assign StallF = lwstall | branchstall;
	assign StallD = lwstall | branchstall;
	assign FlushE = lwstall | branchstall;
	

	

endmodule
