/*
 * GccApplication1.c
 *
 * Created: 2018-10-31 9:23:01 PM
 * Author : bleve
 */ 

#include <avr/io.h>


int main(void)
{
	DDRC = 0xFF;
	
    /* Replace with your application code */
    while (1) 
    {
			PORTC = 0XFF;
    }
}

