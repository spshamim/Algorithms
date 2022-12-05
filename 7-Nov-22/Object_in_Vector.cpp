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
    vector<student> studentVec;

    freopen("list.txt","r",stdin);

    int id;
    string name;
    double cgpa;

    for(int i=0;i<5;i++)
    {
        cin>>id>>name>>cgpa;
        student s(id,name,cgpa);
        studentVec.push_back(s);
    }

    for(int i=0;i<studentVec.size();i++)
    {
        cout<<studentVec[i].getId()<<"\t";
        cout<<studentVec[i].getName()<<"\t";
        cout<<studentVec[i].getCgpa()<<"\t";
        cout<<endl;
    }

    return 0;
}
