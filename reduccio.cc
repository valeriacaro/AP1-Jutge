#include <iostream>
using namespace std;

int sum_of_digits(int x){
  int sum = 0;
  while (x > 9){
    sum += x%10;
    x /= 10;
  }
  sum += x;
  return sum;
}

int reduction_of_digits(int x){
  // Cas base: tenir només un digit
  if (x < 10) return x;
  else{
    return reduction_of_digits(sum_of_digits(x));
  }
}

int main(){
  int x;
  cin >> x;
  cout << reduction_of_digits(x) << endl;
}
