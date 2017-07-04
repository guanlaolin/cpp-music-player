#include <iostream>
#include <vector>
#include <string>
#include "player.h"
#include "music.h"

std::vector<Music *> Player::music_list;

Player::Player()
{
}

void Player::add(Music *m)
{
    music_list.push_back(m);
}

void Player::play(Music *m)
{
    m->play();
}
void Player::stop(Music *m)
{
    m->stop();
}

void Player::list()
{
    std::cout<<"***音乐列表***"<<std::endl;
    for ( Music *i : Player::music_list )
    {
        std::cout<<i->get_name()<<std::endl;
    }
    std::cout<<"**************"<<std::endl;
}
