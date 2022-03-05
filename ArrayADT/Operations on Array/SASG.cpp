
#include <iostream>

using namespace std;


// Function to get value at a particular index in an array

int Get(int index,int length,int arr[])
{
    if(index>=0 && index<length)
     return arr[index];
}


// Function to set value at a particular index

void Set(int index,int x,int arr[])
{
    if(index>=0 && index<length)
    arr[index]=x;
}

// Function to get maximum value in an array

int max(int length,int arr[])
{
    int max;
    max=arr[0];
    for(int i=0;i<length;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    
    return max;
    
}

// Function to get minnimum value in an array

int min(int lengt,int arr[])
{
    int min;
    min=arr[0];
    for(int i=0;i<length;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    
    return min;
    
}

// Function to get sum of all elements in an array

int Sum(int length,int arr[])
{
    int Total=0;
    for(int i=0;i<length;i++)
    {
        Total+=Total+arr[i];
    }
    
    return Total;
}

// Function to get average of numbers in an array

int Avg(int length,int arr[])
{
    // first find total as in previous function 
     
     return (float) Total/length;
}
int main()
{
    

    return 0;
}
