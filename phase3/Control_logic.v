`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:12:43 06/23/2020 
// Design Name: 
// Module Name:    Control_logic 
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
module Control_logic(
	// initial inputs and outputs :
	input wire clk,
	input wire [5:0] op, Funct,
	input wire EqualD,
	
	output reg RegWriteD, MemtoRegD, MemWriteD,
	output reg [2:0] ALUControlD,
	output reg ALUSrcD, RegDstD, BranchD,
	output reg PCSrcD, SgnZeroD
	);
	
	// determine contoroller signal:
	
	always@(op, Funct, EqualD)
	begin
		if(op == 6'b000000) // R-type instructions
		begin
			RegWriteD = 1'b1;
			MemtoRegD = 1'b0;
			MemWriteD = 1'b0;
			ALUSrcD = 1'b0;
			RegDstD = 1'b1;
			BranchD = 1'b0;
			PCSrcD = 1'b0;
			SgnZeroD = 1'bx;
			case(Funct)
				// add
				6'b100000:
					ALUControlD = 3'b000;
					
				// add unsigned(addu)
				6'b100001:
					ALUControlD = 3'b000;
					
				// sub
				6'b100010:
					ALUControlD = 3'b001;
					
				// sub unsigned(subu)
				6'b100011:
					ALUControlD = 3'b001;
					
				// and
				6'b100100:
					ALUControlD = 3'b010;
					
				// or
				6'b100101:
					ALUControlD = 3'b011;
				
				// xor
				6'b100110:
					ALUControlD = 3'b100;
					
				// nor
				6'b100111:
					ALUControlD = 3'b101;
					
				// set less than(slt)
				6'b101010:
					ALUControlD = 3'b110;
					
				// set less than unsigned(sltu)
				6'b101011:
					ALUControlD = 3'b111;
					
				default:
					ALUControlD = 3'bxxx;
			endcase
		end
		
		else  // I_type instructions
		begin
			case(op)
				// load word(lw)
				6'b100011:  begin
									RegWriteD = 1'b1;
									MemtoRegD = 1'b1;
									MemWriteD = 1'b0;
									ALUControlD = 3'b000;
									ALUSrcD = 1'b1;
									RegDstD = 1'b0;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b1;
								end
								
				// store word(sw)
				6'b101011:  begin
									RegWriteD = 1'b0;
									MemtoRegD = 1'bx;
									MemWriteD = 1'b1;
									ALUControlD = 3'b000;
									ALUSrcD = 1'b1;
									RegDstD = 1'bx;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b1;
								end
								
				// branch if equal(beq)
				6'b000100:  begin
									RegWriteD = 1'b0;
									MemtoRegD = 1'bx;
									MemWriteD = 1'b0;
									ALUControlD = 3'b001;
									ALUSrcD = 1'b0;
									RegDstD = 1'bx;
									BranchD = 1'b1;
									PCSrcD = EqualD;
									SgnZeroD = 1'b1;
								end
				
				// branch if not equal(bne)
				6'b000101:  begin
									RegWriteD = 1'b0;
									MemtoRegD = 1'bx;
									MemWriteD = 1'b0;
									ALUControlD = 3'b001;
									ALUSrcD = 1'b0;
									RegDstD = 1'bx;
									BranchD = 1'b1;
									PCSrcD = !EqualD;
									SgnZeroD = 1'b1;
								end
								
				// and immediate(andi)				
				6'b001100:  begin
									RegWriteD = 1'b1;
									MemtoRegD = 1'b0;
									MemWriteD = 1'b0;
									ALUControlD = 3'b010;
									ALUSrcD = 1'b1;
									RegDstD = 1'b0;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b0;
								end
							
				// or immediate(ori)				
				6'b001101:  begin
									RegWriteD = 1'b1;
									MemtoRegD = 1'b0;
									MemWriteD = 1'b0;
									ALUControlD = 3'b011;
									ALUSrcD = 1'b1;
									RegDstD = 1'b0;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b0;
								end
								
				// xor immediate(xori)				
				6'b001110:  begin
									RegWriteD = 1'b1;
									MemtoRegD = 1'b0;
									MemWriteD = 1'b0;
									ALUControlD = 3'b100;
									ALUSrcD = 1'b1;
									RegDstD = 1'b0;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b0;
								end
					
				// add immediate(addi)				
				6'b001000:  begin
									RegWriteD = 1'b1;
									MemtoRegD = 1'b0;
									MemWriteD = 1'b0;
									ALUControlD = 3'b000;
									ALUSrcD = 1'b1;
									RegDstD = 1'b0;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b1;
								end
								
				// add immediate unsigned(addiu)				
				6'b001001:  begin
									RegWriteD = 1'b1;
									MemtoRegD = 1'b0;
									MemWriteD = 1'b0;
									ALUControlD = 3'b000;
									ALUSrcD = 1'b1;
									RegDstD = 1'b0;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b1;
								end
								
				// set less than immediate(slti)				
				6'b001010:  begin
									RegWriteD = 1'b1;
									MemtoRegD = 1'b0;
									MemWriteD = 1'b0;
									ALUControlD = 3'b110;
									ALUSrcD = 1'b1;
									RegDstD = 1'b0;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b1;
								end
				
				// set less than immediate unsigned(sltiu)				
				6'b001011:  begin
									RegWriteD = 1'b1;
									MemtoRegD = 1'b0;
									MemWriteD = 1'b0;
									ALUControlD = 3'b111;
									ALUSrcD = 1'b1;
									RegDstD = 1'b0;
									BranchD = 1'b0;
									PCSrcD = 1'b0;
									SgnZeroD = 1'b1;
								end
					
				// default				
				default:  begin
									RegWriteD = 1'bx;
									MemtoRegD = 1'bx;
									MemWriteD = 1'bx;
									ALUControlD = 3'bxxx;
									ALUSrcD = 1'bx;
									RegDstD = 1'bx;
									BranchD = 1'bx;
									PCSrcD = 1'bx;
									SgnZeroD = 1'bx;
								end
			endcase		
		end
	end



endmodule
