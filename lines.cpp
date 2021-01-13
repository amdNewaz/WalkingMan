#include <iostream>
#include <graphics.h>
#include "lines.h"

using namespace std;

Lines::Lines(int _x1, int _y1, int _x2, int _y2)
{
    x1 = _x1;
    x2 = _x2;
    y1 = _y1;
    y2 = _y2;
}

Lines::Lines()
{
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
}

Lines::~Lines(){
    cout << "the object of Lines is being destroyed" << endl;
}

int Lines::getX1() { return x1; }
int Lines::getY1() { return y1; }
int Lines::getX2() { return x2; }
int Lines::getY2() { return y2; }

void Lines::setX1(int value) { x1 = value; }
void Lines::setY1(int value) { y1 = value; }
void Lines::setX2(int value) { x2 = value; }
void Lines::setY2(int value) { y2 = value; }
void Lines::setAll(int v1, int v2, int v3, int v4){
    x1=v1;
    y1=v2;
    x2=v3;
    y2=v4;
}

void Lines::Linedraw()
{
    setfillstyle(HATCH_FILL, YELLOW);
    line(x1, y1, x2, y2);
}