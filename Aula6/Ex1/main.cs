using System;

class Program {
  public static void Main (string[] args) {
      int Repeticao, i = 0 ;
      float soma = 0;
    
      Console.WriteLine("Digite a quantidade de números que serão digitados");
      Repeticao = int.Parse(Console.ReadLine());
      int mult = Repeticao;
    
    Console.WriteLine("Digite os números desejados:");
      while(i < Repeticao){
        int num = int.Parse(Console.ReadLine());
        if (num % 2 == 0){
          soma = soma + num;
          i ++;
        }
        else{
          mult --;
          i ++;
        }
      }
    Console.WriteLine("A média aritmética dos numeros pares digitadoe é: "+ soma/mult);  
  }
}