#include<iostream>
using namespace std;

class Hello{
    public:
        void sayHello(){
            cout<<"Demo of class and Object"<<endl;
        }
};

int main(){
    Hello obj;
    obj.sayHello();
    return 0;
}