// Q1. Create a class Song to store song id,
// song lyrics, duration,
// singer name.
// Add required methods in the class.

// Q2. Write a program to store 10 song details in an array.
// Accept singer name from user search all the songs sung by the singer and
// find the total duration of all the songs sung by the singer.

// Q3. Create a file words.txt, which contains one word on each line,
// accept 10 words from user check whether word exists in the file,
// if found display message word found, else display messag word not found.
#include <string>

class Song
{
private:
    static int songId;
    string songLyrics[30];
    string singerName;
    int songDuration;

public:
    // setter
    void setSongLyrics(string[30]);
    void setSingerName(string);
    void setSongDuration(int);

    // getter
    string *getSongLyrics();
    string getSingerName();
    int getSongDuration();
    int getSongId();
};