#include<iostream>
using namespace std;

int pow(int m, int n)
{
    if(n==0)
    return 1;

    return pow(m,n-1)*m;
}

int pow1(int m,int n)
{
    if ((n==0))
    {
        return 1;
        /* code */
    }

    if(n%2==0)
    {
        return pow(m*m,n/2);
    }

    else{
        return m*pow(m*m,(n-1)/2);
    }

    
}



int main()
{
    cout<<pow(10,2)<<endl;
    cout<<pow1(10,2)<<endl;

    return 0;
}