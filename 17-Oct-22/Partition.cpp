#include<bits/stdc++.h>
using namespace std;

void printList(int *p, int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int Partition1(int *m, int s, int e)
{
    int pivot = m[e];
    int pIndex = s;

    for(int i=s;i<e-1;i++){
        if(m[i]<pivot){
                swap(m[i],m[pIndex]);
                pIndex++;
        }
    }
swap(m[pIndex],m[e]);
return pIndex;

}

int Partition2(int *m, int s, int e)
{
    int pivot = m[s];
    int i = s, j = e;

    while(i<j){
        while(m[i]<=pivot) i++;
        while(m[j]>pivot) j--;
        if(i<j) swap(m[i],m[j]);
    }
    swap(m[s],m[j]);
    return j;
}
int main()
{

    int a[]= {5,10,6,2,9,15,4};
    printList(a,7);

    int p = Partition2(a,0,6);
    cout<<p<<" "<<a[p]<<endl;
    printList(a,7);


    return 0;
}
