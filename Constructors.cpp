#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
public:
    string name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;
};

int main()
{
    YoutubeChannel ytchannel;
    ytchannel.name = "jonathan gamimg";
    ytchannel.OwnerName = "Vivek";
    ytchannel.SubscriberCount = 500000;
    ytchannel.PublishedVideoTitles = {"crate opening", "20 kill gameplay", "hacker or wot"};

    cout<<"Name: "<<ytchannel.name<<endl;
    cout<<"Owner name:"<<ytchannel.OwnerName<<endl;
    cout<<"Subscribers Count: "<<ytchannel.SubscriberCount<<endl;
    cout<<"Videos: "<<endl;
    for(string videoTitle: ytchannel.PublishedVideoTitles){
        cout<<videoTitle<<endl;
    }
    // system("pause<0");
    return 0;   
}