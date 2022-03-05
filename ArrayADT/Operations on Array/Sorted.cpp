
#include <iostream>

using namespace std;

// Check if ann array is sorted
 
  bool isSorted(int arr[],int n)
  {
      for(int i=0;i<n-1;i++)
      {
          if(arr[i]>arr[i+1])
           return false;
      }
      
      return true;
  }
  
  
 // Insert a number in a sorted array at a sorted place
 
   void insertSorted(int arr[],int n,int x)
   {
          int i=n-1;
      
          while(arr[i]>x)
           {
               a[i+1]=arr[i];
               i--;
           }
           
           arr[i+1]=x;
   }
   
 // function to set all -ve values in a sorted array to left side of the array
 
   void(int arr[],int n)
   {
       int i=0;
       int j=n-1;
       while(i<j)
       {
           while(arr[i]<0)
           i++;
           
           while(arr[j]>=0)
           j--;
           
           if(i<j)
           {
               swap(arr[i],arr[j]);
           }
       } 
   }
   
   
 // Function to merge two sorted array to a single sorted array
 
   void Merge(int arr[],int a,int brr[],int b)
   {
       int crr[a+b];
       int k=0;
       int i=0,j=0;
       
       while(i<a;j<b)
       {
           if(arr[i]<brr[j])
           crr[k++]=arr[i++];
           
           else
            crr[k++]=brr[j++];
       }
       
       // Copy rest elements;
       
       for(;i<a;i++)
       {
           crr[k++]=arr[i];
       }
       
       
        for(;j<b;j++)
       {
           crr[k++]=brr[j];
       }
   }
    
int main()
{
    

    return 0;
}
