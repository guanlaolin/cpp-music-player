#include <iostream>
#include <string>
#include "music.h"

void Music::stop()
{
    std::cout<<"Musin stop..."<<std::endl;
}

MP3Music::MP3Music(std::string name, int type)
    : Music(name, type)
{
}

void MP3Music::play()
{
    std::cout<<"MP3 "<<name<<" playing..."<<std::endl;
}

WAVMusic::WAVMusic(std::string name, int type)
    : Music(name, type)
{
}

void WAVMusic::play()
{
    std::cout<<"WAV "<<name<<" playing..."<<std::endl;
}
