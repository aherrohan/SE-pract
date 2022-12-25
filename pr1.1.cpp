#include<iostream>
#include<graphics.h>
using namespace std;
int main()
  {
   int gd=DETECT,gm=VGAMAX;
   initgraph(&gd,&gm,NULL);
   //setbkcolor(WHITE);
   putpixel(400,200,RED);
   delay(5000);
  
   closegraph();
return(0);
   
  }
