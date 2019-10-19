#include<bits/stdc++.h>
using namespace std;

class Student{
private:
string name;int rol;
public:
//Student()-->Constructure of Student class
Student(string nm,int rl){
name=nm;rol=rl;
}
int reg(){
return rol+1602000;
}
void cngrol(int newrl){
rol=newrl;
}
void prnt(){
cout<<" Name : "<<name<<" Rol : "<<rol<<" Reg : "<<reg()<<endl;
}
};

int main(){
Student s("Rakib",66);//s:->object of Student class.. Constructure is automatically call while the object initialize.
s.prnt();
s.cngrol(67);
s.prnt();
}

