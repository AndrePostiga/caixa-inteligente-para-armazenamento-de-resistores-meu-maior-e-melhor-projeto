#include <Gaveta4.h>

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


if(x>75 && x<101){output_high(pin_e0);}
switch(x){
case 76:  output_high(pin_b7);break;
case 77:  output_high(pin_b6);break;
case 78:  output_high(pin_b5);break;
case 79:  output_high(pin_b4);break;
case 80:  output_high(pin_b3);break;
case 81:  output_high(pin_b2);break;
case 82:  output_high(pin_b1);break;
case 83:  output_high(pin_b0);break;
case 84:  output_high(pin_d7);break;
case 85: output_high(pin_d6);break;
case 86: output_high(pin_d5);break;
case 87: output_high(pin_d4);break;
case 88: output_high(pin_c6);break;
case 89: output_high(pin_c5);break;
case 90: output_high(pin_c4);break;
case 91: output_high(pin_d3);break;
case 92: output_high(pin_d2);break;
case 93: output_high(pin_d1);break;
case 94: output_high(pin_d0);break;
case 95: output_high(pin_c3);break;
case 96: output_high(pin_c2);break;
case 97: output_high(pin_c1);break;
case 98: output_high(pin_c0);break;
case 99: output_high(pin_e2);break;
case 100: output_high(pin_e1);break;}

if(input(pin_a0)){ output_b(0); output_d(0); output_e(0); output_c(0b10000000);x=0;}




}}



