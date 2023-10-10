#include <graphics.h> 
#include <stdio.h> 

// driver code
int main()
{
    // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file

    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm, data);

    // putpixel function 
    putpixel(85, 35, GREEN); 
    putpixel(30, 40, RED); 
    putpixel(115, 50, YELLOW); 
    putpixel(135, 50, CYAN); 
    putpixel(45, 60, BLUE); 
    putpixel(20, 100, WHITE); 
    putpixel(200, 50, YELLOW); 
    putpixel(120, 70, RED);

    // color & Line function
    setcolor(2);
    line(0, 0, 100, 100);

    getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}
