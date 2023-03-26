// Write a program to demonstrate Bresenhams line drawing algorithm.

#include <iostream.h>
#include <graphics.h>

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    dx = x1 - x0;
    dy = y1 - y0;

    x = x0;
    y = y0;

    p = 2 * dx - dy;
    while (x < x1)
    {
        if (p >= 0)
        {
            putpixel(x, y, 7);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        else
        {
            putpixel(x, y, 7);
            p = p + 2 * dy;
        }
        x = x + 1;
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    int x1, y1, x2, y2;

    cout << "Enter co-ordinates of Point 1: ";
    cin >> x1 >> y1;

    cout << "Enter co-ordinates of Point 2: ";
    cin >> x2 >> y2;

    drawline(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}