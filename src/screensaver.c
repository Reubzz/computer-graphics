// Write a program to display a screen saver on the screen.

#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");

    int font, x, y, s = 0, sp = 0;
    char name[300];
    int left, top, right, bottom;
    int errorcode;

    errorcode = graphresult();
    if (errorcode != grok)
    {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt: ");
        getch();
        exit(1);
    }
    while (!kbhit())
    {
        s++;
        if (s % 10 == 0)
            setcolor(rand());
        if (s > 300)
        {
            cleardevice();
            s = 0
        }
        rectangle((getmaxx() / 2) - random(s), (getmaxy() / 2) - random(s), (getmaxx() / 2) + random(s), (getmaxy() / 2) + random(s));
        delay(10);
    }
    getch();
    cleardevice();
}