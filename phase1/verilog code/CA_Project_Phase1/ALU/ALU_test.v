`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:16:15 05/28/2020
// Design Name:   ALU
// Module Name:   D:/electrical engineering/computer Architecture/project/phase1/verilog code/CA_Project_Phase1/ALU_test.v
// Project Name:  CA_Project_Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 10ns/1ns

module ALU_test();
	//registers
	reg [31:0]SrcA;
	reg [31:0]SrcB;
	reg [2:0]ALUControl;
	
	//wires
	wire Zero;
	wire [31:0]ALUResult;
	 
	
	initial 
		begin
			SrcA <= 32'd25;
			SrcB <= 32'd100;
			ALUControl <= 3'b000;//add
			#32;
			SrcA <= 32'd333;
			SrcB <= 32'd1024;
			ALUControl <= 3'b001;//sub
			#32;
			SrcA <= 32'hf0f0;
			SrcB <= 32'h0f0f;
			ALUControl <= 3'b010;//and
			#32;
			SrcA <= 32'ha0a0;
			SrcB <= 32'h5f5f;
			ALUControl <= 3'b011;//or
			#32;
			SrcA <= 32'h1212;
			SrcB <= 32'h3232;
			ALUControl <= 3'b100;//xor
			#32;
			SrcA <= 32'h2222;
			SrcB <= 32'h2222;
			ALUControl <= 3'b101;//nor
			#32;
			SrcA <= 32'hfffff345;
			SrcB <= 32'h7354;
			ALUControl <= 3'b110;//slt
			#32;
			SrcA <= 32'hfffff123;
			SrcB <= 32'h7811;
			ALUControl <= 3'b111;//sltu
			#32;
		$stop();
		end
  
	ALU alu(.A(SrcA), .B(SrcB), .ALUcontrol(ALUControl), .Y(ALUResult), .Z(Zero));     
endmodule


