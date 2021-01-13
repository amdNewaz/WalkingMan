//Name : Md Newaz alam
//Name : Jamee Shahriyar

#ifndef LINES_H
#define LINES_H

#include <iostream>
#include <graphics.h>
using namespace std;

const int mws = getmaxwidth();
const int mhs = getmaxheight();

#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight

class Lines
{
private:
    int x1, x2, y1, y2;

public:
    Lines(int _x1, int _y1, int _x2, int _y2);
    Lines();
    ~Lines();

    int getX1();
    int getY1();
    int getX2();
    int getY2();

    void setX1(int value);
    void setY1(int value);
    void setX2(int value);
    void setY2(int value);
    void setAll(int v1, int v2, int v3, int v4);

    void Linedraw();
};

#endif