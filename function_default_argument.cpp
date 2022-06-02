#include<iostream>
#include<string>
using namespace std;
void myfunc(string countries="Finland"){
    cout << "I live in " << countries << endl;
}
int main(){
    myfunc("India");
    myfunc("Latvia");
    myfunc(); // Default parameter comes automatically
    myfunc("USA");
    myfunc("Japan");

return 0;
}