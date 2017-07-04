CC=g++ -std=c++11

music_playper:main.o player.o music.o
	$(CC) -o music_playper -Wall music.o player.o main.o
music.o:music.cpp music.h
	$(CC)  -o music.o -c -Wall music.cpp
player.o:player.cpp player.h
	$(CC) -o player.o -c -Wall player.cpp
main.o:main.cpp
	$(CC) -o main.o -c -Wall main.cpp
clean:
	rm *.o
