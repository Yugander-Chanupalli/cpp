#include <iostream>
#include <string>
using namespace std;


struct camera{
  string front;
  string rear;
};


struct phone{
  string name;
  string processor;
  camera cam;
  int ram;
  int rom;
};

int main() 
{
  phone realme;
  
  realme.name="Realmex2pro";
  realme.processor="snapdragon";
  realme.cam.front="16 mp";
  realme.cam.rear="64 mp";
  realme.ram=6;
  realme.rom=64;
  
  
  cout<<endl<< "Mobile name:"<< realme.name;
  cout<<endl<< "Mobile processor:"<< realme.processor;
  cout<<endl<< "Mobile front camera:"<< realme.cam.front;
  cout<<endl<< "Mobile rear camera:"<< realme.cam.rear;
  cout<<endl<< "Mobile ram:"<< realme.ram;
  cout<<endl<< "Mobile rom:"<< realme.rom;
  
}
