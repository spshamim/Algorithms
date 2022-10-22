#include<bits/stdc++.h>
using namespace std;

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    Swap(&a,&b);
    cout<<"A = "<<a<<" B = "<<b<<endl;

    return 0;
}
