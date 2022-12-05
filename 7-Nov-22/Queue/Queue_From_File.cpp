#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> nameQueue;

    freopen("name.txt","r",stdin);

    string name;

    for(int i=0;i<5;i++)
    {
        cin>>name;
        nameQueue.push(name);
    }

    while(!nameQueue.empty())
    {
        cout<<nameQueue.front()<<endl;
        nameQueue.pop();
    }

    return 0;
}
