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

     void fun()   //non static method
     {
        cout<<"Inside NON_STATIC Fun\n";
        cout<<"i :" << i << "\n";
        cout<<"j :" << j << "\n";
        cout<<"k :" << k << "\n";
     }

     static void gun()            // static method
     {
        cout<<"Inside STATIC Gun\n";
        cout<<"k :" << k << "\n";

     }

     

};

int Demo:: k = 11;
int main()
{
    cout<<Demo::k<<"\n";       //11

    Demo::gun();

    Demo dobj ;

    cout<<Demo::k<<"\n"; 

    cout<<dobj.i<<"\n";    //0
    cout<<dobj.j<<"\n";   //0

    dobj.fun();
  
    return 0 ;
}