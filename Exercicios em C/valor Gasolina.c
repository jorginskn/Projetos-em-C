/*
	Name:
	Copyright:  
	Author: 
	Date: 11/03/21 19:37
	Description: 
*/

#include <stdio.h>
#include <math.h>


int main()
{


float Imc;
float altura;
double totalpeso;

printf("\n solicitar o peso da pessoa \n");
scanf("%f", &altura);

printf("calcular a altura");
scanf("%f", &Imc);
Imc = totalpeso / (altura * altura );
printf("Aumento de peso %f\n", totalpeso);

totalpeso = altura + totalpeso;
printf("total peso %f", totalpeso);



system("pause");
return 0;
	
}
