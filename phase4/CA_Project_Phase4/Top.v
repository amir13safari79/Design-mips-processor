`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:58 07/21/2020 
// Design Name: 
// Module Name:    Top 
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
module Top(clk, reset, Hit, MemSysOut, RWB, Data, Address);
	// define inputs and outputs:
	input wire clk, reset;
	output wire Hit;
	output wire [7:0] MemSysOut;
	output wire RWB;
	output wire [7:0] Data;
	output wire [5:0] Address;
	
	// define wires:
	//wire RWB;
	//wire [7:0] Data;
	//wire [5:0] Address;
	
	// instance Processor and MemorySystem:
	Processor processor(clk, reset, RWB, Address, Data);
	MemorySystem memory_system(clk, reset, RWB, Data, Address, MemSysOut, Hit);

endmodule
