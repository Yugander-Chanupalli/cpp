#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
  list<int> ls,ls2;
  int nums;
  cin>> nums;
  for(int i=0; i<nums; i++){
    int values;
    cin>> values;
    ls.push_back(values);
  }
  for(auto it=ls.begin();it!=ls.end(); it++){
    cout<< *it << endl;
  }
  ls.reverse();
  cout<< endl<<"After reversing the list front element :"<<ls.front();
  cout<< endl<<"Size of list :"<<ls.size();
  cout<< endl<<"back element :"<<ls.back();
  ls.pop_front();
  cout<< endl<<"front after pop_front :"<<ls.front();
  ls.push_front(3);
  cout<< endl<<"front after adding :"<<ls.front();
  ls.insert(ls.begin(),4);
  cout<< endl<<"front after insert :"<<ls.front();
  cout<< endl<<"Size of list :"<<ls.size();
  ls.sort();
  for(auto i:ls){
    cout<< i <<endl;
  }
  if(ls.empty()){
    cout<<endl<<"list is empty";
  }
  else{
    cout<<endl<<"list is not empty";
  }
  ls2={5,6,7};
  cout<<endl<<ls2.front();
  
  
}
