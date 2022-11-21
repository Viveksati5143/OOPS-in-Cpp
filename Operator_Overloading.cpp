#include<iostream>
#include<string>
#include<list>

using namespace std;

struct OperatorOverloading{
    string Name;
    int SubscribersCount;

    OperatorOverloading(string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }

    bool operator==(const OperatorOverloading& channel)const{
        return this->Name == channel.Name;
    }
};

    ostream& operator<<(ostream& COUT, OperatorOverloading& zee){
    COUT << "Name: "<<zee.Name << endl;
    COUT << "Subscribers: " << zee.SubscribersCount << endl;
    return COUT;
} 

struct MyCollection{
    list<OperatorOverloading>mychannels;

    void operator+=(OperatorOverloading& channel){
        this->mychannels.push_back(channel);
    }
    void operator-=(OperatorOverloading& channel){
        this->mychannels.remove(channel);
    }
};

    ostream& operator<<(ostream& COUT, MyCollection& myCollection){
        for(OperatorOverloading op1 : myCollection.mychannels)
        COUT << op1 << endl;
        return COUT;
} 

int main()
{
    OperatorOverloading op1 = OperatorOverloading("Vivek",75000);
    OperatorOverloading op2 = OperatorOverloading("Mafia",555000);
    OperatorOverloading op3 = OperatorOverloading("Jodd",99000);
    // cout << op1<<op2;    
    MyCollection myCollection;
    myCollection += op1;
    myCollection += op2;
    myCollection -= op3;

    cout<<myCollection;
    cin.get();
}