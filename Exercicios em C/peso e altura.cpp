/*
	Name: 
	Copyright: 
	Author: 
	Date: 17/03/21 10:05
	Description: 
*/
#include<stdlib.h>>
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL, "portuguese"); 

float peso, altura, imc;

printf("digite seu peso abaixo:\n");
scanf("%f", &peso);

printf("digite sua altura abaixo:\n");
scanf("%f", &altura);

imc= peso / (altura * altura);

printf("IMC = %.2f\n", imc);

if(imc<18.5){

		printf("Você está abaixo do peso \n");

		

	}

  else if(imc>=18.5 && imc<24.9){

  	printf("você está com o peso normal \n");

  	

	}

	else if(imc>=25 && imc<29.9){

		printf("você está com sobrepeso\n");

		

	}

	else if(imc>=30 && imc <34.9){

		printf("você está com obesidade de grau I\n");

	}

  else if(imc>=35 && imc<39.9){

  	printf("você está com obesidade de grau II\n");

	}

  else if(imc>=40){

  	printf("você está com obesidade mórbida grau III");

	}
	system("pause");
}







