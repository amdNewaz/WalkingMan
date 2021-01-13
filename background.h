#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <iostream>
#include <graphics.h>
#include "lines.h"

using namespace std;

class Background{

private:    
    string imagefile;

public:
    Background(string p = "");
    ~Background();
    
    string getPiclocation();    
    
    void setPic(string p);
    

    void Animation(int x);    
    void sound();
    
};

#endif