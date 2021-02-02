`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:05:30 07/11/2020 
// Design Name: 
// Module Name:    RAM 
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
module RAM (ReadData, WriteData, Reset,readAddress,writeAddress, Clk, writeEn,readEn);
  
	output [7 : 0] ReadData;
	input [7 : 0] WriteData;
	input [5 : 0] readAddress,writeAddress;
	input Clk  ,writeEn , readEn , Reset;
  
	reg [7 : 0] Memory [0 : 63];
	integer i;
	assign ReadData =(readEn)? Memory[readAddress]:8'bzzzzzzzz;
  
	always @(posedge Clk)
	begin
		if (Reset) 
		begin
			for(i=0;i<64;i=i+1)
				Memory [i] = 8'b00000000;		
		end 
	 
		else  if (writeEn)
			Memory [writeAddress] = WriteData;
    
	end
endmodule