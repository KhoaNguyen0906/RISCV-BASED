`default_nettype none

module top
(
  // Peripheral
  input  logic [31:0]      io_sw_i   ,
  output logic [31:0]      io_lcd_o  ,
  output logic [31:0]      io_ledg_o ,
  output logic [31:0]      io_ledr_o ,
  output logic [31:0]      io_hex0_o ,
  output logic [31:0]      io_hex1_o ,
  output logic [31:0]      io_hex2_o ,
  output logic [31:0]      io_hex3_o ,
  output logic [31:0]      io_hex4_o ,
  output logic [31:0]      io_hex5_o ,
  output logic [31:0]      io_hex6_o ,
  output logic [31:0]      io_hex7_o ,

  // output logic [31:0]      pc_debug_o,

  // Clock and asynchronous reset active low
  input  logic             clk_i     ,
  input  logic             rst_ni
);

  design1 design1 (
    .sw   (io_sw_i   ),
    .io_LCD  (io_lcd_o  ),
    .io_ledg (io_ledg_o ),
    .io_ledr (io_ledr_o ),
    .io_hex0 (io_hex0_o ),
    .io_hex1 (io_hex1_o ),
    .io_hex2 (io_hex2_o ),
    .io_hex3 (io_hex3_o ),
    .io_hex4 (io_hex4_o ),
    .io_hex5 (io_hex5_o ),
    .io_hex6 (io_hex6_o ),
    .io_hex7 (io_hex7_o ),
    .clk     (clk_i     ),
    .rst    (rst_ni    )
  );

endmodule : top
