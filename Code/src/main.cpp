#include <iostream>

#include <defectread.h>
using namespace std;
int main(){
     Defectread f;
     f.readfileinfo("defects.txt");
     
     for(auto d:f.g){
               d.showinfo();
               }
     
	
        
     return 0;
}
