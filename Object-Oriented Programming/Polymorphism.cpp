#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	string OwnerName;
	int SubscribersCount;

protected:
list<string> PublishedVideoTitles;

public:

	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}

	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}

	void Subscribe() {
		SubscribersCount++;
	}

	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}

	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
};

class CookingYTChannel : public YouTubeChannel {
    public:

    CookingYTChannel(string name, string ownerName) : YouTubeChannel (name, ownerName) {

    }    

    void Practice(){
        cout<<"-----------------------";
    }
};

int main()
{

    CookingYTChannel cookingytchannel("Vivdto's Kitcheb!", "Vivdto");

    cookingytchannel.PublishVideo("Welcome Video");
    cookingytchannel.Practice();
    cookingytchannel.GetInfo();


	system("pause>0");
}