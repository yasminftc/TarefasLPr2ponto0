using System;
class Program {
  public static void Main (string[] args) {
    int somaDigitos = 0;
    
    Console.WriteLine("Digite um número: ");
    int numDIGITADO = int.Parse(Console.ReadLine());
    numDIGITADO *= numDIGITADO;

    foreach (char digito in numDIGITADO.ToString()) { 
    if (char.IsDigit(digito)) { 
    somaDigitos += int.Parse(digito.ToString());
      }
    }
    Console.WriteLine($"A soma dos dígitos é: {somaDigitos}"); 
    }
}