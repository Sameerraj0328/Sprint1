#include <iostream>

#include <fstream>
#include <algorithm>
#include <string>
#include <sstream>
#include <array>
#include "Programmer.h"
#include "Programmerread.h"
using namespace std;
TestProgrammer::TestProgrammer(){}
void TestProgrammer::readfileinfo(string filename){
       ifstream ifile;
       ifile.open(filename);
       string temp;
       int i = 0;
      while(getline(ifile,temp)){
	   stringstream gg(temp);
	   string Empid;
           
           string name;
           string businessunit;
           string manageid;
	   
           string areaofexpertise;
           string designation;
	   
           int count=0;

          if(getline(gg,Empid,':')){
                
                count++;}
	    
	    if(getline(gg,name,':')){
                count++;}
            if(getline(gg,businessunit,':')){
               count++;}
            if(getline(gg,manageid,':')){
               count++;}
            if(getline(gg,areaofexpertise,':')){
                count++;}
            if(getline(gg,designation,':')){
                count++;}
	   
             Pro[i] = Programmer(Empid,name,businessunit,manageid,areaofexpertise,designation);
              i++;}}
              

		   

              
            
               
               
               
            
