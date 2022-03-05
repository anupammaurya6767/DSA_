
#include <iostream>

using namespace std;


// Reverse an array (first to last and vice versa)

  // Method 1: Using Auxillary array
     
     int reveseaux(int arr[],int length)
     {
         int brr[length];
         
         // First copy back to front in a new array
         
         for(int i=length-1,j=0;i>=0;i--,j++)
         {
             brr[j]=arr[i];
         }
         
         // Copy again as it is from new to old one
         
         for(int i=0;i<length;i++)
         {
             arr[i]=brr[i];
         }
         
         return 0;
     }
     
  // Method 2:
  
      int reverse(int arr[],int length)
      {
         for(int i=0,j=length-1;i<j;i++,j--)
           {
               int temp;
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
           
           return 0;
      }
      
      
  // Rotate the array elements by shifting them to the left
  
      void Rotate(int arr[],int length)
      {
         int temp;
         temp=arr[0];
         
         for(int i=1;i<length;i++)
         {
             arr[i-1]=arr[i];
         }
         
          arr[i]=0;
          
          
          arr[i]=temp;
      }


int main()
{
    

    return 0;
}
