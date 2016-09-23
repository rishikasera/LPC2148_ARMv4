#include<lpc214x.h>

void delay(void);

unsigned int allHigh()
{
     return 0xFFFFFFFF;
}

int main()
{
	   PINSEL0 = 0;
	   PINSEL1 = 0;
	   PINSEL2 = 0;
	   IO0DIR = 0xFFFFFFFF;
	   IO0SET = 0xFFFFFFFF;
	   IO1DIR = 0xFFFFFFFF;
	   IO1SET = 0xFFFFFFFF;
	   while(1)
		 {
            IO0SET = allHigh();
			      IO1CLR = allHigh();
			      delay();delay();
			      
			      IO0CLR = allHigh();
			      IO1SET = allHigh();
			      delay();delay();
     }
     return 0 ; 		 
}	

void delay()
{
    int a = 0,b=0;int c =0;
	   for(;a<9999;a++)
	   {
		      for(;b<9999;b++)
					{
		              c = 0;
					}	
		 }
		 c++;
}