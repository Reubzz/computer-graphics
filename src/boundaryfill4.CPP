// Write a program to demonstrate boundary fill 4.

#include <graphics.h>
#include <dos.h>
void boundaryfill4(int x, int y, int fill_color, int boundary_color)
{
	if (getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
	{
		putpixel(x, y, fill_color);
		boundaryfill4(x + 1, y, fill_color, boundary_color);
		boundaryfill4(x - 1, y, fill_color, boundary_color);
		boundaryfill4(x, y + 1, fill_color, boundary_color);
		boundaryfill4(x, y - 1, fill_color, boundary_color);
	}
}
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
	int x = 250, y = 200, radius = 50;
	circle(x, y, radius);
	boundaryfill4(x, y, 6, 15);
	delay(10000);
	closegraph();
	return 0;
}
