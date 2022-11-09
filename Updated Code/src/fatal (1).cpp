#include <iostream>
#include <Defect.h>
usng namespace std;
class fatal:public Defect{
      private:
         string affectedarea;
         string systemdowntime;
      public:
          fatal(string,string);
          }
    
