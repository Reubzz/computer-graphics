// Draw basic shape - Ellipse

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    // Two ways to do this (DO ANY ONE)

    // method 1 - Using variables method
    int x = 250;
    int y = 200;
    int start_angle = 0;
    int end_angle = 360;
    int x_rad = 190;
    int y_rad = 40;

    ellipse(x, y, start_angle, end_angle, x_rad, y_rad);

    // method 2 - Direct value method
    ellipse(250, 200, 0, 360, 190, 40);

    getch();
    closegraph();
    return 0;
}
