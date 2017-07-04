#include <iostream>
#include "music.h"
#include "player.h"

int main()
{
    MP3Music *mp3 = new MP3Music("mp3music.mp3", MP3);
    WAVMusic *wav = new WAVMusic("wavmusic.wav",WAV);
    Player player;

    player.list();
    player.add(mp3);
    player.add(wav);
    player.list();
    player.play(mp3);

    return 0;
}
