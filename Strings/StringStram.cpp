#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int>  parseInts(string str) {
	vector<int> result;
    stringstream ss(str);
    char ch;
    int num;
    
    while(ss>>num){
        result.push_back(num);
        if(ss>>ch&& ch!=','){
            cerr << "Error:invalid input";
            exit (1);
        }
    }
    return result;
}

int main() {
    string str;
    getline(cin,str);
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

// Logic is reading the elemnts and storing only int's into vector and checking second ch is comma or not.
