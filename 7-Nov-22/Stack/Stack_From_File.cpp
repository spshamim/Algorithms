#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> nameStack;

    freopen("name.txt","r",stdin);

    string name;

    for(int i=0;i<5;i++)
    {
        cin>>name;
        nameStack.push(name);
    }

    while(!nameStack.empty())
    {
        cout<<nameStack.top()<<endl;
        nameStack.pop();
    }

    return 0;
}



