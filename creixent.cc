#include <iostream>
using namespace std;

bool es_creixent(int n){
  // Cas base
  if (n <= 9) return true;
  // Cas recursiu
  else{
    if (n % 10 >= int((n/10)%10)){
      return es_creixent(n/10);
    }
    else {
      return false;
    }
  }
}

int main(){
  int n;
  cin >> n;
  cout << es_creixent(n) << endl;
}
