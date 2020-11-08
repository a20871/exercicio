/*****************************************************************//**
 * \file   retangulo.c
 * \brief  programa para c�lculo das dimens�es de um ret�ngulo ou quadrado. Exerc�cio 3 da folha de exerc�cios II do word.
 * 
 * \author S�rgio
 * \date   November 2020
 *********************************************************************/

#include<stdio.h>
#include<locale.h>

int main() {

	//Caracteres especiais portugueses
	setlocale(LC_ALL, "");

	//var�veis de altura e base
	float altura;
	float base;
	

	printf("Insira o valor da base em cm: \n");
	scanf("%f", &base);
	printf("Insira o valor da altura em cm: \n");
	scanf("%f", &altura);

	//var�veis do c�culo da �rea e per�metro
	float area = (base * altura);
	float perimetro = ((base * 2) + (altura * 2));

	/// Print da solu��o com 2 casas decimais(.2), mesmo que n�o haja casas decimais(#)
	printf("O valor da �rea � %#.2f cm2\n", area);
	printf("O valor da �rea � %#.2f cm2\n", perimetro);




}