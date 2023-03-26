// Draw basic shape - Circle and Rectangle

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    circle(200, 200, 100);

    rectangle(550, 200, 300, 250);

    getch();
    closegraph();
    return 0;
}