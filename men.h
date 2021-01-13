#ifndef MEN_H
#define MEN_H

#include <iostream>
#include <graphics.h>
#include "lines.h"

using namespace std;

class Men
{
private:
    int x, disp;
    int num_limb = 8;
    string str;

    Lines limbs[8];

public:
    Men(int _x = 0, int _disp = 0, Lines l[8] = NULL);

    ~Men();

    int getX();
    int getdisp();

    void setX(int value);
    void setDisp(int value);

    void createmen();
    void drawmen();

    void move(int dx);
};

#endif