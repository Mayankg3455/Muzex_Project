#include <bits/stdc++.h>
using namespace std;
// class Playlist{
// public:
//     virtual void viewPlaylists();
//     // virtual void viewTracks();
// };

class Profile  {
private:
    string userName;
    vector<string> topTracks;
    vector<string> topArtists;
    // vector<string> publicPlaylists;
    char password;
public:
    Profile(string name){
        userName = name;
        cout << "Welcome " << userName << " !" << endl;
        cout << "Your Top Tracks: \n";
        viewTopTracks();
        viewTopArtists();
        cout << "Setings: \n";
    }

    void setUsername(string name){
        userName = name;
    }

    string getUsername(){
        return userName;
    }

    void addATrack(string trackName){
        topTracks.push_back(trackName);
    }

    void removeATrack(string trackName){
        auto it = topTracks.begin();
        it = find(topTracks.begin(), topTracks.end(), trackName);

        if (it != topTracks.end()){
            topTracks.erase(it);
            cout << "Your Track - " << trackName << " is Deleted Sucessfully!" << endl;
            Profile("KM_");
        }else {
            cout << "Track not Found! Please try again." << endl;
            // Menu();
        }   
    }

    void viewTopTracks(){
        cout << "\nYour Top Tracks: \n";
        for (int i = 0 ; i < topTracks.size() ; ++i){
            cout << topTracks[i] << ", ";
        }
        cout << endl;
    }

    void addArtist(string artistName){
        topArtists.push_back(artistName);
    }

    void removeArtists(string artistName){
        auto itA = topArtists.begin();
        itA = find(topArtists.begin(),  topArtists.end(), artistName);
        if (itA != topArtists.end()){
            topArtists.erase(itA);
            cout << "Your " << artistName << " is removed Successfully!" << endl;
            Profile("KM_A");
        }else {
            cout << "Artist Not Found! Please try again!" << endl;
        }
    }

    void viewTopArtists(){
        cout << "\nYour Top Artists: \n";
        for (int i = 0 ; i < topArtists.size() ; ++i){
            cout << topArtists[i] << ", ";
        }
        cout << endl;
    }

    void setPassword(){
        cout << "Write your old password: \n";
        char userPass;
        cin >> userPass;
        if (userPass == password){
            cout << "Write your new password here: \n";
            char newPassword;
            cin >> newPassword;
            password = newPassword;
            cout << "New Password created!" << endl;
            // Menu();
        }else {
            cout << "Incorrect Password! Please try again!\n";
            // Menu();
        }
    }

};

class Menu {
public:
    Menu(){
        cout << "Welcome to Muzex! \n";
        cout << "1. Home\n";
        cout << "2. View your Current song Playing\n";
        cout << "3. Pause/Play song\n";
        cout << "4. View your Playlists\n";
        cout << "5. Search\n";
        cout << "6. View your Profile\n";
        cout << "7. Create an Account\n";
        cout << "8. Logout\n";
    }

    int menuu(){
        int userInput;
        cin >> userInput;

        switch(userInput){
            case 1:
                //View Home tab
                cout << "Home tab incoming!" << endl;
                Menu();
                break;
            case 2:
                //View Current Song
                cout << "Current Song!" << endl;
                Menu();
                break;
            case 3:
                //Control over your song
                cout << "Pause/play song" << endl;
                Menu();
                break;
            case 4:
                //View your playlists
                cout << "Your Playlists" << endl;
                Menu();
                break;
            case 5:
                //Search a Song
                cout << "Please search your desired song!" << endl;
                Menu();
                break;
            case 6:
                //View your Profile
                cout << "Your profile: \n";
                Profile("Kirtan");
                Menu();
                break;
            case 7:
                //Create/Delete an Account
                cout << "Create/Delete an Account" << endl;
                Menu();
                break;
            case 8:
                //Logout;
                cout << "Thanks for listening to Muzex!\nBye!!";
                exit(0);
                break;
            default:
                cout << "Please enter a valid number!" << endl;
                Menu();
                break;
        }
        return 3;
    }
};

int main(){
    Menu user1;
    int value = user1.menuu();
    while (value == 3){
        user1.menuu();
    }
    // string username = user1.getUsername();
    // cout << username << endl << endl;
    // user1.setUsername("Checking....");
    // string username2 = user1.getUsername();
    // cout << username2 << endl << endl;
    // user1.addArtist("A.R.Rahman");
    // user1.viewTopArtists();
    // user1.addATrack("Behka - Ghajini");
    // user1.addATrack("Touch Me - Dhoom 2");
    // user1.viewTopTracks();

    return 0;
}