#include<bits/stdc++.h>
using namespace std;

void summation(int *x, int size)
{
    int result=0;
    for(int i=0;i<size;i++)
    {
        result=result+x[i];
    }
    cout<<"Result is : "<<result<<endl;
}

int main()
{
    int a[]={1,2,3,4};

    summation(a,4);
    return 0;
}
