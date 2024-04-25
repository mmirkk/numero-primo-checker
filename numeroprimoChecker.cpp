#include<iostream>

using namespace std;

int main(){

    int num = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

  if(num == 2){
    cout<<"El numero 2 es primo" << endl;
  } else if(num % 2 == 0) {
    cout<<"El numero " << num << " NO es primo" << endl;
  } else {
    cout << "El numero " << num << " es primo" << endl;
  }

return 0;
}
