#ifndef DEFECTREAD_H
#define DEFECTREAD_H

#include <iostream>
#include "defect.h"
#include <array>

using namespace std;

class Defectread{
	    public:
	     array <defect,100> g;
        
           Defectread();
           void readfileinfo(string inpFileName);
           //void displayy();
     
        };
#endif
