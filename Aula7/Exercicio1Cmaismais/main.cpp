#include <iostream>
#include <iomanip>  
using namespace std;

int inverter(int num){
int invertido = 0;
while (num != 0) {
    invertido = invertido * 10 + num % 10;
    num = num / 10;
  }
  return invertido;
}

int main() {
  int num;
  cout << "Digite um número " << endl;
  cin >> num;
  int invertido = inverter(num);
  
  cout << "O números invertido é: " << invertido << endl;
}