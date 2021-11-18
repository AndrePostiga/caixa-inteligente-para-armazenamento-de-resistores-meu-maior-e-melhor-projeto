#include <Central.h>


#define LCD_DATA4 PIN_D0
#define LCD_DATA5 PIN_D1
#define LCD_DATA6 PIN_D2
#define LCD_DATA7 PIN_D3
#define LCD_ENABLE_PIN PIN_A1
#define LCD_RS_PIN PIN_C4
#define LCD_RW_PIN PIN_C5
#define LCD_TYPE 2
#include <lcd.c>
#define c0 pin_c0
#define c1 pin_c1
#define c2 pin_c2
#define c3 pin_c3
#define ms delay_ms
#define varredura delay_ms(500)

int x;
int j=0;
int16 teclado =0;
int16 digito =0;
int w =0;
int16 unidade =0;
int16 dezena =0;
float dezena1 =0;
int16 centena =0;
int16 resultado =0;
float resultado1 =0;
int virgula =0;
int kohm =0;
int mohm =0;
float y =0;
int32 valor =0;
float valor1 =0;
int16 leitura =0;
float k =0;
int i =0;
int d=0;
int caixa =0;
int c =0; 
float v=0;
int a =0;

float subrotina( int16 leitura , int mohm , int kohm)
{

if(kohm==0 && mohm==0){

if(leitura >= 1600 && leitura <= 1855)
{y=1;}
if(leitura >= 1856 && leitura <= 2016)
{y=1.1;}
if(leitura >= 2017 && leitura <= 2176) 
{y=1.2;}
if(leitura >= 2177 && leitura <= 2400)
{y=1.3;}
if(leitura >= 2401 && leitura <= 2656)
{y=1.5;}
if(leitura >= 2657 && leitura <= 2880)
{y=1.6;}
if(leitura >= 2881 && leitura <= 3168)
{y=1.8;}
if(leitura >= 3169 && leitura <= 3488)
{y=2;}
if(leitura >= 3489 && leitura <= 3776)
{y=2.2;}
if(leitura >= 3777 && leitura <= 4128)
{y=2.4;}
if(leitura >= 4129 && leitura <= 4576)
{y=2.7;}
if(leitura >= 4577 && leitura <= 5024)
{y=3;}
if(leitura >= 5025 && leitura <= 5440)
{y=3.3;}
if(leitura >= 5441 && leitura <= 5856)
{y=3.6;}
if(leitura >= 5857 && leitura <= 6336)
{y=3.9;}
if(leitura >= 6337 && leitura <= 6880)
{y=4.3;}
if(leitura >= 6881 && leitura <= 7424)
{y=4.7; if(kohm==0 && mohm==0){c=17;}}

if(leitura >= 7425 && leitura <= 8000)
{y=5.1;}
if(leitura >= 8001 && leitura <= 8704)
{y=5.6;}
if(leitura >= 8705 && leitura <= 9440)
{y=6.2;}
if(leitura >= 9441 && leitura <= 10208)
{y=6.8;}
if(leitura >= 10209 && leitura <= 11040)
{y=7.5;} 
if(leitura >= 11041 && leitura <= 11968)
{y=8.2;}
if(leitura >= 11969 && leitura <= 12960)
{y=9.1;}
if(leitura >= 12961 && leitura <= 13816)
{y=10;}
if(leitura >= 13817 && leitura <= 14840)
{y=11;}
if(leitura >= 14841 && leitura <= 15832)
{y=12;}
if(leitura >= 15833 && leitura <= 17240)
{y=13;}
if(leitura >= 17241 && leitura <= 18616)
{y=15;}
if(leitura >= 18617 && leitura <= 19864)
{y=16;}
if(leitura >= 19865 && leitura <= 21432)
{y=18;}
if(leitura >= 21433 && leitura <= 22904)
{y=20;}
if(leitura >= 22905 && leitura <= 24280)
{y=22;}
if(leitura >= 24281 && leitura <= 25848)
{y=24;}
if(leitura >= 25849 && leitura <= 27608)
{y=27;}
if(leitura >= 27609 && leitura <= 29208)
{y=30;}
if(leitura >= 29209 && leitura <= 30648)
{y=33;}
if(leitura >= 30649 && leitura <= 31992)
{y=36;}
if(leitura >= 31993 && leitura <= 33077)
{y=39;}
if(leitura >= 33078 && leitura <= 34981)
{y=43;}
if(leitura >= 34982  && leitura <= 36312)
{y=47;}
if(leitura >= 36313  && leitura <= 37720)
{y=51;}
if(leitura >= 37721  && leitura <= 39256)
{y=56;}
if(leitura >= 39257  && leitura <= 40728)
{y=62;}
if(leitura >= 40729  && leitura <= 42136)
{y=68;}
if(leitura >= 42137 && leitura <= 43512)
{y=75;}
if(leitura >= 43513 && leitura <= 44856)
{y=82;}
if(leitura >= 44857  && leitura <= 45168)
{y=91;}
if(leitura >= 45169  && leitura <= 47384)
{y=100;}
if(leitura >= 47385  && leitura <= 48536)
{y=110;}
if(leitura >= 48537  && leitura <= 49560)
{y=120;}
if(leitura >= 49561  && leitura <= 50808)
{y=130;}
if(leitura >= 50809  && leitura <= 51928)
{y=150;}
if(leitura >= 51929 && leitura <= 52856)
{y=160;}
if(leitura >= 52857 && leitura <= 53880)
{y=180;}
if(leitura >= 53881  && leitura <= 54776)
{y=200;}
if(leitura >= 54777  && leitura <= 55544)
{y=220;}
if(leitura >= 55545  && leitura <= 56312)
{y=240;}
if(leitura >= 56313  && leitura <= 57112)
{y=270;}
if(leitura >= 57113  && leitura <= 57784)
{y=300;}
if(leitura >= 57785  && leitura <= 58328)
{y=330;}
if(leitura >= 58329  && leitura <= 58776)
{y=360;}
if(leitura >= 58777  && leitura <= 59256)
{y=390;}
if(leitura >= 59257  && leitura <= 59736)
{y=430;}
if(leitura >= 59737  && leitura <= 60120)
{y=470;}
if(leitura >= 60121  && leitura <= 60472)
{y=510;}
if(leitura >= 60473  && leitura <= 60856)
{y=560;}
if(leitura >= 60857  && leitura <= 61208)
{y=620;}
if(leitura >= 61209  && leitura <= 61528)
{y=680;}
if(leitura >= 61529  && leitura <= 61816)
{y=750;}
if(leitura >= 61817 && leitura <= 62072)
{y=820;}
if(leitura >= 62073  && leitura <= 62300)
{y=910;}}
      
      
if(kohm==1 && mohm==0){

if(leitura >= 1500 && leitura <= 1700)
{y=1;}
if(leitura >= 1701 && leitura <= 1856)
{y=1.1;}
if(leitura >= 1857 && leitura <= 1984) 
{y=1.2;}
if(leitura >= 1985 && leitura <= 2240)
{y=1.3;}
if(leitura >= 2241 && leitura <= 2496)
{y=1.5;}
if(leitura >= 2497 && leitura <= 2720)
{y=1.6;}
if(leitura >= 2721 && leitura <= 3040)
{y=1.8;}
if(leitura >= 3041 && leitura <= 3360)
{y=2;}
if(leitura >= 3361 && leitura <= 3648)
{y=2.2;}
if(leitura >= 3649 && leitura <= 4000)
{y=2.4;}
if(leitura >= 4001 && leitura <= 4448)
{y=2.7;}
if(leitura >= 4449 && leitura <= 4896)
{y=3;}
if(leitura >= 4897 && leitura <= 5344)
{y=3.3;}
if(leitura >= 5345 && leitura <= 5792)
{y=3.6;}
if(leitura >= 5793 && leitura <= 6272)
{y=3.9;}
if(leitura >= 6273 && leitura <= 6816)
{y=4.3;}
if(leitura >= 6817 && leitura <= 7410)
{y=4.7; if(kohm==1 && mohm==0){c=89;}}

if(leitura >= 7411 && leitura <= 7986)
{y=5.1;}
if(leitura >= 7987 && leitura <= 8672)
{y=5.6;}
if(leitura >= 8673 && leitura <= 9440)
{y=6.2;}
if(leitura >= 9441 && leitura <= 10240)
{y=6.8;}
if(leitura >= 10241 && leitura <= 11072)
{y=7.5;} 
if(leitura >= 11073 && leitura <= 12000)
{y=8.2;}
if(leitura >= 12001 && leitura <= 13024)
{y=9.1;}
if(leitura >= 13025 && leitura <= 14048)
{y=10;}
if(leitura >= 14049 && leitura <= 15104)
{y=11;}
if(leitura >= 15105 && leitura <= 16096)
{y=12;}
if(leitura >= 16097 && leitura <= 17472)
{y=13;}
if(leitura >= 17473 && leitura <= 18816)
{y=15;}
if(leitura >= 18817 && leitura <= 20064)
{y=16;}
if(leitura >= 20065 && leitura <= 21664)
{y=18;}
if(leitura >= 21665 && leitura <= 23136)
{y=20;}
if(leitura >= 23137 && leitura <= 24480)
{y=22;}
if(leitura >= 24481 && leitura <= 26048)
{y=24;}
if(leitura >= 26049 && leitura <= 27808)
{y=27;}
if(leitura >= 27809 && leitura <= 29440)
{y=30;}
if(leitura >= 29441 && leitura <= 30913)
{y=33;}
if(leitura >= 30914 && leitura <= 33288)
{y=36;}
if(leitura >= 33289 && leitura <= 33728)
{y=39;}
if(leitura >= 33729 && leitura <= 35232)
{y=43;}
if(leitura >= 35233 && leitura <= 36608)
{y=47;}
if(leitura >= 36609 && leitura <= 37984)
{y=51;}
if(leitura >= 37985 && leitura <= 39552)
{y=56;}
if(leitura >= 39553 && leitura <= 41056)
{y=62;}
if(leitura >= 41067 && leitura <= 42464)
{y=68;}
if(leitura >= 42465 && leitura <= 43808)
{y=75;}
if(leitura >= 43809 && leitura <= 45152)
{y=82;}
if(leitura >= 45153 && leitura <= 46528)
{y=91;}
if(leitura >= 46529 && leitura <= 47744)
{y=100;}
if(leitura >= 47745 && leitura <= 48928)
{y=110;}
if(leitura >= 48929 && leitura <= 49952)
{y=120;}
if(leitura >= 49953 && leitura <= 51104)
{y=130;}
if(leitura >= 51105 && leitura <= 52192)
{y=150;}
if(leitura >= 52193 && leitura <= 53120)
{y=160;}
if(leitura >= 53121 && leitura <= 54176)
{y=180;}
if(leitura >= 54177 && leitura <= 55072)
{y=200;}
if(leitura >= 55073 && leitura <= 55872)
{y=220;}
if(leitura >= 55873 && leitura <= 56672)
{y=240;}
if(leitura >= 56673 && leitura <= 57540)
{y=270;}
if(leitura >= 57541 && leitura <= 58180)
{y=300;}
if(leitura >= 58181 && leitura <= 58560)
{y=330;}
if(leitura >= 58561 && leitura <= 59008)
{y=360;}
if(leitura >= 59009  && leitura <= 59520)
{y=390;}
if(leitura >= 59521  && leitura <= 59968)
{y=430;}
if(leitura >= 59969  && leitura <= 60352)
{y=470;}
if(leitura >= 60353  && leitura <= 60704)
{y=510;}
if(leitura >= 60705  && leitura <= 61056)
{y=560;}
if(leitura >= 61057  && leitura <= 61376)
{y=620;}
if(leitura >= 61377  && leitura <= 61696)
{y=680;}
if(leitura >= 61697  && leitura <= 62016)
{y=750;}
if(leitura >= 62017  && leitura <= 62272)
{y=820;}
if(leitura >= 62273  && leitura <= 62750)
{y=910;}}
      
 if(kohm==0 && mohm==1){

if(leitura >= 1600 && leitura <= 1856)
{y=1;}
if(leitura >= 1857 && leitura <= 2016)
{y=1.1;}
if(leitura >= 2017 && leitura <= 2080) 
{y=1.2;}
if(leitura >= 2081 && leitura <= 2336)
{y=1.3;}
if(leitura >= 2337 && leitura <= 2656)
{y=1.5;}
if(leitura >= 2657 && leitura <= 2880)
{y=1.6;}
if(leitura >= 2881 && leitura <= 3186)
{y=1.8;}
if(leitura >= 3187 && leitura <= 3506)
{y=2;}
if(leitura >= 3507 && leitura <= 3872)
{y=2.2;}
if(leitura >= 3873 && leitura <= 4320)
{y=2.4;}
if(leitura >= 4321 && leitura <= 4832)
{y=2.7;}
if(leitura >= 4833 && leitura <= 5504)
{y=3;}
if(leitura >= 5505 && leitura <= 6080)
{y=3.3;}
if(leitura >= 5081 && leitura <= 6432)
{y=3.6;}
if(leitura >= 6433 && leitura <= 6976)
{y=3.9;}
if(leitura >= 6977 && leitura <= 7552)
{y=4.3;}
if(leitura >= 7553 && leitura <= 8416)
{y=4.7; if(kohm==0 && mohm==1){c=169;}}
if(leitura >= 8417 && leitura <= 9456)
{y=5.1;}
if(leitura >= 9457 && leitura <= 10062)
{y=5.6;}
if(leitura >= 10063 && leitura <= 10851)
{y=6.2;}
if(leitura >= 10852 && leitura <= 12003)
{y=6.8;}
if(leitura >= 12004 && leitura <= 13280)
{y=7.5;} 
if(leitura >= 13281 && leitura <= 14848)
{y=8.2;}
if(leitura >= 14849 && leitura <= 15840)
{y=9.1;}
if(leitura >= 15841 && leitura <= 16736)
{y=10;}
if(leitura >= 16737 && leitura <= 17408)
{y=11;}
if(leitura >= 17409 && leitura <= 18474)
{y=12;}
if(leitura >= 18475 && leitura <= 20842)
{y=13;}
if(leitura >= 20843 && leitura <= 22752)
{y=15;}
if(leitura >= 22753 && leitura <= 25313)
{y=16;}
if(leitura >= 25614 && leitura <= 26944)
{y=18;}
if(leitura >= 26945 && leitura <= 27648)
{y=20;}
if(leitura >= 27649 && leitura <= 28000)
{y=22;}}

  return y;
     }

