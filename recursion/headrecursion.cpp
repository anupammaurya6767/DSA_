#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        
        fun(n-1);  //  recursive call at the first  line of that function... called Head Recursion.
        cout<<n<<" ";
    }

    return 0;
}


int main()
{
    int x;
    x=5;
   fun(x);

    return 0;
}