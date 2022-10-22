#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int a[1000];
    for(int i=0;i<1000;i++)
    {
        int a = rand();
        cout<<a<<"\t"<<a%100+1<<endl;
    }

    return 0;
}
