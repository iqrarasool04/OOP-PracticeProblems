#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;
};
int main(){
    Student s;
    s.name = "John";
    s.roll_no = 2;
    cout<<s.name<<endl;
    cout<<s.roll_no<<endl;
}
