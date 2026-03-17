#include<stdio.h>

int Addition(int no1,int no2)
{
    int Ans=0;
    Ans=no1+no2;
    return Ans;
    
}

int main()
{
    int Ret=0;
    int A=10,B=11;

    Ret=Addition(A,B);

    printf("Addition is:%d\n",Ret);
    
    return 0;

}
