#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circle(200, 200, 50);
    line(100, 100, 300, 300);
    getch();
    closegraph();
    return 0;
}
