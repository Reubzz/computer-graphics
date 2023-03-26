// Draw basic shape - Line

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    line(150, 150, 450, 150);
    line(150, 200, 450, 200);
    line(150, 250, 450, 250);

    getch();
    closegraph();
    return 0;
}