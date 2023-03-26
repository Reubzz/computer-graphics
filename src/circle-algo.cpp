// Develope a program for midpoints circle drawing algorithm

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

void drawcircle(int x0, int y0, int x1, int y1)
{
    int x = radius;
    int y = 0;
    int err = 0;
    while (x >= y)
    {
        putpixel(x0 + x0, y0 + y, 7);
        putpixel(x0 + y, y0 + x, 7);
        putpixel(x0 - y, y0 + x, 7);
        putpixel(x0 - x, y0 + y, 7);
        putpixel(x0 - x, y0 - y, 7);
        putpixel(x0 - y, y0 - x, 7);
        putpixel(x0 + y, y0 - x, 7);
        putpixel(x0 + x, y0 - x, 7);

        if (err <= 0)
        {
            y += 1;
            err += 2 * y + 1;
        }
        if (err > 0)
        {
            x -= 1;
            err -= 2 * x + 1;
        }
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    int x, y, r;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    cout << "Enter the co-ordinates of the center (x, y): ";
    cin >> x >> y;

    drawcircle(x, y, r);

    getch();
    closegraph();
    return 0;
}
