#include<iostream>
#include<string>
using namespace std;
void myfunc(string name,int age){
    cout << "My name is " << name << " and i am " << age << " years old.\n";
}


int main(){
    myfunc("Anish",19);
    myfunc("Aanya",14);
    myfunc("Manju",56);
    myfunc("Sandeep",50);

return 0;
}