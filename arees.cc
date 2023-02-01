#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  double pi = atan(1)*4;
  cout.setf(ios::fixed);
  cout.precision(6);
  for (int i = 0; i < n; ++i){
    string tipus;
    cin >> tipus;
    if (tipus == "rectangle"){
      double altura, amplada;
      cin >> altura >> amplada;
      cout << altura*amplada << endl;
    } else if (tipus == "cercle"){
      double radi;
      cin >> radi;
      cout << pi*radi*radi << endl;
    }
  }
}
