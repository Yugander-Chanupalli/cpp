#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q;
    cin>>n>>q;
    
    vector<vector<int>> vectors(n);
    
    for(int i=0; i<n; i++){
        
        int size;
        cin>>size;
        vector<int> temp;
        
        for(int j=0; j<size; j++){
            int element;
            cin >> element;
            temp.push_back(element);    
        }
        vectors[i]=temp;
    
    }
   
    for(int i=0; i<q; i++){
        int index,pos;
        cin>> index >> pos;
    
        vector<int> updated_vec=vectors[index];
        if (index>=0 && index<n && pos>=0 && pos<updated_vec.size()) {
            cout<< updated_vec[pos] << endl;
        }
        else{
            cout<< "check index";
        }
    }
    
    return 0;
}

// if we need to read the two vectors have to initialize like line no 14.
// when pushing the elements into vector through push_back function don't mention its size.
// observe 32,33 lines must be in loop according to question.
