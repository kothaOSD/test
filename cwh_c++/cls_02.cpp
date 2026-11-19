#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk__bin(void);
    void ones_complement(void);
    void display(void);
};
void binary::read(void)
{
  cout<<"enter a binary number"<<endl;
  cin>>s;
}


void binary::chk__bin(void)
{
  
  for (int i = 0; i <s.length(); i++)
  {
    if (s.at(i)!='0' && s.at(i)!='1')
    {
      cout<<"incorrect binary format"<<endl;
      exit(0);
    }
    
  }
  
}


void binary::display(void)
{
  cout<<"displaying your binary code:"<<endl;
  for (int i = 0; i <s.length(); i++)
  {
    cout<<s.at(i);
  }
  cout<<endl;
}
void binary::ones_complement(void)
{
   for (int i = 0; i <s.length(); i++)
   {
     if (s.at(i)=='0')
     {
       s.at(i)='1';
     }
     else
       s.at(i)='0';
    
   }
   
}
int main()
{
    // oops classes and objects
    //  c++ --> initially called --> c with classes
    // class --> extension of structures (in cd)
    // structures had limitations
    //    members are public
    //  -->no methods
    //  classes = structures + more
    //  classses -> can have methods and properties
    // classes --. can make few members as private and few as public
    //  structures in c++ are typedefed
    //  you can declare objects along woth the class declaration like this :
    /*class employee{
    class defination
    }kotha,lekha;
    */
    // kotha.salary = it makes no sense if salary is private

    // nesting of member functions


    binary b;
    b.read();
    b.chk__bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}