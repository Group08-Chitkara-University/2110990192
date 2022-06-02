#include<iostream>
#include<string>
using namespace std;
int main(){
    string food="pizza";
    string *meal=&food;

    cout << food << endl;
    cout << &food << endl;
    cout << meal << endl;     //Reference: Output the memory address of food with the pointer
    cout << *meal << endl;   //Dereference: Output the value of food with the pointer
    cout << &meal << endl;




return 0;
}