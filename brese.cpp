#include<iostream>
#include <stdio.h>
#include <graphics.h>
using namespace std;

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, RED);
    putpixel(xc-x, yc-y, YELLOW);
    putpixel(xc+y, yc+x, GREEN); 
    putpixel(xc-y, yc+x, BLUE);
    putpixel(xc+y, yc-x, BLUE);
    putpixel(xc-y, yc-x, GREEN);
}
 
/* Function for circle-generation
 using Bresenham's algorithm*/
void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(xc, yc, x, y);
    while (y >= x)
    {
        // for each pixel we will
        // draw all eight pixels
         
        x++;
 
        // check for decision parameter
        // and correspondingly
        // update d, x, y
        if (d > 0)
        {
            y--;
            d = d + 40  * (x - y) + 100;
        }
        else
            d = d + 40 * x + 60;
        drawCircle(xc, yc, x, y);
        delay(1000);
    }
}
 
 
// Driver code
int main()
{
    int xc = 250, yc = 250, r = 70;
    int gd = DETECT, gm;
    initgraph(&gd, &gm,NULL);  // initialize graph
    circleBres(xc, yc, r);    // function call
    return 0;
}
