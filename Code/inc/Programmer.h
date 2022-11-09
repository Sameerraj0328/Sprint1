#include <iostream>
using namespace std;
class Programmer{
    int Empid;
    string name;
    string businessunit;
    int manageid;
    string areaofexpertise;
    string designation;
    public:
       Programmer();
       Programmer(int a,string b,string c,int e,string f,string g);
       string getexpertise();
       void displaydetails();
       };
       
    
