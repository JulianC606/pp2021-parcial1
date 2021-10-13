

**UNIVERSIDAD TECNOLÓGICA DE PANAMÁ**

**FACULTAD DE INGENIERÍA DE SISTEMAS**

**COMPUTACIONALES**

**PRINCIPIOS DE PROGRAMACIÓN**

**PARCIAL 1**

**PRESENTADO POR:**

**JULIÁN CIPAGAUTA E-8-139960**

**PRESENTADO A:**

**MG. KEXY RODRÍGUEZ**

**13 DE OCTUBRE DE 2021**

**CIUDAD DE PANAMÁ, PANAMÁ**

0





Análisis y Diseño - Problema 1 (Julián Cipagauta)

**Enunciado**

Se está probando un sensor para registrar el peso de equipajes de los viajeros en un aeropuerto. Se pide un

prototipo para registrar los pesos en kilogramos de los equipajes. Se desea saber la cantidad de equipaje que

son pesados, el peso total de todos los equipajes, el promedio de todos los pesos, la cantidad de equipaje que

sobrepasa los 23 kilogramos y la cantidad total en kilogramos que sobrepasa los 23 kilogramos.

• El registro de pesos se puede dar en decimal.

• No se sabe la cantidad de equipajes que se va a registrar en el sistema.

• El algoritmo dejará de solicitar datos hasta que se introduzca cero (0).

**Entradas**

**Proceso**

**Salida**

Número indefinido de peso de

equipaje (Decimales)

Contar los equipajes,

promediar el peso por

equipaje, determinar la

Cant. Equipajes

Prom. Equipajes

Cant. Equipajes con sobrepeso

cantidad de equipaje con Sobrepeso

sobrepeso y acumular el

exceso de peso.

**Algoritmo**

Algoritmo BaggageControl

/\*\*

\* Software para sensor que contabiliza el peso de múltiples equipajes y determina el exceso de peso.

\*/

{

/\*\*

\* Bloque de variables de entrada

\*/

flotante currentBaggageWeight;

cadena julianCipagauta = "Julián Cipagauta";

/\*\*

\* Bloque de variables de salida

\*/

flotante averageWeight, weightExcess = 0.0;

entero baggages = 1, overweightBaggages = 0;

/\*\*

\* Bloque de Instrucciones

\*/

imprimir("Buenos días, soy un software para el control y manejo de equipaje.\n");

imprimir("Mi función es sencilla, recibiré el peso de todos los equipajes y retornaré \n");

imprimir("la cantidad de equipajes, el peso promedio, la cantidad de equipajes con \n");

imprimir("sobrepeso y el exceso de peso acumulado.\n\nEntendiendo que, el peso máximo aceptable ");

imprimir("por equipaje es de 23kg; y que,\ncada peso ingresado está medido en kg. Adicional, ");

imprimir("se redondeará a dos decimales.\n\n");

imprimir("Luego de esta introducción, empecemos: \n\n");

1





hacer {

imprimir("¿Cuánto pesa el equipaje ", baggages, "?\n", );

imprimir("En caso de terminar, por favor introducir 0.\n");

leer(currentBaggageWeight);

// Check if is not exit code

si (currentBaggageWeight != 0){

baggages = baggages + 1;

averageWeight = averageWeight + currentBaggageWeight;

// Check if there’s any overweight

si (currentBaggageWeight > 23){

weightExcess = weightExcess + (currentBaggageWeight - 23);

overweightBaggages = overweightBaggages + 1;

}

}

} mientras (currentBaggageWeight != 0);

baggages = baggages - 1; //Fix exit count

averageWeight = averageWeight / baggages;

imprimir("Resultados: \n\n-----------------------\n");

imprimir("-> Cantidad de equipajes: \n");

imprimir(baggages," Equipajes.\n\n");

imprimir("-> Peso medio por equipaje: \n");

imprimir(averageWeight, " kg.\n\n");

imprimir("-> Cantidad de equipajes con sobrepeso: \n");

imprimir(overweightBaggages, " Equipajes.\n\n");

imprimir("-> Exceso de peso: \n");

imprimir(weightExcess, " kg.");

imprimir("\n-----------------------\n");

imprimir("Buen día. \nDesarrollado por: ", julianCipagauta, "\n\n");

/\*\*

\* Fin

\*/

}

**Prueba de escritorio**

Los datos de prueba a considerar para la prueba de escritorio serán:

Se introducen los siguientes valores como peso de equipaje: 15.95, 28.5, 23, 21.23, 25.36, 0.

2





Variables en memoria

**julianCipagauta**

**currentBaggageWeight baggages**

**averageWeight**

**overweightBaggages weightExcess**

~~1~~

2

~~3~~

~~4~~

~~5~~

~~0~~

15.95

~~28.5~~

~~23~~

~~21.23~~

~~25.36~~

15.95

~~44.45~~

~~67.45~~

~~88.68~~

0.0

~~5.5~~

~~1~~

**“Julián**

**Cipagauta”**

~~6~~

**5**

~~114.04~~

**22**.**81**

**0**

**2**

**7.86**

Pantalla

Buenos días, soy un software para el control y manejo de equipaje.

Mi función es sencilla, recibiré el peso de todos los equipajes y retornaré

la cantidad de equipajes, el peso promedio, la cantidad de equipajes con

sobrepeso y el exceso de peso acumulado.

Entendiendo que, el peso máximo aceptable por equipaje es de 23kg; y que,

cada peso ingresado está medido en kg. Adicional, se redondeará a dos decimales.

Luego de esta introducción, empecemos:

¿Cuánto pesa el equipaje 1?

En caso de terminar, por favor introducir 0.

15.95

¿Cuánto pesa el equipaje 2?

En caso de terminar, por favor introducir 0.

28.5

¿Cuánto pesa el equipaje 3?

En caso de terminar, por favor introducir 0.

23

¿Cuánto pesa el equipaje 4?

En caso de terminar, por favor introducir 0.

21.23

¿Cuánto pesa el equipaje 5?

En caso de terminar, por favor introducir 0.

25.36

¿Cuánto pesa el equipaje 6?

En caso de terminar, por favor introducir 0.

0

Resultados:

\-----------------------

-> Cantidad de equipajes:

5 Equipajes.

-> Peso medio por equipaje:

3





22.81 kg.

-> Cantidad de equipajes con sobrepeso:

2 Equipajes.

-> Exceso de peso:

7.86 kg.

\-----------------------

Buen día.

Desarrollado por: Julián Cipagauta

4
