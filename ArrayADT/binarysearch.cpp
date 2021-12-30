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

void Delete(int index)
{
    if(index>=0 && index<length)
    {
        for(int i=index;i<length-1;i++)
        {
            a[i]=a[i+1];
        }

        length--;
    }
}

void Bsearch(int key)
{
    int l=0;
    int mid;
    int h=length;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==mid)
        {
            return mid;
        }

        else if(key<a[mid])
        h=mid-1;
        else if(key>a[mid])
        l=mid+1;
    }

    return -1;
}

void RBsearch(int l,int h,int key){
    l=0;
    h=length;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        return RBsearch(l,mid-1,key);
        else 
        return RBsearch(mid+1,h,key);
    }

    return -1;
}
    
};


int main()
{
    

    return 0;
}