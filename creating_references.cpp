#include<iostream>
#include<string>
using namespace std;
int main(){
    string food="burger";
    string &meal=food;

    cout << "food is " << food << endl;
    cout << "meal is " << meal << endl;


return 0;
}