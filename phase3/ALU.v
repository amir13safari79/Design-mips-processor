`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:13:15 05/28/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(A, B, ALUcontrol,Z, Y);
	// initialize inputs and outputs:
	input [31:0] A, B;
	input [2:0] ALUcontrol;
	output reg Z;
	output reg [31:0] Y;
	
	
	// define wires : unsigned A and unsigned B
	//wire [32:0] unsigned_a, unsigned_b;
	
	//assign unsigned_a = {0,A};
	//assign unsigned_b = {0,B};
	
	// calculate the ALU output:
	always@(ALUcontrol, A, B) begin
		Z = 1'b0;
		case(ALUcontrol) 
			// add
			3'b000 :
				begin
				Y = A + B;
				if(!Y)
					Z = 1'b1;
				end
			
			// sub
			3'b001 :
				begin
				Y = A - B;
				if(!Y)
					Z = 1'b1;
				end
			
			// and
			3'b010 :
				begin
				Y = A & B;
				if(!Y)
					Z = 1'b1;
				end
			
			// or
			3'b011 :
				begin
				Y = A | B;
				if(!Y)
					Z = 1'b1;
				end
			
			// xor
			3'b100 :
				begin
				Y = A ^ B;
				if(!Y)
					Z = 1'b1;
				end
			
			// nor
			3'b101 :
				begin
				Y = ~(A | B);
				if(!Y)
					Z = 1'b1;
				end
			
			// set less than
			3'b110:
				begin
				if(A[31] == 0 & B[31] == 0)
					Y = A < B;
				if(A[31] == 1 & B[31] == 0)
					Y = 1;
				if(A[31] == 0 & B[31] == 1)
					Y = 0;
				else
					Y = A < B;
				if(!Y)
					Z = 1'b1;
				end
			
			// set less than unsigned
			3'b111:
				begin
				Y = A < B;
				if(!Y)
					Z = 1'b1;
				end
		endcase
	end

endmodule
