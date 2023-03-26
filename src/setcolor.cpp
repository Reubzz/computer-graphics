// Write a program to demonstrate the setcolor() function.

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    setcolor(RED);
    circle(200, 200, 50);

    getch();
    closegraph();
    return 0;
}