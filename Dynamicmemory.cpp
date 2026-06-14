#include<iostream>
using namespace std ;

int main() 
{

  int Size = 0;
  float * Marks = NULL ;

  cout <<"Enter no of elements\n";
  cin >> Size;



  ///Dynamic Memory allocation
  int i = 0;

  Marks = new float[Size];

  //Static Memory allocstion
   // float Marks[5];     ///20 bytes  
    
    
    cout << "Enter your marks:\n";

    //iteration
       ///  1   2    3
    for(i=0;i<Size ;i++)
    {
      cin >> Marks[i];  //4    
    }

    cout << "Enter marks are:\n ";

    //iteration
     ///  1   2    3
    for(i=0;   i<Size  ;i++)   
    {
      cout << Marks[i]<<"\n" ;  //4    
    }    

    delete [] Marks;
    return 0;
}