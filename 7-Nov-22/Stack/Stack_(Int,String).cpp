#include<bits/stdc++.h>
using namespace std;

int main()
{
    //stack<int> s;
    stack<string> s;

    /*s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);*/

    s.push("Shamim");
    s.push("Nahid");
    s.push("Mehedi");
    s.push("Shaon");
    s.push("Fahim");

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}


