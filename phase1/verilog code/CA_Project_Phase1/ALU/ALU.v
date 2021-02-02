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
	input signed [31:0] A, B;
	input [2:0] ALUcontrol;
	output reg [31:0] Y;
	output reg Z;
	
	// calculate the ALU output:
	always@(ALUcontrol) begin
		Z = 1'b0;
		case(ALUcontrol) 
			3'b000 :
				begin
				Y = A + B;
				if(~Y)
					Z = 1'b0;
				end
			
			3'b001 :
				begin
				Y = A - B;
				if(~Y)
					Z = 1'b0;
				end
			
			3'b010 :
				begin
				Y = A & B;
				if(~Y)
					Z = 1'b0;
				end
			
			3'b011 :
				begin
				Y = A | B;
				if(~Y)
					Z = 1'b0;
				end
			
			3'b100 :
				begin
				Y = A ^ B;
				if(~Y)
					Z = 1'b0;
				end
			
			3'b101 :
				begin
				Y = ~(A | B);
				if(~Y)
					Z = 1'b0;
				end
			
			3'b110:
				begin
				Y = A < B;
				if(~Y)
					Z = 1'b0;
				end
				
			3'b111:
				begin
				Y = {0,A} < {0,B};
				if(~Y)
					Z = 1'b0;
				end
		endcase
	end

endmodule
