#ifndef RAIN_H
#define RAIN_H

#include <iostream>
#include <graphics.h>
#include "lines.h"

using namespace std;

class Rain
{
private:
    int x;

public:
    
    Rain(int _x);
    ~Rain();
    
    int getX();

    void setX(int value);

    void drawrain();    
};

#endif