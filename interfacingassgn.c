#include<lpc214x.h>

void delay(){
	int i,j;
	for (i=0; i<2000; i++)
	for (j = 0; j<2000; j++);
}

void segment1(){
	PINSEL0=0X00000000;
	IODIR0 |=0XFF;
	IOCLR0=0XFF;
	IOSET0=0X6F;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X7F;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X07;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X7D;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X6D;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X66;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X4F;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X5B;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X06;
	delay();
	IOCLR0=0XFF;
	IOSET0=0X3F;
	delay();
	IOCLR0=0XFF;
}

void segment2(){
	PINSEL0=0X00000000;
	IODIR0 |=0X3F80;
	IOCLR0=0XFF<<7;
	IOSET0=0X6F<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X7F<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X07<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X7D<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X6D<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X66<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X4F<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X5B<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X06<<7;
	delay();
	IOCLR0=0XFF<<7;
	IOSET0=0X3F<<7;
	delay();
	IOCLR0=0XFF<<7;
	}  
void segment3(){
	PINSEL2=0X00000000;
	IODIR1 |=0X7F0000;
	IOCLR1=0XFF<<16;
	IOSET1=0X6F<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X7F<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X07<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X7D<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X6D<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X66<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X4F<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X5B<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X06<<16;
	delay();
	IOCLR1=0XFF<<16;
	IOSET1=0X3F<<16;
	delay();
	IOCLR1=0XFF<<16;
}

void segment4(){
	PINSEL2=0X00000000;
	IODIR1 |=0X3F800000;
	IOCLR1=0XFF<<23;
	IOSET1=0X6F<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X7F<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X07<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X7D<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X6D<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X66<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X4F<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X5B<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X06<<23;
	delay();
	IOCLR1=0XFF<<23;
	IOSET1=0X3F<<23;
	delay();
	IOCLR1=0XFF<<23;
}

int main(){
	PINSEL1=0X00000000;
	IODIR0=0X72FF0000;
	while(1)
	{
		IOCLR0=0X404A0000;
		IOSET0=0X10540000;
		segment1();
		
		IOCLR0=0X10540000;
		IOSET0=0X10A10000;
		segment2();
		
		IOCLR0=0X10A10000;
		IOSET0=0X22090000;		
		segment3();

		IOCLR0=0X22090000;
		IOSET0=0X404A0000;
		segment4();
	}
}