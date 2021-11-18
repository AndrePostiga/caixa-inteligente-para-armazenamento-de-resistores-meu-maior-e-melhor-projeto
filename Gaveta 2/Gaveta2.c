#include <Gaveta2.h>
int x;

void main()
{
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_ccp1(CCP_OFF);

   //TODO: User Code


while(true){



if(kbhit()){
   x=getc();
   delay_ms(2000);}


if(x>25 && x<51){output_high(pin_e0);}
switch(x){
case 26:  output_high(pin_b7);break;
case 27:  output_high(pin_b6);break;
case 28:  output_high(pin_b5);break;
case 29:  output_high(pin_b4);break;
case 30:  output_high(pin_b3);break;
case 31:  output_high(pin_b2);break;
case 32:  output_high(pin_b1);break;
case 33:  output_high(pin_b0);break;
case 34:  output_high(pin_d7);break;
case 35: output_high(pin_d6);break;
case 36: output_high(pin_d5);break;
case 37: output_high(pin_d4);break;
case 38: output_high(pin_c6);break;
case 39: output_high(pin_c5);break;
case 40: output_high(pin_c4);break;
case 41: output_high(pin_d3);break;
case 42: output_high(pin_d2);break;
case 43: output_high(pin_d1);break;
case 44: output_high(pin_d0);break;
case 45: output_high(pin_c3);break;
case 46: output_high(pin_c2);break;
case 47: output_high(pin_c1);break;
case 48: output_high(pin_c0);break;
case 49: output_high(pin_e2);break;
case 50: output_high(pin_e1);break;}

if(input(pin_a0)){ output_b(0); output_d(0); output_e(0); output_c(0b10000000);x=0;}




}}



