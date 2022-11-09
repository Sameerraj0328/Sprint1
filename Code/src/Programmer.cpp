#include <iostream>
#include "Programmer.h"
using namespace std;
Programmer::Programmer(){}
Programmer::Programmer(int a,string b,string c,int e,string f,string g){
             Empid=a;
            name=b;
            businessunit=c;
            manageid=e;
           areaofexpertise=f;
          designation=g;
          }
string Programmer::getexpertise(){
        return areaofexpertise;
        }
void Programmer::displaydetails(){
        cout << businessunit << name << endl;
        }
          
