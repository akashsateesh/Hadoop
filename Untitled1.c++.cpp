#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
    protected:
    char name[];int reg_no,age;
public:
    void read()
    {
        cin>>name>>reg_no>>age;
    }
};
class ugstudent:public student
{
    int sem;
public:
    void read()
    {
        cin>>sem;
    }
    int compute()
    {
        return age;
    }
    int seme()
    {
        return sem;
    }
};
class pgstudent:public student
{
    int sem;
public:
    void read()
    {
        cin>>sem;
    }
int compute()
{
    return age;
}
int seme()
{
    return(sem);
}
};
int main()
{
    ugstudent ob[10];pgstudent ob1[10];int i;
    int num[10],num1[10],sum[10],sum1[10];
    cout<<"Semester\tName\treg_no\tAge\n";
    for(i=0;i<3;i++)
    {
        ob[i].read();num[i]=0;num1[i]=0;sum[i]=0;sum1[i]=0;
        ob[i].student::read();
    }
    cout<<"Semester\tName\treg_no\tAge\n";
    for(i=0;i<3;i++)
    {
        ob1[i].read();
        ob1[i].student::read();
    }
    for(i=0;i<3;i++)
    {
        num[ob[i].seme()-1]+=1;
        num1[ob1[i].seme()-1]+=1;
        sum[ob[i].seme()-1]+=ob[i].compute();
        sum1[ob1[i].seme()-1]+=ob1[i].compute();
    }
    for(i=0;i<7;i++)
    {
        if(num[i]==0)num[i]=1;
        if(num1[i]==0)num1[i]=1;
        cout<<"\nAverage age of all UG students of semester "<<i+1<<"\t"<<(sum[i]/(num[i]));
    }
    for(i=0;i<7;i++)
    {
        cout<<"\nAverage age of all PG students of semester "<<i+1<<"\t"<<(sum1[i]/num1[i]);
    }
    cout<<"\n\n\nOver";
}
