#include <Gaveta3].h>

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


if(x>50 && x<76){output_high(pin_e0);}
switch(x){
case 51:  output_high(pin_b7);break;
case 52:  output_high(pin_b6);break;
case 53:  output_high(pin_b5);break;
case 54:  output_high(pin_b4);break;
case 55:  output_high(pin_b3);break;
case 56:  output_high(pin_b2);break;
case 57:  output_high(pin_b1);break;
case 58:  output_high(pin_b0);break;
case 59:  output_high(pin_d7);break;
case 60: output_high(pin_d6);break;
case 61: output_high(pin_d5);break;
case 62: output_high(pin_d4);break;
case 63: output_high(pin_c6);break;
case 64: output_high(pin_c5);break;
case 65: output_high(pin_c4);break;
case 66: output_high(pin_d3);break;
case 67: output_high(pin_d2);break;
case 68: output_high(pin_d1);break;
case 69: output_high(pin_d0);break;
case 70: output_high(pin_c3);break;
case 71: output_high(pin_c2);break;
case 72: output_high(pin_c1);break;
case 73: output_high(pin_c0);break;
case 74: output_high(pin_e2);break;
case 75: output_high(pin_e1);break;}

if(input(pin_a0)){ output_b(0); output_d(0); output_e(0); output_c(0b10000000);x=0;}




}}



