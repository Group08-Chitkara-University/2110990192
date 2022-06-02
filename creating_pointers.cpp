  #include<iostream>
  using namespace std;
  int main(){
      int number=19;
      int *age=&number; //pointer(*) stores memory address(&)

      cout << number << endl; //output value of number
      cout << &number << endl; //output memory value of number
      cout << age << endl; // output memory address of number using pointer value

  return 0;
  }