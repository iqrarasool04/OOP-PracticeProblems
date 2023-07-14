#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    int roll_no;
    int phone_no;
    string address;

    public:
    string name;
    
    void set_data(int rn, int pn, string add){
        roll_no = rn;
        phone_no = pn;
        address = add;
    }
    int get_rollno(){
        return roll_no;
    }
    int get_phoneno(){
        return phone_no;
    }
    string get_address(){
        return address;
    }
    void print_data(Student s){
        cout<<"Roll number of "<< s <<" is: "<<s.roll_no<<endl;
        cout<<"Phone number of "<< s <<" is: "<<s.phone_no<<endl;
        cout<<"Address of "<< s <<" is: "<<s.address<<endl;
    }
}

int main(){
    Student s1,s2;
    // object1
    s1.name = "Sam";
    int rn,pn;
    string add;
    cout<<"Enter roll no: ";
    cin>>rn;
    cout<<endl;
    cout<<"Enter phone no: ";
    cin>>pn;
    cout<<endl;
    cout<<"Enter address: ";
    cin>>add;
    cout<<endl;
    s1.set_data(rn,pn,add);
    cout<<"Name of student 1 is: "<<s1.name<<endl;
    print_data(s1);

    // object2
    s2.name = "John";
    int rn1,pn1;
    string add1;
    cout<<"Enter roll no: ";
    cin>>rn1;
    cout<<endl;
    cout<<"Enter phone no: ";
    cin>>pn1;
    cout<<endl;
    cout<<"Enter address: ";
    cin>>add1;
    cout<<endl;
    s1.set_data(rn1,pn1,add1);
    cout<<"Name of student 2 is: "<<s2.name<<endl;
    print_data(s2);
}