#include<bits/stdc++.h>
using namespace std;

int **Matrix(int r, int c)
{
    int **m = new int*[r];
    for(int i=0;i<c;i++)
    {
        m[i] = new int[c];
    }



    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            m[i][j]=rand()%10;
        }
    }
    return m;
}

void printMatrix(int **m, int rows, int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void summation(int **m,int **n, int rows1, int columns1,int rows2, int columns2)
{
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns1;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"*************************************"<<endl;
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            cout<<n[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"###########Summation###############"<<endl;
    int k[rows1][columns1];
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns1;j++)
        {
            k[i][j] = m[i][j]+n[i][j];
        }
    }
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns1;j++)
        {
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }

}

int main()
{
    srand(time(0));

    int rows1;
    int columns1;
    int rows2;
    int columns2;

    cin>>rows1>>columns1;
    cin>>rows2>>columns2;

    int **A = Matrix(rows1,columns1);
    int **B = Matrix(rows2,columns2);
    summation(A,B,rows1,columns1,rows2,columns2);

    return 0;
}
