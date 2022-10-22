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
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    BubbleSort(A1,s);

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *= 1e-9;
    cout<<"Data Size is : "<<s<<" and Time Taken : "<<fixed<<time_taken1<<setprecision(6);
    cout<<" second"<<endl;

    cout<<"<============= For SELECTION SORT, Time Complexity is Below =============>"<<endl;
    start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    selectionSort(A2,s);

    end1 = chrono::high_resolution_clock::now();
    time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *= 1e-9;
    cout<<"Data Size is : "<<s<<" and Time Taken : "<<fixed<<time_taken1<<setprecision(6);
    cout<<" second"<<endl;

    cout<<"<============= For INSERTION SORT, Time Complexity is Below =============>"<<endl;
    start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    insertionSort(A3,s);

    end1 = chrono::high_resolution_clock::now();
    time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1-start1).count();
    time_taken1 *= 1e-9;
    cout<<"Data Size is : "<<s<<" and Time Taken : "<<fixed<<time_taken1<<setprecision(6);
    cout<<" second"<<endl;

    return 0;
}

