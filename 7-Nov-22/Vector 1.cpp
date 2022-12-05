#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    vector<int>::iterator it;
    for(it = vec.begin(); it!=vec.end(); it++)
    {
        cout<<*(it)<<endl;
    }

    cout<<endl<<endl;

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }



    return 0;
}
