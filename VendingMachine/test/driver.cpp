#define MAX_SIM 100

void set_random(Vtop *dut, vluint64_t sim_unit) {
int  i=rand()%3;
if (i==0)
{
    dut -> Nickel_i = 1;
    dut -> Dime_i = 0;
    dut -> Quarter_i = 0;
}
else if (i==1)
{
    dut -> Nickel_i = 0;
    dut -> Dime_i = 1;
    dut -> Quarter_i = 0;
}
else if (i==2)
{
    dut -> Nickel_i = 0;
    dut -> Dime_i = 0;
    dut -> Quarter_i = 1;
}

}
