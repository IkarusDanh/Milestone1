module top (
    //inputs
    input logic Nickel_i, Dime_i, Quarter_i, clk_i,
    //outputs
    output logic soda_o,
    output logic [2:0] change_o
);
VM dut (
    .Nickel_i (Nickel_i),
    .Dime_i (Dime_i),
    .Quarter_i (Quarter_i),
    .clk_i (clk_i),
    .soda_o (soda_o),
    .change_o (change_o)
);
endmodule : top
