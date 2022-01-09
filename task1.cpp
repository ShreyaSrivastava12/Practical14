#include<iostream>
using namespace std;
class parent{
    public:
    virtual int add(int x , int y)
    {
        return(x+y);
    }
};
class child : public parent{
    public:
    int add(int x , int y)
    {
     
        return(x+y+2);
    }
};
int main()
{
  parent  *ptr;
  child obj1;
  ptr = &obj1;

  // cout<<ptr->add(3, 4)<<endl; 
  //This gives an output 7 due to early binding or compile time binding 
  
  cout<<ptr->add(3, 4)<<endl; 
  //this gives an output 9 due to late binding or dynamic binding by using virtual keyword 
  cout<<endl;
}
