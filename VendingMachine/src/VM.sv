module VM (
    //inputs
    input logic Nickel_i, Dime_i, Quarter_i, clk_i,
    //outputs
    output logic soda_o,
    output logic [2:0] change_o
);
int temp = 0;
always @(posedge clk_i) begin
    if (Nickel_i) begin
        temp <= temp + 5;
    end else if (Dime_i) begin
        temp <= temp + 10;
    end else if (Quarter_i) begin
        temp <= temp + 25;
    end
    if (temp >= 20) begin
        soda_o <= 1'b1;
        case (temp-20)
        0: begin
             change_o <= '0;
             temp <= 0;
        end
        5: begin 
            change_o <= 3'b001;
            temp <= 0;
        end
        10: begin 
            change_o <= 3'b010;
            temp <= 0;
        end
        15: begin 
            change_o <= 3'b011;
            temp <= 0;
        end
        20: begin 
            change_o <= 3'b100;
            temp <= 0;
        end
        default: change_o <= '0;
        endcase
    end else begin
        soda_o <= '0;
        change_o <= '0;
    end
end
endmodule : VM
