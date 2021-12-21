#include<iostream>
using namespace std;

int fact(int n); // factorial function

int c(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return (t1/t2)*t3;
}

// by pascals triangle

int c(int n,int r)
{
    if(r==0||n==r)
    return 1;
    else
    {
        return c(n-1,r-1)+c(n-1,r);
    }
}



int main()
{
    

    return 0;
}