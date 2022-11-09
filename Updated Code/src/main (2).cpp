#include <iostream>
#include "Programmer.h"
#include "defect.h"
#include "Programmerread.h"
#include "defectread.h"
#include <cstring>
using namespace std;
int main(int argc,char *argv[]){
    Defectread dr;
    dr.readfileinfo(argv[1]);
    TestProgrammer tr;
    tr.readfileinfo(argv[2]);
    for(auto d:dr.g){
	    
    for(auto h :tr.Pro){
	    if(strcmp(d.getfunctionalarea()==h.getexpertise())==0){
			    d.showinfo();
			    h.displaydetails();
			    }}}
  /*  for(auto d:dr.g){
	    for(auto p:tr.Pro){
		    if(d.getfunctionalarea()==p.getexpertise()){
			    d.showinfo();
			    p.displaydetails();*/
			    
    return 0;}
 
