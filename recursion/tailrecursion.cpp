#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);  //  recursive call at the end  line of that function... called Tail Recursion.
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