#include <iostream>
#include <iomanip>  
using namespace std;
int repetir = true;

int calcularmediadenumerospares(){
  float media;
  int num;
  int quantnum;
  int contador = 0;
  float total = 0;
  int quantnumpar = 0;

  cout << "digite quantos numeros serão digitados" << endl;
  cin >> quantnum;

  while (contador < quantnum) {
      cout << "digite um numero" << endl;
      cin >> num;

      if (num % 2 == 0) {
          total = total + num;
          quantnumpar++;
      }
      contador++;
  }
  cout << endl;
  media = total / quantnumpar;

  cout << "a media é: " << media << endl;
   cout << endl;

  return 0;
}

int somadennumdivididospor3(){
  int soma = 0;
  cout << endl;
  for(int num = 50; num <= 500; num++){
    if(num % 3 == 0){
      if(num % 2 != 0){
        soma = soma + num;
      }
    }
  }
  cout << "A soma dos números divisíveis por 3 de 50 a 500 é: " << soma << endl;
   cout << endl;
  return 0;
}

int somadigitos(){
      int somaDigitos = 0;
      cout << endl;

      cout << "Digite um número: ";
      int num;
      cin >> num;
      num *= num;

      string numString = to_string(num);
      for (char digito : numString) {
          if (isdigit(digito)) {
              somaDigitos += digito - '0';
          }
      }

      cout << "A soma dos dígitos é: " << somaDigitos << endl;
   cout << endl;
  return 0;
}

int main() {
  while(repetir == true){
  int escolha;
  cout << "Digite qual operação deseja fazer:" << endl;
  cout << "1 - para calcular a media de uma quantia de números pares;" << endl;
 cout << "2 - para somar uma quantia de números divisíveis por 3 de 50 a 500;" << endl;
 cout << "3 - para somar os dígitos do quadrado de um número;" << endl;
 cout << "4 - para finalizar." << endl;
    
  cin >> escolha; 
  
    if(escolha==1){
      calcularmediadenumerospares();
    }
    else if(escolha==2){
      somadennumdivididospor3();
    }
    else if(escolha==3){
      somadigitos();
    }
    else{
      repetir = false;
    }
    
  }
}