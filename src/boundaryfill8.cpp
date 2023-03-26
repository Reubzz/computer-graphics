// Write a program to demonstrate boundary fill 8.

#include <graphics.h>
#include <dos.h>
void boundaryfill8(int x, int y, int fill_color, int boundary_color)
{
	if (getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
	{
		putpixel(x, y, fill_color);
		boundaryfill8(x + 1, y, fill_color, boundary_color);
		boundaryfill8(x - 1, y, fill_color, boundary_color);
		boundaryfill8(x, y + 1, fill_color, boundary_color);
		boundaryfill8(x, y - 1, fill_color, boundary_color);
		boundaryfill8(x - 1, y - 1, fill_color, boundary_color);
		boundaryfill8(x - 1, y + 1, fill_color, boundary_color);
		boundaryfill8(x + 1, y - 1, fill_color, boundary_color);
		boundaryfill8(x + 1, y + 1, fill_color, boundary_color);
	}
}
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
	rectangle(50, 50, 100, 100);
	boundaryfill8(55, 55, 4, 100);
	delay(10000);
	closegraph();
	return 0;
}
