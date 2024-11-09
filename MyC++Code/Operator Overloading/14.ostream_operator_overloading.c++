#include<iostream>
#include<string.h>
using namespace std;

struct YoutubeChannel
{

    string name;
    int subscriber;

    YoutubeChannel(string namep,int subscriberp)
    {
        name=namep;
        subscriber=subscriberp;
    }
};
void operator << (ostream& COUT, YoutubeChannel& yt)
{
  COUT<<"Name      : "<<yt.name<<endl;
  COUT<<"Subscriber: "<<yt.subscriber<<endl;
}

int main()
{
    YoutubeChannel yt1=YoutubeChannel("CodeBeauty",75000);
    YoutubeChannel yt2=YoutubeChannel("NewChannel",5000);
    cout<<yt1<<yt2; //Why we get an error here
                    //We fixed this error by returning object 
                    //from the operator overloading function

    return 0;
}