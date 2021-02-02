`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:21:50 05/29/2020
// Design Name:   DataMemory
// Module Name:   D:/electrical engineering/computer Architecture/project/phase1/verilog code/CA_Project_Phase1/DataMemory_test.v
// Project Name:  CA_Project_Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 10ns/1ns

module DataMemory_test();
  
  parameter mem_delay = 3;   // choose this same as your module's delay parameter
	//registers
	reg clk;
	reg WriteEnable;
	reg [31:0]WriteData;
	reg [31:0]Address;
	wire Ready;
	//wires
	wire [31:0]ReadData;
	
	initial
		begin
			clk = 0;
		end
  
	always
		begin
			#10 clk <= ~clk;  
		end
    
	initial 
		begin
			WriteEnable <= 1;
			Address <= 32'd64;
			WriteData <= 32'd45;
			@(posedge clk);
			Address <= 32'd128;
			WriteData <= 32'd100;
			@(posedge clk);
			WriteEnable <= 0;
			Address <= 32'd64;
			repeat (mem_delay+1) @(posedge clk);
			#32;
			Address <= 32'd128;
			repeat (mem_delay+2) @(posedge clk);
			
			#38;
		$stop();
		end
  
	DataMemory #(3) dmem(.clk(clk), .mem_write(WriteEnable), .address(Address), .write_data(WriteData), .read_data(ReadData), .mem_ready(Ready));          
endmodule




