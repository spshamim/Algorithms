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
    vt<List> v;
    stt name,city,roadno;
    ll id,a;

    print<<"Enter The Size Of Details : ";
    read>>a;
    print<<endl;

    for(int i=0;i<a;i++)
    {
        print<<"Enter Name : ";
        read>>name;
        print<<"Enter ID : ";
        read>>id;
        print<<"Enter City : ";
        read>>city;
        print<<"Enter Road No. : ";
        read>>roadno;
        print<<endl;

        List lst(name,id,city,roadno);
        v.pb(lst);
    }

    print<<"*** Stored In Vector || Details ***\n"<<endl;

    for(int i=0;i<v.size();i++)
    {
        v[i].showDetails();
        print<<endl;
    }

    return 0;
}

