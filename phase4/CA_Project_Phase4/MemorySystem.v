`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:08:39 07/21/2020 
// Design Name: 
// Module Name:    MemorySystem 
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
module MemorySystem(clk, reset, RWB, Data, Address, MemSysOut, Hit);
	// define inputs and outputs:
	input wire clk, reset, RWB;
	input wire [7:0] Data;
	input wire [5:0] Address;
	output wire [7:0] MemSysOut;
	output wire Hit;
	
	// define wires:
	wire [7:0] ReadData, WriteData;
	wire WriteEn_in;
	wire [7:0] Data_out;
	wire [5:0] Address_out;
	wire [7:0] HitMuxOut;
	wire WriteEn_out;
	
	
	// logic for instance Cache:
	MUX WriteDataCache(ReadData, Data, RWB, WriteData);
	assign WriteEn_in = (RWB | (!Hit));
	Cache cache(clk, reset, Address, WriteData, WriteEn_in, RWB,
					Data_out, Address_out, WriteEn_out, Hit);
					
	// logic for RAM:
	RAM ram(ReadData, Data_out, reset, Address, Address_out, clk, WriteEn_out, (!Hit));
	
	// logic for MemSysOut:
	MUX#(8) HitMux(ReadData, Data_out, Hit, HitMuxOut);
	MUX#(8) MemSysOut_mux(HitMuxOut, 8'b00000000, RWB, MemSysOut);


endmodule
