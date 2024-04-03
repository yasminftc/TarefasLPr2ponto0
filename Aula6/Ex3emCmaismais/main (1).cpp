#include <iostream>
#include <iomanip> 
#include <random> 
using namespace std;
int main() {
  int soma = 0;
  for(int num = 50; num <= 500; num++){
    if(num % 3 == 0){
      if(num % 2 != 0){
        soma = soma + num;
      }
    }
  }
  cout << "A soma dos números divisíveis por 3 de 50 a 500 é: " << soma;
}