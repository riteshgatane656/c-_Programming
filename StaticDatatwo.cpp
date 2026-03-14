#include <iostream>
using namespace std ;
class Demo
{
    public:
     int i ;             //Non Static
     int j ;             //Non Static
     static int k ;        //Static

     Demo()
     {
        int i = 0;
        int j = 0;
     }

     

};

int Demo:: k = 11;
int main()
{
    Demo dobj ;

    cout<<Demo::k<<"\n";
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
  
    return 0 ;
}