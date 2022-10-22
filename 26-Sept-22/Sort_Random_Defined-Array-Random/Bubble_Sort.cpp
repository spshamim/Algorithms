#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int *x, int s)
{
    for(int i=0;i<s-1;i++)
    {
       for(int j=0;j<s-i-1;j++)
       {
            if(x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
            }
       }
    }
}

void printArray(int *x, int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<x[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    freopen("100-int.txt","r",stdin);
    int a[100];
    for(int i=0;i<100;i++)
    {
        cin>>a[i];
    }

    //int s = sizeof(a) / sizeof(a[0]);
    BubbleSort(a,100);
    cout <<"Sorted Array: \n";
    printArray(a,100);

    return 0;
}
