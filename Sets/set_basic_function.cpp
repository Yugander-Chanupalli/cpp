#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main()
{
    
    set<int> s;
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int a,b;
        cin >> a >> b;
        if (a==1){
            s.insert(b);
        }
        else if(a==2){
            s.erase(b);
        }
        else if(a==3){
            if(s.find(b)!=s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout << "No"<<endl;
            }
        }
    }
       
    return 0;
}

// Inserting pair into the set is also possible just change datatype int to pair<int,int> to store elements into set like pair run for loop and there are few approaches to get this done.
// First one is using make_pair function s.insert(make_pair({elements}) another is direct approach like s.insert({elements}).
