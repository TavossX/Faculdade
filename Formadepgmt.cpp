#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL,"");
	int pagamento;
	float valor, desconto, novo_valor;
	
	printf("Bem-vindo ao SysPagFatec \n");
	printf("Qual valor a pagar? \n");
	scanf("%f", &valor);
	printf("Selecione a Forma de Pagamento \n");
	printf("1 - Dinheiro \n");
	printf("2 - PIX \n");
	printf("3 - D�bito \n");
	printf("4 - Cr�dito \n");
	scanf("%d", &pagamento);
	
	switch(pagamento)
	{
		case 1:
			printf("Forma escolhida � Dinheiro \n");
       		desconto = (valor * 0.15);
       		break;

		case 2:
			printf("Forma escolhida � Pix \n");
       		desconto = (valor * 0.10);
       		break;
		case 3:
			printf("Forma escolhida � D�bito \n");
       		desconto = (valor * 0.5);
       		break;

		case 4:
			printf("Forma escolhida � Cr�dito \n");
       		desconto = (valor * 0.0);
       		break;

		default:
			printf("Op��o inv�lida \n");
       		break;
       		return 0;
	}
	
	novo_valor = valor - desconto;
	printf("O desconto foi de R$%.2f \n", desconto);
	printf("O valor total a ser pago ser� R$%.2f \n", novo_valor);
}
