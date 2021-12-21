#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<=1)
    return n;
    return fib(n-2)+fib(n-1);
}

//using loop
int fib1(int n)
{
    int t0=0,t1=1,s,i;

    if(n<=1)
    return n;

    for(i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }

    return s;
}

// using memoitzation

int f[10];
int fib2(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }

    else
    {
        if(f[n-2]==-1)
        f[n-2]=fib2(n-2);
        if(f[n-1]==-1)
        f[n-1]=fib2(n-1);
        f[n]=f[n-2]+f[n-1];
        return f[n-2]+f[n-1];
    }
}

int main()
{
    

    return 0;
}