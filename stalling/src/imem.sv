/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSED */

module imem (
 
    input  [12:0] pc,
    output [31:0] inst
);

    // Memory for Instructions (8KB)
    reg [31:0] inst_mem [0:2047];
    wire [10:0] rom_addr = pc[12:2];
 assign inst = inst_mem[rom_addr]; 
	 initial begin
	 	$readmemh("imem.mem",inst_mem);
	 end
 

endmodule
