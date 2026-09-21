#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
    int roll;
    char name[25];

    public:
    void getdata()

    {
        cout<<"\n-----------------------------------------";
        cout<<"\n Enter Roll No. :";
        cin>>roll;
        cout<<"\n Enter Student Name:";
        cin>>name;
    
    }
void putdata()
    {
        cout<<"\n-----------------------------------------";
        cout<<"\n**********Student Marklist**********";
        cout<<"\n-----------------------------------------";
        cout<<"\n Roll No.:"<<roll;
        cout<<"\n Student Name:"<<name<<endl;
    }
};
class StudentExam: public Student//class StudentExam derived from Class Student
 