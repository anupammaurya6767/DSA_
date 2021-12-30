#include<iostream>
using namespace std;

class  array
{
private:
int size=10;
int length=6;
int *a=new int[size];
    /* data */
public:

void Display(){
    for(int i=0;i<length;i++)
    {
        cout<<a[i];
    }
}

void add(int x){
    a[length]=x;
    length++;
}

void insert(int index, int x)
{
    if(length<size)
    {
        for(int i=length;i>index;i--)
        {
            a[i]=a[i-1];
        }

        a[index]=x;
        length++;
    }
}
    
};


int main()
{
    

    return 0;
}