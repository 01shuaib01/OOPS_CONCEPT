#include<iostream>
using namespace std;

class Student{
private:
    int age;
    string name;

    public:
        void setVal(int age,string name ){
            this->age = age;
            this->name = name;
        }
        void print(){
            cout<<"name is "<<this->name<<endl;
            cout<<"age is "<<this->age<<endl;
        }

};

int main(){
    cout<<"Hello"<<endl;
    Student obj;
    obj.setVal(20,"shuaib");
    obj.print();
    return 0;
}


// 3+4 = 7;
// 5+2 = 7;
// 2+5 = 7;
// 1+6 = 7