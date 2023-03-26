// Write a program to draw a Simple Hut on the screen.

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    setcolor(WHITE);

    // main house boxes
    rectangle(150, 180, 250, 300);
    rectangle(250, 180, 420, 300);
    rectangle(180, 250, 220, 300);

    // roof (slanting lines)
    line(200, 100, 150, 180);
    line(200, 100, 250, 180);
    line(370, 100, 420, 180);

    // roof (straight line - topmost line)
    line(200, 100, 370, 100);

    setfillstyle(SOLID_FILL, RED);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(182, 252, WHITE);

    setfillstyle(HATCH_FILL, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);

    getch();
    closegraph();
    return 0;
}