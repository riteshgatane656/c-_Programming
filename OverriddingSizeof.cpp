#include<iostream>
using namespace std ;
class Base
{public :
    int i,j ;
    void fun()
    {cout <<"INside BAse  fun" ;   }

     void gun()
    {cout <<"INside BAse gun" ;   }

    void sun()
    {cout <<"INside BAse sun" ;   }


};     /////8 bytes

class Derived: public Base
{ public :
    int x,y ;

    void fun()     ///redefination of thwe fun from the base 
    {cout <<"INside Derived fun"      ;}

    void sun()      ///redefintion 
    {cout <<"INside Derived sun"      ;}

    void run()       ///defination 
    {cout <<"INside Derived run"      ;}




};      ///16 Bytes
int main()
{
    cout <<sizeof(Base)<<"\n"  ;     ///8
    cout <<sizeof(Derived)<<"\n"  ;    ///16

    
    return 0;

}