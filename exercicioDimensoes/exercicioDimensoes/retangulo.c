/*****************************************************************//**
 * \file   retangulo.c
 * \brief  programa para cálculo das dimensões de um retângulo ou quadrado. Exercício 3 da folha de exercícios II do word.
 * 
 * \author Sérgio
 * \date   November 2020
 *********************************************************************/

#include<stdio.h>
#include<locale.h>

int main() {

	//Caracteres especiais portugueses
	setlocale(LC_ALL, "");

	//varáveis de altura e base
	float altura;
	float base;
	

	printf("Insira o valor da base em cm: \n");
	scanf("%f", &base);
	printf("Insira o valor da altura em cm: \n");
	scanf("%f", &altura);

	//varáveis do cáculo da área e perímetro
	float area = (base * altura);
	float perimetro = ((base * 2) + (altura * 2));

	/// Print da solução com 2 casas decimais(.2), mesmo que não haja casas decimais(#)
	printf("O valor da área é %#.2f cm2\n", area);
	printf("O valor da área é %#.2f cm2\n", perimetro);
	///Adicionado ao GitHub




}
