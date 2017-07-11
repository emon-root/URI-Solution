#include<graphics.h>
#include<conio.h>
void main()
{
    int driver,mode;
    driver=DETECT;
    mode=0;
    initgraph(&driver,&mode,"....bgi");
    line(100,100,120,200);
    getch();
}
