#include<iostream>
using namespace std;

/*

The Diamond Problem is an ambiguity error that arises in multiple inheritance 
when a derived class inherits from two or more base classes that share a common ancestor. 
This results in the inheritance hierarchy forming a diamond shape, hence the name "Diamond Problem." 
The ambiguity arises because the derived class has multiple paths to access members or methods inherited 
from the common ancestor, leading to confusion during method resolution and member access.


*/

class Base{
    public:
        void fun(){
            cout<<"Base class "<<endl;
        } 
};

class Parent1 : virtual public Base{

};

class Parent2 : virtual public Base{

};

class child : public Parent1,public Parent2{

};

int main(){

    child obj;
    obj.fun();

    return 0;
}