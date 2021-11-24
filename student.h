class student{
   private: string name;
            long id;
            int age;
   public: 
         void set_name(string n){name =n;}
		     void print_name();
         void set_id(long);
         void set_age(int); // you can set your own condition 
         int get_age(); //return age
};
void student::set_age(int n){
    if(n>12 ) age=n;
    else { cout<<"You are too young!!!"<<endl; }
}

int student::get_age(){
       return age;
}

void student::set_id(long i){ 
   if(i>9999999 || i<2800000) 
      cout<<"Invalid id, no id set"<<endl;
   else id=i;

}

/*void student:set_name(string n){ 
  name=n;
}*/


void student::print_name(){
 		cout<<"Name:"<<name<<endl;
    cout<<"ID:"<<id<<endl<<endl;
}
