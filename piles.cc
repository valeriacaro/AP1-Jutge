#include <iostream>
#include <stack>
using namespace std;

int main(){
  string s;
  stack<char> pila;
  while (cin >> s){
    for (char c : s) pila.push(c);
    while (not pila.empty()){
      cout << pila.top();
      pila.pop();
    }
    cout << endl;
  }
}
