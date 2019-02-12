#include "header/link.h"
#include "header/type.h"

asmlink i32 sum(i32 a,i32 b,i32 c)
{
	return a+b+c;
}

/*
asmlink void disp_color(u8 color)
{
	volatile u8 *fb=(u8 *)0x000B8000;
	//clear
	for (i32 i=0;i<80*25;i++)
	{
		fb[i*2]=' ';
		fb[i*2+1]=color;
	}
	return;
}
*/
asmlink void spin_up(void)
{
	volatile i32 x;
	u8 *fb=(u8 *)0xb8000;
	for (int i=0;i<25*80;i++)
		fb[2*i]=' ';
	/*volatile u8 *fb=(u8 *)0x000B8000;
	disp_color(fb[1]);
	fb[0]='m';
	fb[2]='o';
	fb[4]='k';
	fb[6]='e'; */
	print("MOKE by pomoke,alpha version",10,0);
	print("Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.",15,1);
	print("!",0,2);
	for (;;) ;
}

