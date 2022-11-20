#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
public:
    string name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;

    YoutubeChannel(string Name,string ownerName){
        name = Name;
        OwnerName = ownerName;
        SubscriberCount = 0;
    }
    void GetInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Owner name:"<<OwnerName<<endl;
        cout<<"Subscribers Count: "<<SubscriberCount<<endl;
        cout<<"Videos: "<<endl;
        for(string videoTitle: PublishedVideoTitles){
            cout<<videoTitle<<endl;
        }
    }
};

int main()
{
    YoutubeChannel ytchannel("jonathan","vivek");
    ytchannel.PublishedVideoTitles.push_back("crate opening");
    ytchannel.PublishedVideoTitles.push_back("0 kill gameplay");
    ytchannel.PublishedVideoTitles.push_back("hacker or wot");
    // ytchannel.name = "jonathan gamimg";
    // ytchannel.OwnerName = "Vivek";
    // ytchannel.SubscriberCount = 500000;
    // ytchannel.PublishedVideoTitles = {"crate opening", "20 kill gameplay", "hacker or wot"};

    ytchannel.GetInfo();
    // cout<<"Name: "<<ytchannel.name<<endl;
    // cout<<"Owner name:"<<ytchannel.OwnerName<<endl;
    // cout<<"Subscribers Count: "<<ytchannel.SubscriberCount<<endl;
    // cout<<"Videos: "<<endl;
    // for(string videoTitle: ytchannel.PublishedVideoTitles){
    //     cout<<videoTitle<<endl;
    // }

    // ytchannel.name = "Mafia gamimg";
    // ytchannel.OwnerName = "Mafia";
    // ytchannel.SubscriberCount = 900000;
    // ytchannel.PublishedVideoTitles = {"crate opening", "20 kill gameplay", "tips and tricks"};

    YoutubeChannel ytchannel2("Mafia gaming","mafia");
    ytchannel2.GetInfo();
    // cout<<"Name: "<<ytchannel2.name<<endl;
    // cout<<"Owner name:"<<ytchannel2.OwnerName<<endl;
    // cout<<"Subscribers Count: "<<ytchannel2.SubscriberCount<<endl;
    // cout<<"Videos: "<<endl;
    // for(string videoTitle: ytchannel2.PublishedVideoTitles){
    //     cout<<videoTitle<<endl;
    // }
    return 0;   
}