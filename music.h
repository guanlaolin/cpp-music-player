#ifndef __MUSIC_PLAYER_MUSIC_H__
#define __MUSIC_PLAYER_MUSIC_H__
#include <string>

enum MusicType{
    MP3,
    WAV,
};

class Music
{
    public:
        Music(std::string name, int type) : name(name),type(type){};
        virtual void play() = 0;
        void stop();
        std::string get_name() { return name; };

    protected:
        std::string name;
        int type;
};

class MP3Music : public Music
{
    public:
        MP3Music(std::string name, int type = MP3);
        void play();

    private:
};

class WAVMusic : public Music
{
    public:
        WAVMusic(std::string name, int type = WAV);
        void play();

    private:
};

#endif 
