// Write a program to demonstrate the use of getpixel()

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI");

    char array[50];
    int color = getpixel(0, 0);
    cout << array << " color of pixel at (0, 0) = " << color;
    outtext(array);

    getch();
    closegraph();
    return 0;
}