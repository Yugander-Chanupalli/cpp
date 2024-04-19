#include <iostream>
#include <string>
using namespace std;

struct car{
  string name;
  string company;
  int tyres;
  string color;
};

int main() 
{
  car BMW,Toyota;
  BMW = {"BMW100","BMW",4,"Black"};
  // Toyota=BMW;
  Toyota.name="Toyota123";
  Toyota.company="Toyota";
  Toyota.tyres=BMW.tyres;
  Toyota.color=BMW.color;
  
  cout<<endl<< "Car details (bmw) :"<< BMW.name<<"\n"<<"company :"<<BMW.company<<"\n"<<"Tyres :"<< BMW.tyres<<"\n"<<"Colour :"<<BMW.color;
  cout<<endl<< Toyota.color;
}
