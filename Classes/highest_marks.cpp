#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
private:
    vector<int> scores;
        
public:
    void input(){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        scores.push_back(a);          
        scores.push_back(b);          
        scores.push_back(c);          
        scores.push_back(d);          
        scores.push_back(e);
     }
        int calculateTotalScore(){
            int total = 0;
            for(int i=0; i<scores.size(); i++){
                total += scores[i]; 
              // or use this approach
              //   for(auto i:scores){
              //   total += i; 
            }
            return total;
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}