float eepromLER(float v,int kohm,int mohm,int d)

//Subrotina que associa um valor FLOAT a um valor INT

{
if (d==1) // Flag de ativação da subrotina
{
if(kohm==0 && mohm==0){  //Flags que indicam que esta é a primeira faixa
if(v==1.1){ c=1;}
if(v==1.2){c=2;}
if(v==1.3){c=3;}
if(v==1.4){c=4;}      
if(v==1.6){c=5;}      
if(v==1.7){c=6;}      
if(v==1.8){c=7;}      
if(v==2.1){c=8;}      
if(v==2.3){c=9;}              
if(v==2.5){c=10;}      
if(v==2.8){c=11;} 
if(v==3.1){c=12;}      
if(v==3.4){c=13;}            
if(v==3.7){c=14;}        
if(v==4){c=15;}      
if(v==4.4){c=16;}
if(v==4.7){c=17;}
if(v==4.8){c=17;}
if(v==5.2){c=18;}      
if(v==5.7){c=19;}      
if(v==6.3){c=20;}      
if(v==6.9){c=21;}      
if(v==7.6){c=22;}      
if(v==8.3){c=23;}      
if(v==9.2){c=24;}      
if(v==10.1){c=25;}    
if(v==11.1){c=26;}      
if(v==12.1){c=27;}      
if(v==13.1){c=28;}      
if(v==15.1){c=29;}      
if(v==16.1){c=30;}      
if(v==18.1){c=31;}      
if(v==20.1){c=32;}      
if(v==22.1){c=33;}      
if(v==24.1){c=34;}      
if(v==27.1){c=35;}      
if(v==30.1){c=36;}      
if(v==33.1){c=37;}      
if(v==36.1){c=38;}      
if(v==39.1){c=39;}      
if(v==43.1){c=40;}      
if(v==47.1){c=41;}      
if(v==51.1){c=42;}     
if(v==56.1){c=43;}      
if(v==62.1){c=44;}      
if(v==68.1){c=45;}      
if(v==75.1){c=46;}      
if(v==82.1){c=47;}      
if(v==91.1){c=48;}     
if(v==100.1){c=49;}           
if(v==110.1){c=50;}      
if(v==120.1){c=51;}      
if(v==130.1){c=52;}      
if(v==150.1){c=53;}      
if(v==160.1){c=54;}     
if(v==180.1){c=55;}      
if(v==200.1){c=56;}      
if(v==220.1){c=57;}      
if(v==240.1){c=58;}      
if(v==270.1){c=59;}      
if(v==300.1){c=60;}      
if(v==330.1){c=61;}      
if(v==360.1){c=62;}     
if(v==390.1){c=63;}      
if(v==430.1){c=64;}      
if(v==470.1){c=65;}      
if(v==510.1){c=66;}      
if(v==560.1){c=67;}      
if(v==620.1){c=68;}      
if(v==680.1){c=69;}      
if(v==750.1){c=70;}      
if(v==820.1){c=71;}      
if(v==910.1){c=72;} }

/*
|-----------------------|      
|                       |
|                       |
|                       |
|      K ohm            |
|                       |
|                       |
|                       |
|-----------------------|  */

if(kohm==1 && mohm==0) //Flags que indicam que esta é a segunda faixa

{
if(v==1.1){c=73;}      
if(v==1.2){ c=74;}      
if(v==1.3){ c=75;}      
if(v==1.4){ c=76;}      
if(v==1.6){c=77;}      
if(v==1.7){c=78;}     
if(v==1.9){c=79;}      
if(v==2.1){c=80;}     
if(v==2.3){c=81;}            
if(v==2.5){c=82;}      
if(v==2.8){c=83;}      
if(v==3.1){c=84;}      
if(v==3.4){c=85;}            
if(v==3.7){c=86;}        
if(v==4){c=87;}      
if(v==4.4){c=88;}
if(v==4.7){c=89;}
if(v==4.8){c=89;}      
if(v==5.2){c=90;}      
if(v==5.7){c=91;}      
if(v==6.3){c=92;}      
if(v==6.9){c=93;}      
if(v==7.6){c=94;}      
if(v==8.3){c=95;}      
if(v==9.2){c=96;}      
if(v==10.1){c=97;}      
if(v==11.1){c=98;}      
if(v==12.1){c=99;}      
if(v==13.1){c=100;}      
if(v==15.1){c=101;}      
if(v==16.1){c=102;}      
if(v==18.1){c=103;}
if(v==20.1){c=104;}      
if(v==22.1){c=105;}      
if(v==24.1){c=106;}      
if(v==27.1){c=107;}      
if(v==30.1){c=108;}      
if(v==33.1){c=109;}      
if(v==36.1){c=110;}      
if(v==39.1){c=111;}      
if(v==43.1){c=112;}      
if(v==47.1){c=113;}      
if(v==51.1){c=114;}      
if(v==56.1){c=115;}      
if(v==62.1){c=116;}      
if(v==68.1){c=117;}      
if(v==75.1){c=118;}      
if(v==82.1){c=119;}      
if(v==91.1){c=120;}      
if(v==100.1){c=121;}            
if(v==110.1){c=122;}      
if(v==120.1){c=123;}      
if(v==130.1){c=124;}      
if(v==150.1){c=125;}      
if(v==160.1){c=126;}      
if(v==180.1){c=127;}      
if(v==200.1){c=128;}      
if(v==220.1){c=129;}      
if(v==240.1){c=130;}      
if(v==270.1){c=131;}    
if(v==300.1){c=132;}      
if(v==330.1){c=133;}      
if(v==360.1){c=134;}      
if(v==390.1){c=135;}      
if(v==430.1){c=136;}     
if(v==470.1){c=137;}      
if(v==510.1){c=138;}      
if(v==560.1){c=139;}      
if(v==620.1){c=140;}      
if(v==680.1){c=141;}      
if(v==750.1){c=142;}      
if(v==820.1){c=143;}      
if(v==910.1){c=144;}
      }
      
/*      
|-----------------------|      
|                       |
|                       |
|                       |
|      M ohm            |
|                       |
|                       |
|                       |
|-----------------------|  */

if(kohm==0 && mohm==1) //Flags que indicam que esta é a terceira faixa

{
if(v==1.1){c=145;}      
if(v==1.2){ c=146;}      
if(v==1.3){ c=147;}      
if(v==1.4){ c=148;}      
if(v==1.6){c=149;}      
if(v==1.7){c=150;}      
if(v==1.9){c=151;}      
if(v==2.1){c=152;}      
if(v==2.3){c=153;}             
if(v==2.5){c=154;}      
if(v==2.8){c=155;}      
if(v==3.1){c=156;}      
if(v==3.4){c=157;}            
if(v==3.7){ c=158;}        
if(v==4){c=159;}      
if(v==4.4){c=160;}   
if(v==4.7){c=161;}
if(v==4.8){c=161;}      
if(v==5.2){c=162;}      
if(v==5.7){c=163;}      
if(v==6.3){c=164;}      
if(v==6.9){c=165;}      
if(v==7.6){c=166;}      
if(v==8.3){c=167;}      
if(v==9.2){c=168;}      
if(v==10.1){c=169;}     
if(v==11.1){c=170;}      
if(v==12.1){c=171;}      
if(v==13.1){c=172;}      
if(v==15.1){c=173;}      
if(v==16.1){c=174;}      
if(v==18.1){c=175;}      
if(v==20.1){c=176;}      
if(v==22.1){c=177;}
}



} //if da variavel D
d=0;
return c;
}

