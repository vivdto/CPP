#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
public:f
    string Name; // Attributes
    string OwnerName;
    int subscriberCount;
    list<string> PublishedVideoTitles;
    
    YoutubeChannel(string name, string ownerName) : Name(name), OwnerName(ownerName), subscriberCount(0) {
        // Constructor using initializer list | Constructor YoutubeChannel initializes the object with Name and OwnerName using an initializer list.
        //getinfo() method displays channel information including videos.
    }
};

int main() {
    YoutubeChannel ytChannel("codebeauty", "vivashwat");
    ytChannel.PublishedVideoTitles.push_back("HTML For beginners");
    ytChannel.PublishedVideoTitles.push_back("CSS For beginners");
    ytChannel.PublishedVideoTitles.push_back("JS For beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ For beginners");

    YoutubeChannel ytChannel2("Vivdto's YT", "Vivs");
    
    //Creates two YoutubeChannel objects (ytChannel and ytChannel2), initializes their attributes, and calls the getinfo() method to display channel information.
    //Demonstrates adding videos to PublishedVideoTitles using push_back() and assignment with initializer list.
    
    ytChannel.subscriberCount = 1800;
    ytChannel.PublishedVideoTitles = {"Know the basics of C++", "HTML & CSS", "C++ OOPs Video 1"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "Owner Name: " << ytChannel.OwnerName << endl;
    cout << "Subscriber Count: " << ytChannel.subscriberCount << endl;
    cout << "Videos: " << endl;
    
    for (string VideoTitle : ytChannel.PublishedVideoTitles) {
        cout << VideoTitle << endl;
    }

    
    cout << "Name: " << ytChannel2.Name << endl;
    cout << "Owner Name: " << ytChannel2.OwnerName << endl;
    cout << "Subscriber Count: " << ytChannel2.subscriberCount << endl;
    cout << "Videos: " << endl;

    for (string VideoTitle : ytChannel2.PublishedVideoTitles) {
        cout << VideoTitle << endl;
    }

    return 0;
}
