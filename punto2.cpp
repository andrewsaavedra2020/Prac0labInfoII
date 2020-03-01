#include<iostream>

using namespace std;

int testFunction(int num1, int num2)
{
	int suma_pre = 0;
	
	while(num2 >= 0)
	{
	    int cuenta = 0;
	    
	    while(cuenta <= num2)
	    {
	        suma_pre += num1;
	        ++cuenta;
	    }
	    
	    --num2;
	}
	
	return suma_pre;
}

int main()
{
    int resultado = testFunction(3, 10);
    std::cout << "Resultado: " << resultado << std::endl;
}
//La línea de código que se ejecuta el mayor número de veces es la línea numero 13 
//la cual contiene la siguiente sentencia condicional while(cuenta <= num2). 
//Dentro del programa esta es la condición que más veces se evalúa dentro del ciclo while anidado.
