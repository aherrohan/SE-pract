#include<iostream>
#include<graphics.h>
using namespace std;
int main()
  {
   int gd=DETECT,gm=VGAMAX;
   initgraph(&gd,&gm,NULL);
   //setbkcolor(GREEN);
   
   line(100,150,200,100);
   line(100,100,200,150);
   line(0,150,100,150);
   rectangle(100,100,200,150);
   circle(100,150,100);
   delay(5000);
   closegraph();
return(0);
   
  }
