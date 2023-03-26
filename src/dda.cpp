// Write a program to demonstrate DDA Algorithm

#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    int x1, y1, x2, y2, i, steps;
    float x, y, dx, dy;

    cout << "Enter co-ordinates of Point 1: ";
    cin >> x1 >> y1;

    cout << "Enter co-ordinates of Point 2: ";
    cin >> x2 >> y2;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if (dx > dy)
        steps = dx;
    else
        steps = dy;

    dx = dx / steps;
    dy = dy / steps;

    x = x1;
    y = y1;

    i = 1;
    white(i <= steps)
    {
        putpixel(x, y, WHITE);
        x = x + dx;
        y = y + dy;
        i++;
    }

    getch();
    closegraph();
    return 0;
}