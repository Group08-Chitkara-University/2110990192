#include<iostream>
using namespace std;
int main(){
    string cars[5]={"BMW","Mercedes","Lotus"};
    cars[3]="Chevrolet";
    cars[4]="Tesla";
    for (int i = 0; i < 5; i++)
    {
        cout << i << "." << cars[i] << endl;
    }

return 0;
}