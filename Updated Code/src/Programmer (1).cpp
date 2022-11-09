#include <iostream>
#include "Programmer.h"
using namespace std;
Programmer::Programmer(){}
Programmer::Programmer(string a,string b,string c,string e,string f,string g){
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
        cout << Empid << name << businessunit << manageid  << areaofexpertise << designation << endl;
        }
          
