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
    st<stt> s;
    stt NameList;

    fr("NameList.txt","r",stdin);

    for(int i=0;i<7;i++)
    {
        read>>NameList;
        s.push(NameList);
    }

    while(!s.empty())
    {
        print<<s.top()<<endl;
        s.pop();
    }

    return 0;
}


