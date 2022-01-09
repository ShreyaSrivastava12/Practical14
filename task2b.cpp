#include<iostream>
using namespace std;
class Base{
   public:
   virtual ~Base()
    {
        cout<<"Base class destructor\n";
        cout<<endl;
    }
};
class Derived : public Base{
    public:
    ~Derived()
    {
        cout<<"Derived class destructor\n";
        cout<<endl;
    }
};
int main()
{
    Base *ptr = new Derived;  
    delete ptr;
}
