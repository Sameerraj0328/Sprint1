#include <iostream>
#include <Programmer.h>
#include <fstream>;
using namespace std;
void TestProgrammer::readfileinfo(string filename){
       ifstream ifile;
       ifile.open(filename);
       string temp;
       int i=0;
       whille(getline(ifile,temp){
            stringstream gg(temp);
            char Empid[20];
            string name;
            string businessunit;
            char manageid[20];
         string areaofexpertise;
        string designation
            if(getline(gg,Empid){
                int Eid=atoi(Empid);
                cout++}
            if(getline(gg,name)
                count++;
            if(getline(gg,businessunit)
               count++
            if(getline(gg,manageid){
               int Mid=atoi(manageid);
               count++;}
            if(getline(gg,areaofexpertise)
                count++;
            if(getline(gg,designation)
                count++;
             Pro[i] = Programmer(Eid,name,businessunit,Mid,areaofexpertise,designation);
              i++;
              }
void TestProgrammer::display(){
             for(auto p:Pro){
                 p.display();
                 }
              
            
               
               
               
            
