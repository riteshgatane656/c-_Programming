#include<iostream>
using namespace std ;
//encapsulation      
class marvellous
{
    //Access specifier  //by default it is private //so when we call the object it will show error
    
    int no1,no2 ;     //characterictics    //8

    void fun()
    {
    cout<<"inside fun\n"; //Behaviour
    }
    void gun()
    {
    cout<<"Inside Gun\n";    //behaviour
    }
};

int main()
{
    ///object creation(instance)
    marvellous mobj1;
    marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";

    cout<<mobj1.no1<<"\n"; //error

    mobj1.fun();
    mobj2.fun();
    mobj2.gun();

    return 0;
}