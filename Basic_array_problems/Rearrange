#include <iostream>
using namespace std;



int main() 
{
   int arr[6] = {1,2,3,4,5,6};
   int len=sizeof(arr)/sizeof(arr[0]);
   int temp[6] = {0};
   int len_temp=sizeof(temp)/sizeof(temp[0]);
   int even_ind=0;
   int temp_ind=len_temp-1;
   
   for(int i=0; i<len; ++i){
     
     if(arr[i]%2==0){
       temp[even_ind]=arr[i];
       ++even_ind;
       
     }
     else{
       temp[temp_ind]=arr[i];
       --temp_ind;
       
     }
  
   }
   
   for(int i=0; i<len_temp; ++i){
     if(temp[i]!=0){
       cout<< temp[i]<<" ";
     }
   } 
   return 0;
}
