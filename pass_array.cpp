#include<iostream>
using namespace std;

void myfunc(int guesses[5]){
    for (int i = 0; i < 5; i++)
    {
        cout << guesses[i] << endl;
    }
}

int main(){
    int guesses[5]={1,2,3,4,5};
    myfunc(guesses);
return 0;
}