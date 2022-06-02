#include<iostream>
using namespace std;
int main(){
    int num[2][3][4]={
        {
            {1,2,3,4},
            {5,6,7,8},
            {20,21,22,23}
        },
        {
            {9,10,11,12},
            {13,14,15,16},
            {45,46,47,48}
        },
    };
    for (int i = 0; i < 2; i++)  
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << num[i][j][k] << endl;
            }
            
        }
        
    }
    
    

return 0;
}