#ifndef DEFECT_H
#define DEFECT_H
#include <iostream>
using namespace std;
class defect{
      public:
	      defect();
         defect(int gh,string ij ,string kl,string mn,string op,string qr);
         string  getfunctionalarea();
         string gettype();
         void showinfo();
     private:
         int defectno;
         string description;
         string Modulename;
         string functionalarea;
         string date;
        
         string Type;
         };
         
#endif
