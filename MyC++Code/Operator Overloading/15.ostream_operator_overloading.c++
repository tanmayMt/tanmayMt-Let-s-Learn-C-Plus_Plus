#include<iostream>
#include<string.h>
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
ostream& operator << (ostream& COUT, YoutubeChannel& yt)
{
  COUT<<"Name      : "<<yt.name<<endl;
  COUT<<"Subscriber: "<<yt.subscriber<<endl;
  return COUT;
//We fixed this error by returning object 
//from the operator overloading function
}

int main()
{
    YoutubeChannel yt1=YoutubeChannel("CodeBeauty",75000);
    YoutubeChannel yt2=YoutubeChannel("NewChannel",5000);
    cout<<yt1<<yt2; 
                    //We fixed this error by returning object 
                    //from the operator overloading function

    return 0;
}