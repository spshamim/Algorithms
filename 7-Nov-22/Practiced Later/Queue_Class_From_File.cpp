#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define stt string
#define vt vector
#define pb push_back
#define st stack
#define qu queue
#define read cin
#define print cout
#define fr freopen

class List
{
public:
    stt name;
    ll id;
    stt city;
    stt roadno;
public:
    List(){}
    List(stt name, ll id, stt city, stt roadno)
    {
        this->name = name;
        this->id = id;
        this->city = city;
        this->roadno = roadno;
    }
    void showDetails()
    {
        print<<"Name     : "<<name<<endl;
        print<<"ID       : "<<id<<endl;
        print<<"City     : "<<city<<endl;
        print<<"Road No. : "<<roadno<<endl;
    }
};

int main()
{
    qu<List> q;
    stt name,city,roadno;
    ll id;

    fr("List.txt","r",stdin);

    for(int i=0;i<7;i++)
    {
        read>>name>>id>>city>>roadno;
        List lst(name,id,city,roadno);
        q.push(lst);
    }

    while(!q.empty())
    {
        List lst = q.front();
        lst.showDetails();
        print<<endl;
        q.pop();
    }

    return 0;
}


