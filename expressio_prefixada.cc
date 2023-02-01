#include <iostream>
using namespace std;

int operacio(char simbol){
  if (int(simbol) - int('0') <= 9){
    return int(simbol) - int('0');
  } else{
    char simbol2;
    cin >> simbol2;
    int valor1 = operacio(simbol2);
    cin >> simbol2;
    int valor2 = operacio(simbol2);
    if (simbol == '+') return valor1 + valor2;
    else if (simbol == '*') return valor1*valor2;
    else return valor1 - valor2;
  }
}

int main(){
  char simbol;
  cout << operacio(simbol) << endl;
}
