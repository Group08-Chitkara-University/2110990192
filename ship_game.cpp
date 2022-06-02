#include<iostream>
using namespace std;
int main(){
    bool ships[4][4]={
        {0,1,0,0},
        {0,0,0,1},
        {0,0,0,0},
        {0,0,1,0}
    };

    int rows,columns;

    int hits=0;
    int turns=0;
    while (hits<3)
    {
        cout << "Selecting coordinates" << endl;
        cout << "Enter a row number between 0 and 4 (0 included): ";
        cin >> rows;
        cout << "Enter a column number between 0 and 4 (0 included): ";
        cin >> columns;


        if (ships[rows][columns])
        {
            ships[rows][columns]=0;

            hits++;
             
            cout << "Voila! you hit a ship. "<<(3-hits) << " ships left.\n\n"; 
        }else
        {
            cout << "Miss\n\n";
        }
        
        turns++;
                
    }
    cout << "VICTORY\n";
    cout << "You hit 3 ships in "<<turns<<" turns.";   
    

return 0;
}