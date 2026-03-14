#include<iostream>
using namespace std;
class Arithematic
{
    public:
    int no1;
    int no2;

    Arithematic()
    {
        no1=0;
        no2=0;
    }
    Arithematic(int value1,int value2)
    {
        no1=value1;
        no2=value2;
    }
    int addition()
    {
        int ans=no1+no2;
        return ans;
    }
    int substraction()
    {
        int ans=no1-no2;
        return ans;
    }
 
};

int main()
{
    Arithematic aobj(11,10);
    int result=0;

    result= aobj.addition();
    cout<<"addition is :"<<result<<"\n";

    result= aobj.substraction();
    cout<<"subtraction is :"<<result<<"\n";

    
    return 0;
}
