#include <iostream>
using namespace std;


class person{
  private:
    int age;
    string name;
    
  public:
  
    person(){             //Non - parameterized constructor
      name="hello";
      age=25;
    }
    // void setData(int Age,string Name){
    //   name=Name;
    //   age=Age;
    // }
    person(int Age,string Name){    //parameterized constructor
      age=Age;
      name=Name;
    }
    
    person(person &per1){       //copy constructor
      age=per1.age;
      name=per1.name;
    }
    
    
    void getData(){
      cout<< "Age :"<<age<<endl;
      cout<< "Name :"<<name<<endl;
    }
};
int main() 
{
    person per1,per2(30,"Ravi"),per3(per1);    //per2 Passing values to parameterized constructor
    per1.getData();                           //per3 is object and we are passing per1 to this
    per2.getData();
    per3.getData();
}
