#include "Song.h"

int Song::songId = 0;
// constructor
Song::Song()
{
    int id;
    id = songId;
    ++id;
}

// setter
void Song::setSongLyrics(string[30] lyr)
{
    for (int i = 0; i < 30; i++)
    {
        this->songLyrics[i] = lyr[i];
    }
}
void Song::setSingerName(string singer)
{
    this->singerName = singer;
}
void Song::setSongDuration(int duration)
{
    this->songDuration = duration;
}
// getter
string *Song::getSongLyrics()
{
    return songLyrics;
}
string Song::getSingerName()
{
    return singerName;
}
int Song::getSongDuration()
{
    return songDuration;
}
int Song::getSongId()
{
    return songId;
}