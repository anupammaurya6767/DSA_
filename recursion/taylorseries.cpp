#include<iostream>
using namespace std;

// e^x=1+x+x/2!+x/3!...nterms

double e(int x, int n)
{
    static double p=1,f=1;
    int r;
    if(n==0)
    {
        return 1;
    }

    else
    {
        r=e(x,(n-1));
        p=p*x;
        f=f*n;
        return r+(p/f);
    }
}

// using horner's rule:

double e1(int x, int n)
{
    static double s=1;
    if(n==0)
    return s;
    s=1+((x/n)*s);

    return e1(x,(n-1));
}



int main()
{
    

    return 0;
}