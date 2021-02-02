`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:07:57 05/28/2020
// Design Name:   Instruction_mem
// Module Name:   D:/electrical engineering/computer Architecture/project/phase1/verilog code/CA_Project_Phase1/InstructionMemory_test.v
// Project Name:  CA_Project_Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Instruction_mem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 10ns/1ns

module InstructionMemory_test();
	//registers
	reg [31:0]Address;
	
	//wires
	wire [31:0]ReadData;
	
	initial 
		begin
			Address <= 32'd0;
			#32;
			Address <= 32'd4;
			#32;
			Address <= 32'd8;
			#32;
			Address <= 32'd12;
			#32;
			Address <= 32'd16;
			#32;
			Address <= 32'd20;
			#32;
			Address <= 32'd24;
			#32;
			Address <= 32'd28;
			#32;
			Address <= 32'd32;
			#32;
			Address <= 32'd36;
			#32;
			Address <= 32'd40;
			#32;
			Address <= 32'd44;
			#32;
			Address <= 32'd48;
			#32;
			Address <= 32'd52;
			#32;
			Address <= 32'd56;
			#32;
			Address <= 32'd60;
			#32;
			Address <= 32'd64;
			#32;
			Address <= 32'd68;
			#32;
		$stop();
		end
  
	Instruction_mem imem(.address(Address),.read_data(ReadData));          
endmodule


