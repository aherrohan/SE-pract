#include<iostream>
#include<graphics.h>
using namespace std;
int main()
  {
   int gd=DETECT,gm=VGAMAX, a, b, c, d;
   initgraph(&gd,&gm,NULL);
   //setbkcolor(WHITE);
   a=400
   b=200
   c=600
   d=300
   |e|=b-a
   |f|=d-c
   if(|e|>|f|):
       step=e
   else:
       step=f
   xinc=e/step
   yinc=f/step
 
   for i in range(step):
      putpixel(a+xinc,b+yinc)
      if 
   delay(5000);
  
   closegraph();
return(0);
   
  }
