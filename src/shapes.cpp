// Divide the screen into 4 regions and draw a circle, rectangle, ellipse, sector, polygon and a line
// Circle, Rectangle Ellipse above the line and Polygon Sector below the line
#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    int poly[12] = {350, 450, 350, 410, 430, 400, 350, 350, 300, 430, 350, 450};

    circle(100, 100, 50);
    outtextxy(75, 170, "Rectangle");

    ellipse(500, 100, 0, 360, 100, 50);
    outtextxy(480, 170, "Ellipse");

    line(100, 250, 540, 250);
    outtextxy(300, 260, "Line");

    sector(150, 400, 30, 300, 100, 50);
    outtextxy(129, 460, "Sector");

    drawpoly(6, poly);
    outtextxy(340, 460, "Polygon");

    getch();
    closegraph();
    return 0;
}