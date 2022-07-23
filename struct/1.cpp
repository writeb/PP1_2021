#include <iostream>
using namespace std;

struct student{
    string gpa;
    string name;
    string sname;
    string print(){
        return name + " " + sname + " " + gpa;
    }
};

int main(){
    student s1;
    s1.gpa = "3.6";
    s1.name = "Rauan";
    s1.sname = "Amantaiuly";
    cout<<s1.print()<<endl;


    return 0;
}