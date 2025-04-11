#include<iostream>
using namespace std;

class Student{
    int age;
    string name;
    public:
        //  Parameterized Constructor
        Student(int age,string name){
            this->age = age;
            this->name = name;
        }

        void getVal(){
            cout<<"Name of the student -> "<<this->name<<endl;
            cout<<"Age of the student -> "<<this->age<<endl;
        }
        // Default Constructor
        Student(){
            cout<<"Defalt Constructor"<<endl;
        }
};

int main(){
    Student obj(20,"shuaib");
    obj.getVal();
    Student obj2;
    return 0;
}