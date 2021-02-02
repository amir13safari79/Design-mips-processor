`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:46:31 06/13/2020
// Design Name:   top
// Module Name:   D:/electrical engineering/computer Architecture/project/phase2/CA_Project_Phase2/fib_tb.v
// Project Name:  CA_Project_Phase2
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


`timescale 1ns/1ns

module fib_tb;
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
      $readmemh("fibtest.hex", SingleCycle.imem.RAM);

   parameter end_pc = 32'h44;
 
   integer i;
   always @(SingleCycle.pc)
      if(SingleCycle.pc == end_pc) begin
         for(i=0; i<15; i=i+1) begin
            $write("%x ", SingleCycle.dmem.RAM[16+i]);
            if(((i+1) % 16) == 0)
               $write("\n");
         end
         $stop;
      end
      
   top SingleCycle(
      .clk(clk),
      .reset(reset)
   );


endmodule



