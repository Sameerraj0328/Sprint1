#include <iostream>
#include <array>
#include <vector>
#include <fstream>
#include "defectread.h"

#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
 Defectread::Defectread(){}
void Defectread::readfileinfo(string inpFileName) 
        {
              int i=0;
              ifstream input;
              ofstream output;
               output.open("invalidfile.txt");
              input.open(inpFileName);
              
              string line;
            
              while(getline(input,line))
              {       
                     stringstream ss(line);
                     string defectno;
                     int dNo;
                     string description;
                     string modulename;
                     string functionalarea;
                     string date;
                     string type;
                     string c;
                     string d;
                     int count = 0;
                     
                     if(getline(ss,defectno,',')){
                        dNo=stoi(defectno);
                        count++;}
                     if(getline(ss,description,','))
                        count++;
                     if(getline(ss,modulename,','))
                        count++;
                     if(getline(ss,functionalarea,','))
                        count++;
                     if(getline(ss,date,','))
                        count++;
                     if(getline(ss,type,','))
                         count++;
                     if(getline(ss,c,','))
                         count++;
                     if(getline(ss,d,','))
                         count++;
                         
                     if ((count == 8) && (dNo!=0 && description!="" && modulename!="" && functionalarea!="" && date!="" && c!="" && d!=""))
                     {
                             g[i] = defect(dNo,description,modulename,functionalarea,date,type);
                             i = i+1;
                     }
                     else
                     {
                             output<<line<<endl;
                             
                     }
             } 
            


        }
 /*void Defectread::displayy(){
         for(auto d:g){
               d.showinfo();
               }
*/
