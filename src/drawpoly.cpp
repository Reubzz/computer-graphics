// Write a program to demonstrate drawpoly()

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    int points[] = {320, 150, 420, 300, 250, 300, 320, 150};
    drawpoly(4, points);

    getch();
    closegraph();
    return 0;
}