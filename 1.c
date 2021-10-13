/**
 * Algoritmo BaggageControl
 * Software para sensor que contabiliza el peso de múltiples equipajes y determina el exceso de peso.
 */
#include <stdio.h>

int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  float currentBaggageWeight;
  char julianCipagauta[] = "Julián Cipagauta";
  /**
   * Bloque de variables de salida
   */
  float averageWeight, weightExcess = 0.0;
  int baggages = 1, overweightBaggages = 0;
  /**
   * Bloque de Instrucciones
   */
  printf("Buenos días, soy un software para el control y manejo de equipaje.\n");
  printf("Mi función es sencilla, recibiré el peso de todos los equipajes y retornaré \n");
  printf("la cantidad de equipajes, el peso promedio, la cantidad de equipajes con \n");
  printf("sobrepeso y el exceso de peso acumulado.\n\nEntendiendo que, el peso máximo aceptable ");
  printf("por equipaje es de 23kg; y que,\ncada peso ingresado está medido en kg. Adicional, ");
  printf("se redondeará a dos decimales.\n\n");
  printf("Luego de esta introducción, empecemos: \n\n");
  do
  {
    printf("¿Cuánto pesa el equipaje %d?\n", baggages);
    printf("En caso de terminar, por favor introducir 0.\n");

    scanf("%f", &currentBaggageWeight);

    // Check if is not exit code
    if (currentBaggageWeight != 0)
    {
      baggages++;
      averageWeight += currentBaggageWeight;
      // Check if there's any overweight
      if (currentBaggageWeight > 23)
      {
        weightExcess += (currentBaggageWeight - 23);
        overweightBaggages++;
      }
    }

  } while (currentBaggageWeight != 0);

  baggages--; //Fix exit code

  averageWeight = averageWeight / baggages;

  printf("Resultados: \n\n-----------------------\n");
  printf("-> Cantidad de equipajes: \n");
  printf("%d Equipajes.\n\n", baggages);
  printf("-> Peso medio por equipaje: \n");
  printf("%.2f kg.\n\n", averageWeight);
  printf("-> Cantidad de equipajes con sobrepeso: \n");
  printf("%d Equipajes.\n\n", overweightBaggages);
  printf("-> Exceso de peso: \n");
  printf("%.2f kg.", weightExcess);
  printf("\n-----------------------\n");
  printf("Buen día. \nDesarrollado por: %s\n\n", julianCipagauta);
  /**
   * Fin
   */
  return 0;
}