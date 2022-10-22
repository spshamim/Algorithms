#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *x, int s)
{
    int min_idx;

    for(int i=0;i<s-1;i++)
    {
        min_idx=i;
        for(int j=i+1;j<s;j++)
        {
            if(x[j]<x[min_idx])
            {
                min_idx=j;
            }
            if(min_idx!=i)
            {
                swap(x[min_idx], x[i]);
            }
        }
    }
}

void insertionSort(int *x, int s)
{
    int key;
    for(int i=1;i<s;i++)
    {
        key=x[i];
        int j=i-1;

        while(j>=0&&x[j]>key)
        {
            x[j+1]=x[j];
            j=j-1;
        }
        x[j+1]=key;
    }
}

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
    int s;
    cout<<"Enter Size : "<<endl;
    cin>>s;
    int *A1 = new int[s];
    int *A2 = new int[s];
    int *A3 = new int[s];

    ifstream fin("int.txt");

    for(int i=0;i<s;i++)
    {
        fin>>A1[i];
    }
    for(int i=0;i<s;i++)
    {
        A2[i] = A1[i];
    }
    for(int i=0;i<s;i++)
    {
        A3[i] = A1[i];
    }

    cout<<"<============= For BUBBLE SORT, Time Complexity is Below ================>"<<endl;
    time_t begin, end;
    time(&begin);
    BubbleSort(A1,s);
    time(&end);
    time_t elapsed = end-begin;
    cout<<"Data Size is : "<<s<<" and Time Taken : "<<elapsed<<" second"<<endl;

    cout<<"<============= For SELECTION SORT, Time Complexity is Below =============>"<<endl;
    time(&begin);
    selectionSort(A2,s);
    time(&end);
    time_t elapsed2 = end-begin;
    cout<<"Data Size is : "<<s<<" and Time Taken : "<<elapsed2<<" second"<<endl;

    cout<<"<============= For INSERTION SORT, Time Complexity is Below =============>"<<endl;
    time(&begin);
    insertionSort(A3,s);
    time(&end);
    time_t elapsed3 = end-begin;
    cout<<"Data Size is : "<<s<<" and Time Taken : "<<elapsed3<<" second"<<endl;

    return 0;
}


