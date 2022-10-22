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

int LinearSearch(int *x, int s, int k)
{
	for(int i=0;i<s;i++)
    {
        if(x[i]==k)
        {
            return i;
        }
    }
	return -1;
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
    BubbleSort(a,100);
    cout <<"Sorted Array: \n";
    printArray(a,100);
    cout<<"After Search : "<<endl;
    int result = LinearSearch(a,100,5000);
    if(result==-1)
    {
        cout<<"Element Not Found!"<<endl;
    }
    else
    {
        cout<<"Element Found!"<<endl;
    }

    return 0;
}
