using System;
class Program {
  public static void Main (string[] args) {
    double horas, dias, semanas, meses;
    int opcao = 1;
    
    do {
      Console.WriteLine($"\nDigite quantas horas treinará por dia para calcularmos quanto tempo você levará para seu treinamento Jedi ser concluído: ");
      
    horas = double.Parse(Console.ReadLine());
    
    dias = 1000/horas;
    semanas = dias/5;
    meses = semanas/4.5;

    Console.WriteLine($"\nLevarão {dias:f0} dias, {semanas:f1} semanas e {meses:f1} meses para você concluir seu treinamento Jedi.\n");
    Console.WriteLine($"Deseja calcular novamente? \n(1) Sim \n(2) Não");
    opcao = int.Parse(Console.ReadLine());
      } while (opcao == 1);
    Console.WriteLine($"\nFIM\n");
    }
}