#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel // class is user defined datatypes.
{
    public: 
    string Name; // Attributes
    string OwnerName;
    int subscriberCount;
    list<string> PublishedVideoTitles;
};

int main ()
{
    YoutubeChannel ytChannel; //object
    ytChannel.Name = "@vivdto's ytube!";
    ytChannel.OwnerName = "Vivashwat Thakur";
    ytChannel.subscriberCount = 1800;
    ytChannel.PublishedVideoTitles = {"Know the basics of C++", "HTML & CSS", "C++ OOPs Video 1"};

    cout<<"Name :"<<ytChannel.Name<<endl;

    cout<<"Owner Name :"<<ytChannel.OwnerName<<endl;
    
    cout<<"Subscriber Count :"<<ytChannel.subscriberCount<<endl;
    cout<<"Videos: "<<endl;
    for(string VideoTitle: ytChannel.PublishedVideoTitles )
    {
        cout<<VideoTitle<<endl;
    }

    return 0;
}