#include <iostream>
#include <graphics.h>
#include "rain.h"

using namespace std;
int rx, ry;

Rain::Rain(int _x)
{
    x = _x;
}

Rain::~Rain()
{
    cout << "the object of Rain is being destroyed" << endl;
}

int Rain::getX() { return x; }

void Rain::setX(int value) { x = value; }
void Rain::drawrain()

{
    for (int i = 0; i < 246; i++)
    {
        rx = rand() % ScreenWidth;
        ry = rand() % ScreenHeight;
        if (ry < GroundY - 4)
        {
            if (ry < GroundY - 220 || (ry > GroundY - 120 && (rx < x - 20 || rx > x + 60)))
                line(rx, ry, rx + 0.5, ry + 5);
        }
    }
}