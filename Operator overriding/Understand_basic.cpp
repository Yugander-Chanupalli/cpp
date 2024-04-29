#include <iostream>
using namespace std;

class A{
  private:
    int value1;
    
  public:
    A(int x=0){
      value1=x;
    }
    void printv(){
      cout << "value :"<<value1<<"\n";
      
    }
    A operator + (A w){
      A temp;
      temp.value1=value1+w.value1;
      return temp;
    }
    A operator - (A w){
      A temp;
      temp.value1=value1 - w.value1;
      return temp;
      
    }
    
};


int main() 
{
    A per(10);
    A per1(40);
    
    A total;
    total = per + per1;
    total.printv();
    total = per - per1;
    total.printv();
}
