#include <iostream.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:/turboc3/bgi");

    outttext("Press any key to clear screen!!");
    getch();
    cleardevice("Screen cleared!! Press any key to exit.");
    getch();

    outtext();

    getch();
    closegraph();
    return 0;
}