//Name : Md Newaz alam
//Name : Jamee Shahriyar

#include <iostream>
#include <graphics.h>
#include "lines.h"
#include "rain.h"
#include "background.h"
#include "men.h"

using namespace std;

int main()
{

    initwindow(mws, mhs, "walking in rain");
    Lines Limb[8];

    Men person(200, 0, Limb);

    Rain raining(200);

    Background pic;
    pic.sound();

    while (!kbhit())
    {
        for (int p = 1; p < 23; p++)
        {
            pic.Animation(p);
            person.createmen();
            person.drawmen();
            person.move(3);
            raining.drawrain();
            delay(5);
        }
    }

    system("pause");
    return 0;
}