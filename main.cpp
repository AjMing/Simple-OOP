#include <iostream>
using namespace std;
#include "student.h"

int main(){
		student s("Joe",6381111,20) ,s2("Ben",6382222);
    student s3("Thanakit");
	//	s.name="Joe" ; 
      
 		
    s.print_name();
  
    s2.print_name();
    
    cout<<" The older person is ... "<<endl; 
    s.get_age()>s2.get_age() ? s.print_name() :s2.print_name();

    
    return 0;
}