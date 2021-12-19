#include<iostream>
using namespace std;

// recursive cll in another function and then again....

void funa(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        funb(n-1);
    }
}

void funb(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        funa(n/2);
    }
}




int main()
{
    funa(10);

    return 0;
}