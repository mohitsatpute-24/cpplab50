#include<iostream>
#include<string>
using namespace std;
class student {
    private:
    string name;
    int rollNo;
    float marks;


    public:
    void inputDetails(){
        cout<<"enter student name:";
        getline(cin>>ws,name);
        cout<<"enter roll number:";
        cin>>rollNo;
        cout<<"Enter marks:";
        cin>>marks;
    }

    void displayDetails() const{
        cout<<"\n----student details----\n";
        cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<rollNo<<endl;
        cout<<"marks:"<<marks<<endl;
        
    }
};

int main(){
    student s;
    s.inputDetails();
    s.displayDetails();
    return 0;

}
