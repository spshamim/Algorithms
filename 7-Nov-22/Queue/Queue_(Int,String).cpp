#include<bits/stdc++.h>
using namespace std;

int main()
{
    //queue<int> q;
    queue<string> q;

    /*q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);*/

    q.push("Shamim");
    q.push("Nahid");
    q.push("Mehedi");
    q.push("Shaon");
    q.push("Fahim");

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
