#include <iostream>
#include <string>
using namespace std;
class Song
{
private:
    string songLyrics[30];
    string singerName;
    int songDuration;

public:
    static int songId;
    Song()
    {
        int id = songId;
        ++songId;
    }
    // setter
    void setSongLyrics(string lyrics[30])
    {
        for (int i = 0; i < 30; i++)
        {
            this->songLyrics[i] = lyrics[i];
        }
    }
    void setSingerName(string singer)
    {
        this->singerName = singer;
    }
    void setSongDuration(int duration)
    {
        this->songDuration = duration;
    }

    // getter
    string *getSongLyrics()
    {
        return songLyrics;
    }
    string getSingerName()
    {
        return singerName;
    }
    int getSongDuration()
    {
        return songDuration;
    }
    int getSongId()
    {
        return songId;
    }
};
int Song::songId = 0;
int main()
{
    Song songs[10];
    int n;
    string lyr[30];
    string singer;
    int time;
    do
    {
        cout << "Enter song number: " << endl;
        cin >> n;
    } while (n > 10);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter song detail no. " << i + 1 << " : \n\n";
        cout << "Enter lyrics of song: \n";
        cout << "Enter lyrics lines: ";
        int ln;
        cin >> ln;
        for (int j = 0; j < ln; j++)
        {
            cout << "Enter Line " << j + 1 << endl;
            getline(cin, lyr[j]);
        }
        songs[i].setSongLyrics(lyr);

        cout << "Enter Singer name of song: " << endl;
        getline(cin, singer);
        songs[i].setSingerName(singer);

        cout << "Enter song duration: " << endl;
        cin >> time;
        songs[i].setSongDuration(time);
    }
    

    return 0;
}
