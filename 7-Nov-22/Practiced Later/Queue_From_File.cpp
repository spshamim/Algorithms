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

int main()
{
    qu<stt> q;
    stt NameList;

    fr("NameList.txt","r",stdin);

    for(int i=0;i<7;i++)
    {
        read>>NameList;
        q.push(NameList);
    }

    while(!q.empty())
    {
        print<<q.front()<<endl;
        q.pop();
    }

    return 0;
}


