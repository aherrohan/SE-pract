#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	putpixel(20,60);
	circle(20,60,50);
	
	delay(200);
	return (0);

}
