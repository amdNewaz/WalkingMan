#include <iostream>
#include <graphics.h>
#include "men.h"

using namespace std;

Men::Men(int _x, int _disp, Lines l[8])
{
    x = _x;
    disp = _disp;
    limbs[8] = l[8];
}

Men::~Men()
{
    cout << "the object of Men is being destroyed" << endl;
}

int Men::getX() { return x; }
int Men::getdisp() { return disp; }

void Men::setX(int value) { x = value; }
void Men::setDisp(int value) { disp = value; }

void Men::createmen()
{
    for (int i = 0; i < num_limb; i++)
    {
        switch (i)
        {
            //body
        case 0:
            limbs[0].setAll(x, (GroundY - 80), x, (GroundY - 30));
            break;

            //left arm
        case 1:
            limbs[1].setAll(x, (GroundY - 70), x + 10, (GroundY - 60));
            break;

            //right arm
        case 2:
            limbs[2].setAll(x, (GroundY - 65), x + 10, (GroundY - 55));
            break;

            //left hand
        case 3:
            limbs[3].setAll(x + 10, (GroundY - 60), x + 20, (GroundY - 70));
            break;

            //right hand
        case 4:
            limbs[4].setAll(x + 10, (GroundY - 55), x + 20, (GroundY - 70));
            break;

            //leg
        case 5:
            limbs[5].setAll(x, (GroundY - 30), x + disp, GroundY);
            break;

            //leg
        case 6:
            limbs[6].setAll(x, (GroundY - 30), x - disp, GroundY);
            break;

            // umbrella handle
        case 7:
            limbs[7].setAll(x + 20, (GroundY - 120), x + 20, (GroundY - 70));
            break;
        }
    }
}

void Men::drawmen()
{
    //head
    circle(x, GroundY - 90, 10);
    limbs[0].Linedraw();

    //hand
    limbs[1].Linedraw();
    limbs[2].Linedraw();
    limbs[3].Linedraw();
    limbs[4].Linedraw();

    //legs
    limbs[5].Linedraw();
    limbs[6].Linedraw();

    //umbrella
    setfillstyle(HATCH_FILL, YELLOW);
    pieslice(x + 20, GroundY - 120, 0, 180, 40);
    limbs[7].Linedraw();
}

void Men::move(int dx)
{

    disp = (disp + 2) % 20; // legs move back to position zero
    drawmen();
    delay(75);
    cleardevice(); // fills the screen with current background color

    x = (x + dx) % ScreenWidth;
}
