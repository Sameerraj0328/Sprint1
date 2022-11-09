#include <iostream>
#include "defect.h"
using namespace std;
defect::defect(){}
defect::defect(string a,string b,string c,string d,string e,string f){
       defectno=a;
       description=b;
       Modulename=c;
       functionalarea=d;
       date=e;
       Type = f;}
string defect::getfunctionalarea(){
       return functionalarea;}
string defect::gettype(){
       return Type;
       }
void defect::showinfo(){
      cout << defectno << " " << description <<" " << " " << Modulename << " " << functionalarea << " " <<  date << Type << endl;
      }
       
