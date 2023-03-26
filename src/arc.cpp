// Write a program to demonstrate the use of arc function.

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");
    arc(100, 100, 0, 100, 50);
    getch();
    closegraph();
    return 0;
}