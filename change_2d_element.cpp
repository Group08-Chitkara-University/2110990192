#include<iostream>
using namespace std;
int main(){
    int num[2][4]={
        {1,2,3,4},
        {5,6,7,8}
    };
    num[1][2]=10;
    cout << num[1][2];

return 0;    
}