#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  vector<int> v;
  
  int num;
  cin >> num;
  // inserting elements into vector
  for (int i=0; i<num ;i++){
    int value;
    cin >> value;
    v.push_back(value);
  }
  
  cout << "Printing the vector elements" << endl;
  for(auto it=v.begin(); it!=v.end(); it++){
    cout<< *(it) << " ";
  }
  
  cout<< "\nThe front element of the vector: "<< v.front();
  cout<< "\nThe back element of the vector: "<< v.back();
  cout<< "\nThe size of the vector: "<< v.size();
  cout<< "\nDeleting element from the end: "<< v[v.size()-1]<<endl;
  v.pop_back();
  
  cout<< "Printing the vector after removing the last element:" << endl;
  // for(auto it:v){
  //   cout << it <<endl;
  // }
  for(int i=0; i<v.size(); i++){
    cout<< v[i] <<endl;
  }
  
  cout<< "Inserting 10 at 3rd position in vector: "<<endl;
  v.insert(v.begin() + 2, 10);
  for(int i=0; i<v.size(); i++){
    cout<< v[i] <<endl;
  }
  cout<< "The first element is: "<< v[0]<< endl;
  cout<< "Erasing the first element" <<endl;
  v.erase(v.begin() + 2);
  cout << "Now the first element is: "<<v[0]<<endl;
  
  if(v.empty())
    cout<< "\nvector is empty"<<endl;
  else
    cout<< "\nvector is not empty"<< endl;
    
  cout<< "Before clearing the vector the size is: "<<v.size()<<endl;
    
  v.clear();
  cout<< "Size of the vector after clearing the vector: "<< v.size();
  
  
  
}
