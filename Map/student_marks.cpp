#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int> m;
    
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int type,marks;
        string name;
        cin >> type >> name;
        if (type==1) {
            cin >> marks;
            if (m.find(name)!=m.end()) {
                m[name]+=marks;
            }
            else {
                m[name] = marks;
            }
        }
        else if (type==2) {
            m[name]=0;
        }
        
        else if (type==3) {
           cout << m[name] <<endl;
            }
            
        }
   
    return 0;
}

// we can also access the map elements using below snippet also
// for(auto i:m){
//   cout<< i.first <<" "<< i.second <<endl;
// }
// or
// for (map<string,int>::iterator itr=m.begin();itr!=m.end();itr++{
//   cout << i->first <<" "<< i->second << endl;
// }
