#ifndef DEFECT_H
#define DEFECT_H
#include <iostream>
using namespace std;
class defect{
      public:
	      defect();
         defect(string gh,string ij ,string kl,string mn,string op,string qr);
         string  getfunctionalarea();
         string gettype();
         void showinfo();
     private:
         string defectno;
         string description;
         string Modulename;
         string functionalarea;
         string date;
        
         string Type;
         };
         
#endif
