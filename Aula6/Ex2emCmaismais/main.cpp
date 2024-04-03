#include <iostream>
#include <iomanip> 
#include <random> 
using namespace std;
int main() {
  int chute = 0;
  
  random_device numAleatorio ;
  uniform_int_distribution<> distribuicao(1,100);
  int valorInteiro = distribuicao(numAleatorio);

  while(chute != valorInteiro){
    cout << "Chute um número: ";
    cin >> chute;
    if(chute > valorInteiro){
      cout << "O número é menor!" << endl;
    }
    else if(chute < valorInteiro){
      cout << "O número é maior!" << endl;
    }
    else{
      cout << "Você acertou!" << endl;
    }
  }
  return 0;
}