`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:15:28 05/28/2020 
// Design Name: 
// Module Name:    RegisterFile 
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
module RegisterFile(
	// initialize inputs and outputs:
	input clk,
	input reg_write,
	input [4:0] read_reg1, 
	input [4:0] read_reg2,
	input [4:0] write_reg,
	input [31:0] write_data,
	output [31:0] read_data1,
	output [31:0] read_data2
	);
	
	// initialize register_file:
	reg [31:0] RF_data[31:0];
	
	// Read from register_file:
	assign read_data1 = RF_data[read_reg1];
	assign read_data2 = RF_data[read_reg2];
	
	// Write to register_file:
	always @(posedge clk) begin
		if(reg_write)
			RF_data[write_reg] <= write_data;
			
		RF_data[0] <= 32'h00000000;
	end

endmodule
