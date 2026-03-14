#include<iostream>
using namespace std ;
//encapsulation
class marvellous
{
     //Access specifier
    public:
    int no1,no2 ;     //characterictics    //8
    //default constructor
    marvellous()
    {
        cout<<"Inside Default Constructor\n";
        no1=0,no2=0;
    
    }
     marvellous(int A, int B)     //parametrised constructor
    {
        cout<<"Inside parametrised Constructor\n";
        no1=A;
        no2=B;
    
    }
     marvellous(marvellous &ref)    //copy
    {
        cout<<"Inside copy Constructor\n";
        no1=ref.no1;
        no2=ref.no2;
    
    }
    
    ~marvellous()
    {
        cout<<"Inside Destructor\n";
    }
   

    
};

int main()
{  
    cout<<"Inside Main\n";
   marvellous mobj1;    //default constructor object
   marvellous mobj2(11,21);   //parametrised constructor object
   marvellous mobj3(mobj2);   //copy constructor object

   cout<<"End of main\n";


    return 0;
}  ///all destructors get called 