#ifndef PROGRAMMER_H

#define PROGRAMMER_H
#include <iostream>
using namespace std;
class Programmer{
    private:
      string Empid;
      string name;
      string businessunit;
      string  manageid;
        string areaofexpertise;
    string designation;
    public:
       Programmer();
       Programmer(string a,string b,string c,string e,string f,string g);
       string getexpertise();
       void displaydetails();
       };
#endif     
    
