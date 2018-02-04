#include<graphics.h>
#include<conio.h>

void circle(int x, int y, int radius);

main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   circle(100, 100, 50);

   getch();
   closegraph();
   return 0;
}