void achaoled()
{

output_high(pin_b6);
delay_ms(100);
output_low(pin_b6);
delay_ms(100);


if(c==0){
k+=0.1;
d=1;
v=k;
c=eepromLER(v,kohm,mohm,d);}

for(i=0;i<250;i++)
{a=read_eeprom(i);
if(a==c){
         
          IF(i<=25){putc(i);
                    while(!kbhit()) {}
                    getch(); }
                    
  IF(i>=26 && i<=50){putc(i);
                    while(!kbhit()) {}
                    getch();}
                    


printf(lcd_putc,"\nCaixa= %u",i) ; 
delay_ms(2000);
i=251;}}

if(a!=c){
lcd_putc("\fCaixa nao Encontrada ");
lcd_putc("\nValor nao Armazenado");
delay_ms(1500);
 c=0;
}

c=252;
c=0;
}

void main()
{

   setup_adc_ports(AN0);
   setup_adc(ADC_CLOCK_INTERNAL);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_wdt(WDT_OFF);
   setup_timer_0(RTCC_INTERNAL);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_timer_3(T3_DISABLED|T3_DIV_BY_1);
   setup_ccp1(CCP_OFF);

   // TODO: USER CODE!!
lcd_init();

lcd_putc("\fCaixa Inteligente    ");
delay_ms(300);
lcd_putc("\n                    P");
delay_ms(50);
lcd_putc("\n                   Pa");
delay_ms(50);
lcd_putc("\n                  Par");
delay_ms(50);
lcd_putc("\n                 Para");
delay_ms(50);
lcd_putc("\n                Para ");
delay_ms(50);
lcd_putc("\n               Para r");
delay_ms(50);
lcd_putc("\n              Para re");
delay_ms(50);
lcd_putc("\n             Para res");
delay_ms(50);
lcd_putc("\n            Para resi");
delay_ms(50);
lcd_putc("\n           Para resis");
delay_ms(50);
lcd_putc("\n          Para resist");
delay_ms(50);
lcd_putc("\n         Para resisto");
delay_ms(50);
lcd_putc("\n        Para resistor");
delay_ms(50);
lcd_putc("\n       Para resistore");
delay_ms(50);
lcd_putc("\n      Para resistores");
delay_ms(50);
lcd_putc("\n     Para resistores ");
delay_ms(50);
lcd_putc("\n   Para resistores   ");
delay_ms(50);
lcd_putc("\n  Para resistores    ");
delay_ms(50);
lcd_putc("\nPara resistores -^^- ");
delay_ms(50);

delay_ms(1000);
set_adc_channel(0); // ativa o ad 
delay_ms(100);
lcd_putc("\f");
j=0;


while(true){
lcd_putc("\fPressione  B1=Buscar");
lcd_putc("\nPressione  B2=Ler   ");
delay_ms(200);

if(input(pin_a3)){leitura=1; // apagar uma caixa

teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
y=0;
valor=0;
valor1=0;
c=0;

lcd_putc("\fCaixa a ser apagada");
lcd_putc("\nNumero:            ");
delay_ms(500);

while(leitura==1){ //apaga eeprom

output_high(pin_d7);
teclado=input_b();
teclado=teclado & 15;
   
switch (teclado){
case 2:digito=7;
       w++;
       break;
case 4:digito=4;
       w++;
       break;
case 8:digito=1; 
       w++;
       break;}
   
output_low(pin_d7);   
output_high(pin_d6);
teclado=input_b();
teclado=teclado & 15;

switch (teclado){
case 1:digito=0;
       w++;
       break;
case 2:digito=8;
       w++;
       break;
case 4:digito=5; 
       w++;  
       break;
case 8:digito=2; 
       w++;  
       break;}

 
output_low(pin_d6);
output_high(pin_d5);
teclado=input_b();
teclado=teclado & 15;

switch (teclado){
case 2:digito=9; 
       w++;
       break;
case 4:digito=6; 
       w++;
       break;
case 8:digito=3; 
       w++;
       break;}

output_low(pin_d5);


switch(w){
case 1:w++; 
        unidade=digito;
        valor=digito ;
        printf(lcd_putc,"\nNumero:%lu",valor);
        delay_ms(270);
        break;

case 3:w++;
       dezena=(unidade*10)+digito;
       valor=dezena;
       printf(lcd_putc,"\nNumero:%lu",valor);
       delay_ms(270);
       break;
  
case 5:
       centena=(dezena*10)+digito;
       valor=centena;
       printf(lcd_putc,"\nNumero:%lu",valor);
       delay_ms(270);
       break;}

if(input(pin_B6)){
lcd_putc("\fCaixa a ser apagada");
lcd_putc("\nNumero:            ");
delay_ms(10);
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
kohm=0;
mohm=0;
y=0;
valor=0;
valor1=0;
v=0;
c=0;
}

if(input(pin_b7)) {leitura++;
lcd_putc("\fConfirmar = Enter   ");
lcd_putc("\nVoltar    = Deletar ");
delay_ms(2000);}

}

while(leitura==2){

if(input(pin_b6)){leitura=0;valor=0;
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
y=0;
valor1=0;
c=0;}

if(input(pin_b7)){ //Pressionado Enter

//variável do teclado "Valor"
if(valor==0) //Caso o valor digitado do teclado seja 0
{for(i=0;i<254;i++){ //Laço de repetição pra escrever na eeprom
write_eeprom(i,0);} //Escreve 0 em todos os endereços
lcd_putc("\fMemoria Resetada"); delay_ms(500);} //Diz que a memoria foi resetada


//variável do teclado "Valor"
else{ //Caso o valor digitado seja diferente de 0
write_eeprom(valor,0); //Escreve no endereço digitado o valor de resistor 0
printf(lcd_putc,"\fCaixa=%lu Apagada",valor);//Diz a caixa que foi apagada
delay_ms(1000);
} 

leitura=0;valor=0;
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
y=0;
valor1=0;
c=0;

}
}

} //while do menu apagar caixa


while(input(pin_e0)){ // ativa ohmimetro
output_high(pin_c0);
lcd_putc("\fInsira o Resistor  "); delay_ms(200);


if(input(pin_b4))
{
k=0;
x=0;
leitura=0;
valor=0;
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
y=0;
valor1=0;
c=0;
delay_ms(50);

output_high(c0);

leitura=read_adc(); delay_ms(500);

if(leitura>=62800){
lcd_putc("\fPor favor insira ");lcd_putc("\nO resistor   "); delay_ms(2000);}


if(leitura<62800){

lcd_putc("\fFazendo a Leitura,  "); 
lcd_putc("\nAguarde...          ");

if(x==0){
output_low(c0); // desativo relé de verificação 
output_high(c3);  // ativa relé da primeira faixa 39 Mohm 
varredura;
leitura=read_adc(); 
delay_ms(1000);
                                   
                                   if(leitura >= 1600 && leitura <= 62800){ // terceira faixa
                                   mohm=1; kohm=0;
                                   k=subrotina(leitura,mohm,kohm);    //chama subrotina
                                   printf(lcd_putc,"\f R= %1.1f Mohm",k);
                                   delay_ms(1500);
                                   achaoled(); 
                                   if(k!=0){x=1;}
                                   }}
                              
if(x==0){
output_low(c3);
output_high(c2);
varredura;
leitura=read_adc(); delay_ms(1000);

                                   if(leitura>= 1500 && leitura <= 62800){ // segunda faixa 
                                   kohm=1; mohm=0;
                                   k=subrotina(leitura,mohm,kohm);    //chama subrotina
                                   printf(lcd_putc,"\f R= %1.1f Kohm",k); delay_ms(1500);
                                   achaoled();
                                   if(k!=0){x=1;}
                                   }}
if(x==0){                                                                 
output_low(c2);
output_high(c1);
varredura;
leitura=read_adc(); delay_ms(1000); leitura-=200;

                                  
                                   if(leitura >= 1600 && leitura <= 62800){ // primeira faixa
                                   kohm=0; mohm=0;
                                   k=subrotina(leitura,mohm,kohm);              //chama subrotina
                                   printf(lcd_putc,"\f R= %1.1f Ohm",k); delay_ms(1500);
                                   achaoled();
                                   }}
                                   
                                   
output_low(c1);
output_low(c2);
output_low(c3);
x=0; 
kohm=0; 
mohm=0; 
k=0; 
delay_ms(50);

} //Chave das varreduras  
} //Chave do leitor
} //Chave do botãoPRESS do leitor


//////////////////////////
/// Teclado matricial  ///
/// _|___|__|__        ///   
///| 1 | 2 | 3 |--     /// 
///| 4 | 5 | 6 |--     ///
///| 7 | 8 | 9 |--     ///
///| * | 0 | # |--     ///
///|___________|       ///
///                    ///  
//////////////////////////



lcd_putc("\f");  //limpa o lcd

if(!input(pin_e1)){
   w=0;
   j=0;
   teclado=0;
   digito=0;
   w=0;
   unidade=0;
   dezena=0;
   dezena1=0;
   centena=0;
   resultado=0;
   resultado1=0;
   virgula=0;}

while(input(pin_e1)){ //Buscar resistor

   if(w==0){
            lcd_putc("\fNumero:              ");
            lcd_putc("\n                     ");
            delay_ms(100);}

output_high(pin_d7); //Ativa a primeira coluna do teclado
teclado=input_b();   //Atribui uma saída a uma variavel
teclado=teclado & 15;//AND com a variavel para liverar alguns ports da saída
      
//Recurso de "troca" da linguagem C      
switch (teclado){
case 1:w=100;  // Caso o * seja pressionado atribui um valor a w
       break;
case 2:digito=7; // Caso o 7 seja pressionado atribui um valor a w e a variavel digito
       w++;
       break;
case 4:digito=4; // Caso o 4 seja pressionado atribui um valor a w e a variavel digito
       w++;
       break;
case 8:digito=1; // Caso o 1 seja pressionado atribui um valor a w e a variavel digito
       w++;
       break;
                }
   
output_low(pin_d7);    // Desativa a primeira coluna  
output_high(pin_d6);  //Ativa a segunda coluna do teclado
teclado=input_b();
teclado=teclado & 15;

switch (teclado){
case 1:digito=0; //Atribui um valor a w e a variavel digito
       w++;
       break;
case 2:digito=8;
       w++;
       break;
case 4:digito=5;
       w++;   
       break;
case 8:digito=2;
       w++;   
       break;}

 
output_low(pin_d6);   // Desativa a segunda coluna 
output_high(pin_d5);  //Ativa a terceira coluna do teclado
teclado=input_b();
teclado=teclado & 15;

switch (teclado){
case 1:w=101;    // Caso o # seja pressionado atribui um valor a w
       break;
case 2:digito=9; //Atribui um valor a w e a variavel digito
       w++;
       break;
case 4:digito=6;
       w++;
       break;
case 8:digito=3;
       w++;
       break; }

output_low(pin_d5); //Desativa a terceira coluna do teclado
 
//A variavel W indica em que estapa do teclado o programa se encontra, caso ela
//seja 1, estamos nas casas das unidades, caso 2 na das dezenas , 3 centenas...

//No switch abaixo podemos notar o incremento de 1 em W toda vez que passa pelo
//case, por exemplo, digitamos 1 , ele atribui 1 a digito e entra no case 1 do W
//que atribui 2 e faz uma operação de escrita no LCD, como W vale 2 e não 1, o 
//programa ao fazer o looping novamente, não entrará mais no case um, ou seja,
//evita possíveis bugs e lentidões no programa, e como também não existe case 2
//o programa só entrará no case novamente quando digitarmos outro número pois
//W valerá 3 e entrará na operação das dezenas

switch(w){
case 1:
//J é o flag da vírgula, caso ela exista o programa não executará esta operação
       w++;
       if(j==0){
       unidade=digito;
       resultado1=unidade;
       printf(lcd_putc,"\fNumero:%1.0f",resultado1);
       lcd_putc("\n                     ");
       delay_ms(300);}
       break;
              
case 3:
//Algorítimo para a escrita das dezenas

       w++;
       dezena=(unidade*10)+digito;
       resultado1=dezena;
       dezena1=dezena;   
       
       if(j==1){
       resultado1 = dezena1;
       resultado1=resultado1/10;
       printf(lcd_putc,"\fNumero:%1.1f",resultado1);
       lcd_putc("\n                     ");
       delay_ms(300);}
              
       if(j==0){
       printf(lcd_putc,"\fNumero:%1.0f",resultado1);
       lcd_putc("\n                     ");
       delay_ms(300);}
       break;
              
case 5:
//Algorítimo para a escrita das centenas

       centena=(dezena*10)+digito;
       resultado1=centena;
       printf(lcd_putc,"\fNumero:%1.0f",resultado1);
       lcd_putc("\n                     ");
       delay_ms(300);
       break;
      
case 100:
//Algorítimo para a escrita do multiplicador K

         if(j==0){
         kohm=1;
         printf(lcd_putc, "\fNumero:%1.0f K", resultado1);
         lcd_putc("\n                     ");
         delay_ms(300);}
         if(j==1){
         kohm=1;
         printf(lcd_putc, "\fNumero:%1.1f K", resultado1);
         lcd_putc("\n                     ");
         delay_ms(300);}
         break; 
                 
case 101:    
//Algorítimo para a escrita do multiplicador M

         if(j==0){
         mohm=1;
         printf(lcd_putc, "\fNumero:%1.0f M", resultado1);
         lcd_putc("\n                     ");
         delay_ms(300);}
         if(j==1){
         mohm=1;
         printf(lcd_putc, "\fNumero:%1.1f M", resultado1);
         lcd_putc("\n                     ");
         delay_ms(300);}
         break; }
                                      
 
//Esta condição atribiu um flag a variável virgula

if(input(pin_B5))
{virgula=1;}       

//Esta condição verifica se o número digitado tem mais de uma casa decimal
//Caso não tenha o programa não adicionará a virgula

if(virgula == 1 && w == 2)
{printf(lcd_putc, "\fNumero:%1.0f. ", resultado1);
lcd_putc("\n                     ");
delay_ms(300);
j=1;}
         
  
//Esta condição zera todas as variáveis do teclado e escreve um 
//"vazio" no lugar dos números anteriormente digitados

if(input(pin_B6)){
   printf(lcd_putc,"\fNumero:  ");
   lcd_putc("\n                     ");
   j=0;
   teclado=0;
   digito=0;
   w=0;
   unidade=0;
   dezena=0;
   dezena1=0;
   centena=0;
   resultado=0;
   resultado1=0;
   virgula=0;
   kohm=0;
   mohm=0;
   y=0;
   valor=0;
   valor1=0;
   v=0;
   c=0;
   a=0;
   i = 0; 
   d=0;
   if(i==0){printf("\0");} 
   delay_ms(10);
}


//Caso o usiário coloque 2 multiplicadores, recebe a instrução de apagar
if(kohm>=1 && mohm>=1){
lcd_putc("\nPressione Deletar   ");
delay_ms(1000);}

if(input(pin_b7)){ //Apertado Enter

   i=0; //Zera a variável do laço FOR
   output_high(pin_b6); //Da um pulso na saída para zerar as gavetas
   delay_ms(100);
   output_low(pin_b6);
   delay_ms(100);
   if(i==0){printf("\0");} //Printa um número nulo para zerar o buffer
   delay_ms(10);
   v=resultado1;  //Coloca em V o resultado do teclado
   v+=0.1; //Adiciona 0,1 para tirar erro do PIC
   d=1;    //Ativa a FLAG da subrotina
   c=eepromLER(v,kohm,mohm,d); //Chama a subrotina 
   
   if(c==0){lcd_putc("\fValor Desconhecido  ");lcd_putc("\nPressione Deletar   "); delay_ms(2000);}
   //Se retornar 0 é porque o valor digitado não existe,ou seja, não está no banco de dados
   
   if(c!=0){ //Else if ou if diferente de 0 , caso o valor esteja armazenado
      for(i=0;i<250;i++) //Laço de repetição para buscar dentro dos endereços de memoria
      {  a=read_eeprom(i); //Joga o valor do endereço para dentro de A
         if(a==c){ //Quando A for igual a C (valor do banco de dados)
         
          IF(i<=25){putc(i); //Joga o valor do endereço pela porta serial se x for menor que 26
                    while(!kbhit()) {} //Aguarda a resposta do outro pic de que recebeu
                    getch(); //Pega dados pela porta serial  
                    }
                    
  IF(i>=26 && i<=50){putc(i); //Joga o valor do endereço pela porta serial se x for menor que 51
                    while(!kbhit()) {} //Aguarda a resposta do outro pic de que recebeu
                    getch();   //Pega dados pela porta serial  
                    }
                    
            
            printf(lcd_putc,"\nCaixa= %u",i); //Mostra ao usuário em qual caixa está o resistor
            delay_ms(2000); 
            i=251; //Sai do laço for pois acabou a busca pela caixa
            }}
         
         if(a!=c){ //Caso o PIC não encontre o valor em alguma caixa é porque não está armazenado
         lcd_putc("\fCaixa nao Encontrada");
         lcd_putc("\nValor nao Armazenado");
         delay_ms(1000);
          c=252; c=0;} //C diferente de A e zera em seguida para sair desse algoritimo

c=252; c=0; } //deixa C diferente de A e zera em seguida para sair desse algoritimo

}
} // while do botao

if(input(pin_a2)){ //Programar a Caixa

j=0;
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
virgula=0;
kohm=0;
mohm=0;
y=0;
valor=0;
valor1=0;
c=0;
a=0;
i=0;

leitura=1;

lcd_putc("\f Valor:             "); 
lcd_putc("\n Caixa:             ");
delay_ms(500);

while(leitura==1)
{ 

output_high(pin_d7);
teclado=input_b();
teclado=teclado & 15;
   
switch (teclado){
case 1:w=100;
       break;
case 2:digito=7;
       w++;
       break;
case 4:digito=4;
       w++;
       break;
case 8:digito=1;
       w++;
       break;}
   
output_low(pin_d7);   
output_high(pin_d6);
teclado=input_b();
teclado=teclado & 15;

switch (teclado){
case 1:digito=0;
       w++;
       break;
case 2:digito=8;
       w++;
       break;
case 4:digito=5;
       w++;   
       break;
case 8:digito=2;
       w++;   
       break;}

 
output_low(pin_d6);
output_high(pin_d5);
teclado=input_b();
teclado=teclado & 15;

switch (teclado){
case 1:w=101;
       break;
case 2:digito=9;
       w++;
       break;
case 4:digito=6;
       w++;
       break;
case 8:digito=3;
       w++;
       break; }

output_low(pin_d5);
 
 
 
switch(w){
case 1:w++;
       if(j==0){
       unidade=digito;
       resultado1=unidade;  v=resultado1;
       printf(lcd_putc,"\f Valor:%1.0f",v);
       lcd_putc("\n Caixa:             ");
       delay_ms(300);}
       break;
              
case 3:w++;
       dezena=(unidade*10)+digito;
       resultado1=dezena;
       dezena1=dezena;
       
              
       if(j==1){
       resultado1 = dezena1;
       resultado1=resultado1/10; v=resultado1;
       printf(lcd_putc,"\f Valor:%1.1f",v);
       lcd_putc("\n Caixa:             ");
       delay_ms(300);}
              
       if(j==0){ v=resultado1;
       printf(lcd_putc,"\f Valor:%1.0f",v);
       lcd_putc("\n Caixa:             ");
       delay_ms(300);}
       break;
              
case 5:
       centena=(dezena*10)+digito;
       resultado1=centena; v=resultado1;
       printf(lcd_putc,"\f Valor:%1.0f",v);
       lcd_putc("\n Caixa:             ");
       delay_ms(300);
       break; 
      
case 100:
         if(j==0){
        
         kohm=1;
         printf(lcd_putc, "\f Valor:%1.0f K",v);
         lcd_putc("\n Caixa:             ");
         delay_ms(300);}
         if(j==1){
  
         kohm=1;
         printf(lcd_putc, "\f Valor:%1.1f K",v);
         lcd_putc("\n Caixa:             ");
         delay_ms(300);}
         break; 
                 
case 101:if(j==0){        
         mohm=1;
         printf(lcd_putc, "\f Valor:%1.0f M",v);
         lcd_putc("\n Caixa:             ");
         delay_ms(300);}
         if(j==1){
         mohm=1;
         printf(lcd_putc, "\f Valor:%1.1f M",v);
         lcd_putc("\n Caixa:             ");
         delay_ms(300);}
         break; }
                                      
                    
if(input(pin_B5))
{virgula=1;}       

if(virgula == 1 && w == 2)
{printf(lcd_putc, "\f Valor:%1.0f. ",v);
lcd_putc("\n Caixa:             ");
delay_ms(10);
j=1;}
         
         
if(input(pin_B6)){
lcd_putc("\f Valor:             ");
lcd_putc("\n Caixa:             ");
j=0;
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
kohm=0;
mohm=0;
y=0;
valor=0;
valor1=0;
v=0;
c=0;
}

if(kohm>=1 && mohm>=1){
lcd_putc("\nPressione Deletar   ");
delay_ms(1000);}

if(input(pin_b7)) { leitura++; }

}

// as variaveis kohm e mohm dizem se é K ou se eh M
//RESULTADO ARMAZENADO EM V
///////////////////////////
//////////////////////////
/////////////////////////
j=0;
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
y=0;
valor=0;
valor1=0;
c=0;

if(kohm==0 && mohm==0) {
printf(lcd_putc,"\f Valor:%1.1f Ohm",v);lcd_putc("\n Caixa:             ");
delay_ms(1000);}

if(kohm==1 && mohm==0) {
printf(lcd_putc,"\f Valor:%1.1f Kohm",v);lcd_putc("\n Caixa:             ");
delay_ms(1000);}

if(kohm==0 && mohm==1) {
printf(lcd_putc,"\f Valor:%1.1f Mohm",v);lcd_putc("\n Caixa:             ");
delay_ms(1000);}

while(leitura==2) {

output_high(pin_d7);
teclado=input_b();
teclado=teclado & 15;
   
switch (teclado){
case 2:digito=7;
       w++;
       break;
case 4:digito=4;
       w++;
       break;
case 8:digito=1; 
       w++;
       break;}
   
output_low(pin_d7);   
output_high(pin_d6);
teclado=input_b();
teclado=teclado & 15;

switch (teclado){
case 1:digito=0;
       w++;
       break;
case 2:digito=8;
       w++;
       break;
case 4:digito=5; 
       w++;  
       break;
case 8:digito=2; 
       w++;  
       break;}

 
output_low(pin_d6);
output_high(pin_d5);
teclado=input_b();
teclado=teclado & 15;

switch (teclado){
case 2:digito=9; 
       w++;
       break;
case 4:digito=6; 
       w++;
       break;
case 8:digito=3; 
       w++;
       break;}

output_low(pin_d5);


switch(w){
case 1:w++; 
        unidade=digito;
        valor=digito ;
        printf(lcd_putc,"\n Caixa:%lu",valor);
        delay_ms(300);
        break;

case 3:w++;
       dezena=(unidade*10)+digito;
       valor=dezena;
       printf(lcd_putc,"\n Caixa:%lu",valor);
       delay_ms(300);
       break;
  
case 5:
       centena=(dezena*10)+digito;
       valor=centena;
       printf(lcd_putc,"\n Caixa:%lu",valor);
       delay_ms(300);
       break;}

if(input(pin_B6)){ // botão apaga


j=0;
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
y=0;
valor=0;
valor1=0;
c=0;

if(kohm==0 && mohm==0) {
printf(lcd_putc,"\f Valor:%1.1f Ohm",v);lcd_putc("\n Caixa:             ");
delay_ms(1000);}

if(kohm==1 && mohm==0) {
printf(lcd_putc,"\f Valor:%1.1f Kohm",v);lcd_putc("\n Caixa:             ");
delay_ms(1000);}

if(kohm==0 && mohm==1) {
printf(lcd_putc,"\f Valor:%1.1f Mohm",v);lcd_putc("\n Caixa:             ");
delay_ms(1000);}

}         
       

       
caixa=valor;



if(input(pin_b7)){leitura++;}
 }
 
j=0;
teclado=0;
digito=0;
w=0;
unidade=0;
dezena=0;
dezena1=0;
centena=0;
resultado=0;
resultado1=0;
virgula=0;
y=0;
valor=0;
valor1=0;
c=0;
leitura=4;

lcd_putc("\fPara Gravar a Caixa "); lcd_putc("\nPressione Enter     "); delay_ms(2000);
//ARMAZENEI EM C O VALOR DA CAIXA

///////////////////////
//////////////////////
/////////////////////



} //whiile do botão programa

if(input(pin_b7)){ //gravar um valor 

v+=0.1; //Soma 0,1 com o valor FLOAT para corrigir erro do pic
d=1;   //Flag de ativação da rotina
c=eepromLER(v,kohm,mohm,d); //Chamada da subrotina
lcd_putc("\fValor Armazenado    ");  
printf(lcd_putc,"\nNa caixa= %u",caixa);  //Indica em que caixa o valor foi armazenado
delay_ms(2000);
write_eeprom(caixa,c); //Escreve na memória EEPROM

}



}} // void e while
