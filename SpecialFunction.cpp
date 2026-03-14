#include<iostream>
using namespace std ;


class Demo
{
    public:
    int i;         ///initialisted globally variable
    int f;
    Demo()
    { cout<<"Inside the construtor\n";
          i= 0;   
          f=23;
    }

~Demo()
{
    cout<<"inside the destructor\n";
    i=0;
    

}

    int in()
    {
       cout<<"the new object\n";

    }
};

int main()
{
    cout<<"inside the main\n";
    Demo dobj1;
    cout<<"\n" << dobj1.i <<"\n";
   
    dobj1.in();
    cout<<"end of main\n";



    return 0 ;

}