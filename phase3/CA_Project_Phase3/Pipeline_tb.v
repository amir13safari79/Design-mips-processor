`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:26:45 06/24/2020
// Design Name:   top
// Module Name:   D:/electrical engineering/computer Architecture/project/phase3/CA_Project_Phase3/Pipeline_tb.v
// Project Name:  CA_Project_Phase3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Pipeline_tb;
	integer file;
   reg clk = 1;
   always @(clk)
      clk <= #5 ~clk;
	
	

   reg reset;
   initial begin
      reset = 1;
      @(posedge clk);
      @(posedge clk);
      @(posedge clk);
      #1;
      reset = 0;
   end

   initial
      $readmemh("isort32.hex", Pipeline.imem.RAM);

   parameter end_pc = 32'h78;
 
   integer i;
   always @(Pipeline.PCF)
      if(Pipeline.PCF == end_pc) begin
         for(i=0; i<96; i=i+1) begin
            $write("%x ", Pipeline.dmem.RAM[32+i]); // 32+ for iosort32
            if(((i+1) % 16) == 0)
               $write("\n");
         end
         $stop;
      end
      
   top Pipeline(
      .clk(clk),
      .reset(reset)
   );

      
endmodule

