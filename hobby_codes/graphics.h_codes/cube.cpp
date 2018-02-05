#include <graphics.h>
#include <conio.h>

main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   bar3d(100, 100, 200, 200, 20, 1);

   getch();
   closegraph();
   return 0;
}
