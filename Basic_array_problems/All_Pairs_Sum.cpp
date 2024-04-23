#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    bool pairfound = false;
    for(int i=0; i<len; ++i){
      for(int j=0; j<len; ++j){
        if(arr[i] + arr[j] == target){
          cout << " Pair found :" << i << ","<<j<<endl;
          pairfound=true;
        }
      }
    }
    
    if(!pairfound){
      cout<< "Pair Not Found"<<endl;
    }
    return 0;
}
