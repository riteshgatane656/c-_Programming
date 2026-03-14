#include<iostream>
using namespace std;
class Hello
{
    public:
    int additiontwo(int A, int B)
    {
    return A+B;
    }

    int additionthree(int A, int B,int C)
    {
    return A+B+C;
    }

    int additionfour(int A, int B,int C,int D)
    {
    return A+B+C+D;
    }


};
int main()
{
    Hello hobj;

    cout<<hobj.additiontwo(10,20)<<"\n";

    cout<<hobj.additionthree(10,20,30)<<"\n";

    cout<<hobj.additionfour(10,20,30,40)<<"\n";
    return 0;
}