#include<iostream>
#include<string.h>
#include<list>
using namespace std;

struct YoutubeChannel
{
    string name;
    int subscriber;
    
    YoutubeChannel(string name,int subscriber)
    {
        this->name=name;
        this->subscriber=subscriber;
    }
};
// ostream& operator << (ostream& COUT, YoutubeChannel& yt)//This is global operator function
// {
//   COUT<<"Name      : "<<yt.name<<endl;
//   COUT<<"Subscriber: "<<yt.subscriber<<endl;
//   return COUT;
// }
struct myCollection
{
    list<YoutubeChannel>myChannels;

    void operator+=(YoutubeChannel& channel)//This is a member operator function
    {
        this->myChannels.push_back(channel);
    }
};
ostream& operator<<(ostream& output, myCollection& myCollections)
{
    for(YoutubeChannel ytchannel:myCollections.myChannels)
    {
        output<<ytchannel<<endl; //Why we get an error
    }
    return output;
}
int main()
{
    YoutubeChannel yt1=YoutubeChannel("CodeBeauty",75000);
    YoutubeChannel yt2=YoutubeChannel("NewChannel",5000);
    
    myCollection myCollections;
    myCollections+=yt1;//Calling operator+=(YoutubeChannel& channel)
    myCollections+=yt2;//Calling operator+=(YoutubeChannel& channel)
    
    cout<<myCollections;//Calling operator<<(ostream& output, myCollection& myCollections)
    return 0;
}