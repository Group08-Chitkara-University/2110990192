#include<iostream>
using namespace std;

int myfunc(int x,int y){
    return x+y;
}
double myfunc(double x,double y){
    return x+y;
}

int main(){
    cout<<myfunc(2,3)<<endl;
    cout<<myfunc(2.4,5.8);

return 0;
}