#include<bits/stdc++.h>
using namespace std;

int GCD(int n,int m)
{
    if(n==m)
    {
        return m;
    }
    else if(n>=m)
    {
        return GCD(n-m,m);
    }
    else
    {
        return GCD(n,m-n);
    }
}

int Factorial(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n-1);
    }
}

int Fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

int main()
{
    cout<<"Which one do you want ?"<<endl;
    cout<<"\t1.   GCD"<<endl;
    cout<<"\t2.   Factorial"<<endl;
    cout<<"\t3.   Fibonacci"<<endl;

    cout<<"Enter your choice : "<<endl;
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1:
        int result;
        int x;
        int y;
        cin>>x;
        cin>>y;
        result = GCD(x,y);
        cout<<"GCD is : "<<result<<endl;
        break;

        case 2:
        int fact;
        int k;
        cin>>k;
        fact = Factorial(k);
        cout<<"Factorial is : "<<fact<<endl;
        break;

        case 3:
        int fibo;
        int l;
        cin>>l;
        fibo = Fibonacci(l);
        cout<<"Fibonacci is : "<<fibo<<endl;
        break;

        default:
        cout<<"Invalid Choice...."<<endl;
    }

    return 0;
}
