#include <iostream>
#include <string>
using namespace std;
int main(){
    struct 
    {
        int num;
        string name;
    }myStructure;

    myStructure.num=4;
    myStructure.name="Anish";

    cout << myStructure.name << endl;
    cout << myStructure.num;
    

return 0;
}