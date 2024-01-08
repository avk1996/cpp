#include "Song.cpp"
#inclue < iostream>
using namespace std;

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

    cont << "Enter song details: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter song lyrics " << getSongId() << " : " << endl;
        cout << "Enter lyrics of song: " << endl;
        for (int j = 0; j < 30; j++)
        {
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
