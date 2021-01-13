#include <iostream>
#include <graphics.h>
#include "background.h"

using namespace std;

Background::Background(string p)
{
    imagefile = p;
}

Background::~Background(){
    cout << "the object of Background is being destroyed" << endl;
}

string Background::getPiclocation()
{
    return imagefile;
}

void Background::setPic(string p)
{
    imagefile = p;
    readimagefile(imagefile.c_str(), 0, 0, mws, mhs);
}

void Background::Animation(int x)
{
    string location;
    location = "resources/pictures-" + to_string(x) + ".jpg";
    setPic(location);
}

void Background::sound()
{
    string soundFile = "resources/sound.wav";
    PlaySound(TEXT(soundFile.c_str()), NULL, SND_ASYNC); // To play a sound file.
}