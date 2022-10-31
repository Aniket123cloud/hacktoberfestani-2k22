#include<iostream>
using namespace std;
class A
{
    public :
        A()
        {
            cout<<"Base class constructor A "<<endl;
        }
        ~A()
        {
            cout<<"Base class destructor A "<<endl;
        }
};
class B
{
    public :
        B()
        {
            cout<<"Base class constructor B "<<endl;
        }
        ~B()
        {
            cout<<"Base class destructor B "<<endl;
        }
};
class C : public A,public B
{
    public : 
        C()
        {
            cout<<"Derived class construcor C "<<endl;
        }
        ~C()
        {
            cout<<"Derived class destructor C "<<endl;
        }
};
int main()
{
    C c1;
}