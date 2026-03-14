#include <iostream>
using namespace std;
class Demo
{
    public:
     int i;   //characteritics
    
     float f;
     void fun() //behaviour
     {
        cout<<"inside fun\n";
     }
};
int main()
{
    Demo dobj;
    cout<<sizeof(dobj);     //8



    return 0;
}