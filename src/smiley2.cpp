#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, i, j = 100;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    for (i = 50; i < 200; i = i + 10)
    {
        cleardevice();
        setcolor(WHITE);
        circle(i, j, 50);
        setfillstyle(1, YELLOW);
        floodfill(i - 40, j, WHITE);
        ellipse(i - 20, j - 20, 0, 360, 5, 10);
        setfillstyle(1, BLACK);
        floodfill(i - 20, j - 20, WHITE);
        ellipse(i + 20, j - 20, 0, 360, 5, 10);
        setfillstyle(1, BLACK);
        floodfill(i + 20, j - 20, WHITE);
        circle(i, j, 5);
        setfillstyle(1, BLACK);
        floodfill(i, j, WHITE);
        setcolor(BLACK);
        arc(i, j, 180, 360, 30);

        delay(100);
    }
    for (i = 200; i < 400; i = i + 10)
    {
        cleardevice();
        setcolor(WHITE);
        circle(i, j, 50);
        setfillstyle(1, YELLOW);
        floodfill(i - 40, j, WHITE);
        ellipse(i - 20, j - 20, 0, 360, 5, 10);
        setfillstyle(1, BLACK);
        floodfill(i - 20, j - 20, WHITE);
        ellipse(i + 20, j - 20, 0, 360, 5, 10);
        setfillstyle(1, BLACK);
        floodfill(i + 20, j - 20, WHITE);
        circle(i, j, 5);
        setfillstyle(1, BLACK);
        floodfill(i, j, WHITE);
        setcolor(BLACK);
        arc(i, 140, 20, 160, 30);
        delay(100);
    }
    for (i = 400; i < 600; i = i + 10)
    {
        cleardevice();
        setcolor(WHITE);
        circle(i, j, 50);
        setfillstyle(1, YELLOW);
        floodfill(i - 40, j, WHITE);
        ellipse(i - 20, j - 20, 0, 360, 5, 10);
        setfillstyle(1, BLACK);
        floodfill(i - 20, j - 20, WHITE);
        ellipse(i + 20, j - 20, 0, 360, 5, 10);
        setfillstyle(1, BLACK);
        floodfill(i + 20, j - 20, WHITE);
        circle(i, j, 5);
        setfillstyle(1, BLACK);
        floodfill(i, j, WHITE);
        setcolor(BLACK);
        arc(i, j, 180, 360, 30);
        delay(100);
    }
    getch();
    closegraph();
    return 0;
}