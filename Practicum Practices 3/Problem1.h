#define PLAYLIST_H
#include <iostream>
using namespace std;

class Playlist{
    private:
        string playlistName;
        vector <string> songTitle;
        vector <int> songId;
        vector <string> songBand;
        string currentSong;
    
    public:
        Playlist();
        Playlist(string name);

        bool addSong(string name, string band, int Id);
        int playSongById(int Id);
        int playSongByTitle(string title);
        int getBandCount(string band);
};