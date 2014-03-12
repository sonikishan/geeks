#include <iostream>

using namespace std;

int main() {

   int n;
   cout<<"\n Enter the length of array=";
   cin>>n;
   //Input the array elements
   int array[n];
   cout<<"\nEnter the array elements=";

   for(int i=0;i<n;i++)
      cin>>array[i];

   int max=array[0];
   int count=1, maxcount=1;

   for(int i=1;i<n;i++) {
      if(array[i-1]==array[i]) {
         count++;
         if(maxcount<count) {
            max=array[i];
            maxcount=count;
         }
      }
      else{
         count=1;
      }
   }
   cout<<"Max value is  "<<max<<"and it occured for "<<maxcount<<"  times";
   return 0;

}