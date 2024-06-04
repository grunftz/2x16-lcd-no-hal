#include "stm32f10x.h"                  // Device header
#include "lcd.h"                  // Device header
#include <stdio.h>


char b[7]={0x10,0x10,0x16,0x19,0x11,0x11,0x1E}; 
char razred[] ="4t1";
char glavna_jela[]={"GLAVNI MENU!"};
char meso[]={"Teletina :D!"};

uint16_t j;
uint16_t k=1;
uint16_t h=1;
char buffer[10];
int g;
//setup
int main(void)
{
	lcd_init();
		lcd_setCursor(1,6);
	
	
	
	

	
	lcd_print(razred);
	lcd_setCursor(1,4);
	lcd_print(razred);
	//			lcd_setCursor(3,2);
	//lcd_print(" evo 1 :) :)");
	//loop
	while(1)
	{
		lcd_setCursor(1,1);
		while(g!=7)    	
{
sendLcd_char(b[g]);
g++;
}

sendLcd_cmd(0x00);
delay_ms(1000);
		//lcd_setCursor(1,1);
	//j++;
//snprintf(buffer, 10, "%d", j);
	
//		delay_ms(100);	
		//lcd_setCursor(4,3);
/*lcd_setCursor(1,j);
		j++;
		if(j>1)		{lcd_setCursor(1, j-1);
		lcd_print(" ");}
		lcd_print("3T3");

		snprintf(buffer, 10, "%d", j);
		lcd_print(buffer);
		delay_ms(1000);	
		//	k++;
		
	//	if(k>=5)k=1;
	*/
		
	}
}
