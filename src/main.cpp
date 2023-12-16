#include <bits/stdc++.h>
// #include<random>
using namespace std;
// randomly genrating number for songID and PlaylistID

// set<int> generateID;
// int generate_ID(int offset, int range)
// {
//     srand((unsigned) time(NULL));

//     int random = offset + (rand() % range);

//     if(generateID.find(random) == generateID.end())
//     {
//         generateID.insert(random);
//         return random;
//     }
//     return generate_ID(offset,range);
// }

class Song
{
private:
    int songID;
    string title;
    vector<string> artists;
    int duration; // in sec
    string album; // album or movie
public:
    // constructor
    Song(string title, vector<string> artists, int duration, string album)
    {
        // this->songID = generate_ID(1000000, 10000000);
        this->title = title;
        this->artists = artists;
        this->duration = duration;
        this->album = album;
    }
    int getSongID()
    {
        return songID;
    }
};

int main()
{
    // Song s1 = Song("Mitwa", {"Shafqat Amanat Ali", "Shankar Mahadevan", "Caralisa Monteiro"}, 383, "Kabhi Alvida Naa Kehna");
    // Song s2 = Song("Saware", {"Arijit Singh"}, 383, "Phantom");
    
    return 0;
}