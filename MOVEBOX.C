#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
 int gd=DETECT,gm;
 int z=0;
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

 while(z<500)
 {
  cleardevice();
  setcolor(RED);
  rectangle(z,100,z+20,120);
  setfillstyle(1,YELLOW);
  floodfill(z+1,110,RED);
  delay(20);
  z++;
 }
}