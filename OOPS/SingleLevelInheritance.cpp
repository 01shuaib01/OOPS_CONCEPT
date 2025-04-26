#include<iostream>
using namespace std;

class Person{
    int age;
    string name;
    public :
        void setVal(int age,string name){
            this->age = age;
            this->name = name;
        }
        void getVal(){
            cout<<" Name is "<<this->name<<endl;
            cout<<" age is "<<this->age<<endl;
        }
};
class Student : public Person{
    int roll_no;
    public:
        void setRoll(int roll_no){
            this->roll_no = roll_no;
        }
        int getRoll(){
            return this->roll_no;
        }
};

int main(){
    // Person obj;
    // obj.setVal(20,"shuaib");
    // obj.getVal();

    Student obj;
    obj.setVal(19,"abc");
    obj.getVal();
    obj.setRoll(12);
    // int roll = obj.getRoll();
    // cout<<"roll no "<<roll<<endl;
    cout<<"roll -> " <<obj.getRoll()<<endl;
    return 0;
}