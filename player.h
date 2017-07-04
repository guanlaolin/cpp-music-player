#ifndef __MUSIC_PLAYER_PLAYER_H__
#define __MUSIC_PLAYER_PLAYER_H__

#include <vector>
#include <string>
#include "music.h"

class Player
{
    public:
        Player();
        void add(Music *m);     //添加音乐到列表
        void del();             //从音乐列表中删除音乐
        void play(Music *m);    //播放音乐
        void stop(Music *m);    //暂停正在播放的音乐
        void list();            //查看音乐列表

    private:
        static std::vector<Music *> music_list; //用于存放音乐列表
};

#endif
