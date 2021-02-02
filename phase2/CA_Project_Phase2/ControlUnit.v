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
module ControlUnit(op , funct, zero, MemtoReg, MemWrite ,PCsrc, ALUop, ALUsrc, RegDst, RegWrite, SgnZero);
	// initial inputs and outputs :
	input wire zero;
	input wire [5:0] funct, op;
	output reg MemtoReg,MemWrite,PCsrc,ALUsrc,RegDst,RegWrite,SgnZero;
	output reg [2:0] ALUop;
	
	// determine contoroller signal:
	always@(op, funct, zero)
	begin
		if(op == 6'b000000) // R-type instructions
		begin
			MemtoReg = 1'b0;
			MemWrite = 1'b0;
			PCsrc = 1'b0;
			ALUsrc = 1'b0;
			RegDst = 1'b1;
			RegWrite = 1'b1;
			SgnZero = 1'bx;
			case(funct)
				// add
				6'b100000:
					ALUop = 3'b000;
					
				// add unsigned(addu)
				6'b100001:
					ALUop = 3'b000;
					
				// sub
				6'b100010:
					ALUop = 3'b001;
					
				// sub unsigned(subu)
				6'b100011:
					ALUop = 3'b001;
					
				// and
				6'b100100:
					ALUop = 3'b010;
					
				// or
				6'b100101:
					ALUop = 3'b011;
				
				// xor
				6'b100110:
					ALUop = 3'b100;
					
				// nor
				6'b100111:
					ALUop = 3'b101;
					
				// set less than(slt)
				6'b101010:
					ALUop = 3'b110;
					
				// set less than unsigned(sltu)
				6'b101011:
					ALUop = 3'b111;
					
				default:
					ALUop = 3'bxxx;
			endcase
		end
		
		else  // I_type instructions
		begin
			case(op)
				// load word(lw)
				6'b100011:  begin
									MemtoReg = 1'b1;
									MemWrite = 1'b0;
									PCsrc = 1'b0;
									ALUop = 3'b000;
									ALUsrc = 1'b1;
									RegDst = 1'b0;
									RegWrite = 1'b1;
									SgnZero = 1'b1;
								end
								
				// store word(sw)
				6'b101011:  begin
									MemtoReg = 1'bx;
									MemWrite = 1'b1;
									PCsrc = 1'b0;
									ALUop = 3'b000;
									ALUsrc = 1'b1;
									RegDst = 1'bx;
									RegWrite = 1'b0;
									SgnZero = 1'b1;
								end
								
				// branch if equal(beq)
				6'b000100:  begin
									MemtoReg = 1'bx;
									MemWrite = 1'b0;
									PCsrc = zero;
									ALUop = 3'b001;
									ALUsrc = 1'b0;
									RegDst = 1'bx;
									RegWrite = 1'b0;
									SgnZero = 1'b1;
								end
				
				// branch if not equal(bne)
				6'b000101:  begin
									MemtoReg = 1'bx;
									MemWrite = 1'b0;
									PCsrc = !zero;
									ALUop = 3'b001;
									ALUsrc = 1'b0;
									RegDst = 1'bx;
									RegWrite = 1'b0;
									SgnZero = 1'b1;
								end
								
				// and immediate(andi)				
				6'b001100:  begin
									MemtoReg = 1'b0;
									MemWrite = 1'b0;
									PCsrc = 1'b0;
									ALUop = 3'b010;
									ALUsrc = 1'b1;
									RegDst = 1'b0;
									RegWrite = 1'b1;
									SgnZero = 1'b0;
								end
							
				// or immediate(ori)				
				6'b001101:  begin
									MemtoReg = 1'b0;
									MemWrite = 1'b0;
									PCsrc = 1'b0;
									ALUop = 3'b011;
									ALUsrc = 1'b1;
									RegDst = 1'b0;
									RegWrite = 1'b1;
									SgnZero = 1'b0;
								end
								
				// xor immediate(xori)				
				6'b001110:  begin
									MemtoReg = 1'b0;
									MemWrite = 1'b0;
									PCsrc = 1'b0;
									ALUop = 3'b100;
									ALUsrc = 1'b1;
									RegDst = 1'b0;
									RegWrite = 1'b1;
									SgnZero = 1'b0;
								end
					
				// add immediate(addi)				
				6'b001000:  begin
									MemtoReg = 1'b0;
									MemWrite = 1'b0;
									PCsrc = 1'b0;
									ALUop = 3'b000;
									ALUsrc = 1'b1;
									RegDst = 1'b0;
									RegWrite = 1'b1;
									SgnZero = 1'b1;
								end
								
				// add immediate unsigned(addiu)				
				6'b001001:  begin
									MemtoReg = 1'b0;
									MemWrite = 1'b0;
									PCsrc = 1'b0;
									ALUop = 3'b000;
									ALUsrc = 1'b1;
									RegDst = 1'b0;
									RegWrite = 1'b1;
									SgnZero = 1'b1;
								end
								
				// set less than immediate(slti)				
				6'b001010:  begin
									MemtoReg = 1'b0;
									MemWrite = 1'b0;
									PCsrc = 1'b0;
									ALUop = 3'b110;
									ALUsrc = 1'b1;
									RegDst = 1'b0;
									RegWrite = 1'b1;
									SgnZero = 1'b1;
								end
				
				// set less than immediate unsigned(sltiu)				
				6'b001011:  begin
									MemtoReg = 1'b0;
									MemWrite = 1'b0;
									PCsrc = 1'b0;
									ALUop = 3'b111;
									ALUsrc = 1'b1;
									RegDst = 1'b0;
									RegWrite = 1'b1;
									SgnZero = 1'b1;
								end
					
				// default				
				default:  begin
									MemtoReg = 1'bx;
									MemWrite = 1'bx;
									PCsrc = 1'bx;
									ALUop = 3'bxxx;
									ALUsrc = 1'bx;
									RegDst = 1'bx;
									RegWrite = 1'bx;
									SgnZero = 1'bx;
								end
			endcase		
		end
	end				
endmodule
