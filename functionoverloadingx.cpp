#include<iostream>
using namespace std;
class Hello
{
    public:  
    int addition(int A, int B)
    {
    return A+B;
    }

    int addition(int A, int B,int C)
    {
    return A+B+C;
    }

    int addition(int A, int B,int C,int D)
    {
    return A+B+C+D;
    }


};
int main()
{
    Hello hobj;

    cout<<hobj.addition(10,20)<<"\n";

    cout<<hobj.addition(10,20,30)<<"\n";

    cout<<hobj.addition(10,20,30,40)<<"\n";
    return 0;
}