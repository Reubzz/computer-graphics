// Write a program to demonstrate the use of closegraph() function.

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    outttext("Press any key to exit");

    getch();
    closegraph();
    return 0;
}