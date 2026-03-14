#include<stdio.h>
int addition(int no1,int no2)
{
    int ans=no1+no2;
    return ans;
}
int substraction(int no1,int no2)
{
    int ans=no1-no2;
    return ans;
}
int main()
{
    int a=11,b=10;
    int result=0;  ///rekami
    result=addition(a,b);
    printf("Addition is : %d\n",result);

    result= substraction(a,b);
    printf("substraction is : %d\n",result);


    return 0;
}