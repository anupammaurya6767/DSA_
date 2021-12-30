#include<iostream.h>
using namespace std;

int *p=new int[5];
int *q=new int[10];

for(i=0;i<5;i++)
{
    q[i]=p[i];
}

delete p[];
p=q;
q=NULL;

int main()
{
    

    return 0;
}