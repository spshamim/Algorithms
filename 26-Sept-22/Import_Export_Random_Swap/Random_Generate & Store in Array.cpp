#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void printlist(int *p,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<p[i]<<endl;
    }
}

int main()
{
    srand(time(0));
    int a[1000];
    for(int i=0;i<1000;i++)
    {
        a[i] = rand()%100+1;
    }
    printlist(a,1000);


    return 0;
}
