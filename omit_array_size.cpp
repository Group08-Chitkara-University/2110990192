#include<iostream>
using namespace std;
int main(){
    string cars[5];
    cars[0]="BMW";
    cars[1]="Mercedes";
    cars[2]="Ford";
    cars[3]="Tesla";
    cars[4]="Volvo";
    for (int i = 0; i < 5; i++)
    {
        cout << i << "." << cars[i] << endl;
    }
    
return 0;
}