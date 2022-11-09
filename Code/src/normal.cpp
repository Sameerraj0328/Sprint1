#include <iostream>
#include <Defect.h>
using namespace std;
class Normal:public Defect{
       public:
          Normal(char a,string b){
             customized = a;
             approvedby = b;
             }
             
       private:
           char customized;
           string approvedby;
 }
