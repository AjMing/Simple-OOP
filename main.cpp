#include <iostream>
using namespace std;
#include "student.h"

int main(){
		student s,s2;

	//	s.name="Joe" ; 
      
 		s.set_name("Joe");  //Joe 
    s.set_id(6380928);
    s.set_age(20);

    s2.set_name("Ben");
		s2.set_age(28);
    s.set_id(6380111);
    s.print_name();
  
    s2.print_name();
    
    cout<<" The older person is ... "<<endl; 
    s.get_age()>s2.get_age() ? s.print_name() :s2.print_name();

    
    return 0;
}