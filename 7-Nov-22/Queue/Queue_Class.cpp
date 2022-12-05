#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    int id;
    string name;
    double cgpa;
public:
    student()
    {

    }
    student(int id,string name,double cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    double getCgpa()
    {
        return cgpa;
    }
};


int main()
{
    queue<student> studentQueue;

    freopen("list.txt","r",stdin);

    int id;
    string name;
    double cgpa;

    for(int i=0;i<5;i++)
    {
        cin>>id>>name>>cgpa;
        student s(id,name,cgpa);
        studentQueue.push(s);
    }

    while(!studentQueue.empty())
    {
        student s = studentQueue.front();
        cout<<s.getId()<<"   "<<s.getName()<<"\t"<<s.getCgpa()<<endl;
        studentQueue.pop();
    }

    return 0;
}





