#include <stdio.h>

struct precoprodutos{
	float precopao;
	float precosalg;
	float precodoce;
	float precosortido;
	float precopaoqueijo;		
};		
struct precoprodutos prod[3];	
	

int main() {
	int i, j, menuchoice;
	float paonormal, biscdoce, biscsalgado, biscsortido, paoqueijo;
	int count0, count1, count2 = 0;

	// SETAR PRECOS NOS PRODUTOS NAS LOJAS
	for (i=0; i<3; i++) {
		printf("----------------------------\n");
		printf("          LOJA %d           \n",i);
		printf("----------------------------\n");
		
		printf("Informe o preco do PAO NORMAL 50g : ");
		fflush(stdin);
		scanf("%f", &paonormal);
		prod[i].precopao = paonormal;	
		
		printf("Informe o preco do BISCOITO SALGADO 250g : ");
		fflush(stdin);
		scanf("%f", &biscsalgado);
		prod[i].precosalg = biscsalgado;
		
		printf("Informe o preco do BISCOITO DOCE 250g : ");
		fflush(stdin);
		scanf("%f", &biscdoce);
		prod[i].precodoce = biscdoce;

		printf("Informe o preco do BISCOITO SORTIDO 250g : ");
		fflush(stdin);
		scanf("%f", &biscsortido);
		prod[i].precosortido = biscsortido;
		
		printf("Informe o preco do PAO DE QUEIJO 25g : ");
		fflush(stdin);
		scanf("%f", &paoqueijo);
		prod[i].precopaoqueijo = paoqueijo;
	}
	
	menu:
	printf("\nEscolha uma opcao:\n[1]PAO NORMAL\n[2]BISCOITO SALGADO\n[3]BISCOITO DOCE\n[4]BISCOITO SORTIDO\n[5]PAO DE QUEIJO\n[6]COMPARAR TODOS OS PRECOS\n[7]PARAR\n\n");
	scanf("%d",&menuchoice);
	fflush(stdin);
			
	switch (menuchoice) {
		
		// PAO NORMAL
		case 1:
			printf("PAO NORMAL\n");
			count0 = 0;
			count1 = 0;
			count2 = 0;
			fflush(stdin);
			for (i=0;i<3;i++) {
				if (prod[0].precopao < prod[i].precopao) {
					count0++;
				}
				if (prod[1].precopao < prod[i].precopao) {
					count1++;
				}
				if (prod[2].precopao < prod[i].precopao) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precopao);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precopao);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precopao);
			}
			fflush(stdin);
			goto menu;
		
		// BISCOITO SALGADO	
		case 2:
			printf("BISCOITO SALGADO\n");
			count0 = 0;
			count1 = 0;
			count2 = 0;
			fflush(stdin);
			for (i=0;i<3;i++) {
				if (prod[0].precosalg < prod[i].precosalg) {
					count0++;
				}
				if (prod[1].precosalg < prod[i].precosalg) {
					count1++;
				}
				if (prod[2].precosalg < prod[i].precosalg) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precosalg);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precosalg);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precosalg);
			}
			fflush(stdin);
			goto menu;
			
		//COMPARATIVO PRECO BISCOITO DOCE	
		case 3:
			printf("BISCOITO DOCE\n");
			count0 = 0;
			count1 = 0;
			count2 = 0;
			fflush(stdin);
			for (i=0;i<3;i++) {
				if (prod[0].precodoce < prod[i].precodoce) {
					count0++;
				}
				if (prod[1].precodoce < prod[i].precodoce) {
					count1++;
				}
				if (prod[2].precodoce < prod[i].precodoce) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precodoce);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precodoce);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precodoce);
			}
			fflush(stdin);
			goto menu;
		
		//COMPARATIVO PRECO SORTIDO	
		case 4:
			printf("BISCOITO SORTIDO\n");
			count0 = 0;
			count1 = 0;
			count2 = 0;
			fflush(stdin);
			for (i=0;i<3;i++) {
				if (prod[0].precosortido < prod[i].precosortido) {
					count0++;
				}
				if (prod[1].precosortido < prod[i].precosortido) {
					count1++;
				}
				if (prod[2].precosortido < prod[i].precosortido) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precosortido);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precosortido);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precosortido);
			}
			fflush(stdin);
			goto menu;
			
		//COMPARATIVO PRECO PAO DE QUEIJO	
		case 5:
			fflush(stdin);
			printf("PAO DE QUEIJO\n");
			count0 = 0;
			count1 = 0;
			count2 = 0;

			for (i=0;i<3;i++) {
				if (prod[0].precopaoqueijo < prod[i].precopaoqueijo) {
					count0++;
				}
				if (prod[1].precopaoqueijo < prod[i].precopaoqueijo) {
					count1++;
				}
				if (prod[2].precopaoqueijo < prod[i].precopaoqueijo) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precopaoqueijo);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precopaoqueijo);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precopaoqueijo);
			}
			fflush(stdin);
			goto menu;
			
			
			//COMPARATIVO ENTRE TODOS PRECOS
			case 6:	
			fflush(stdin);
			count0 = 0;
			count1 = 0;
			count2 = 0;
			printf("PRECO PAO\n");
			for (i=0;i<3;i++) {
				if (prod[0].precopao < prod[i].precopao) {
					count0++;
				}
				if (prod[1].precopao < prod[i].precopao) {
					count1++;
				}
				if (prod[2].precopao < prod[i].precopao) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precopao);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precopao);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precopao);
			}
			
			fflush(stdin);
			printf("BISCOITO SALGADO\n");
			count0 = 0;
			count1 = 0;
			count2 = 0;
			
			for (i=0;i<3;i++) {
				if (prod[0].precosalg < prod[i].precosalg) {
					count0++;
				}
				if (prod[1].precosalg < prod[i].precosalg) {
					count1++;
				}
				if (prod[2].precosalg < prod[i].precosalg) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precosalg);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precosalg);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precosalg);
			}
			
			fflush(stdin);
			printf("BISCOITO DOCE\n");
			count0 = 0;
			count1 = 0;
			count2 = 0;
			
			for (i=0;i<3;i++) {
				if (prod[0].precodoce < prod[i].precodoce) {
					count0++;
				}
				if (prod[1].precodoce < prod[i].precodoce) {
					count1++;
				}
				if (prod[2].precodoce < prod[i].precodoce) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precodoce);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precodoce);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precodoce);
			}
			
			fflush(stdin);	
			printf("BISCOITO SORTIDO\n");
			count0 = 0;
			count1 = 0;
			count2 = 0;
			for (i=0;i<3;i++) {
				if (prod[0].precosortido < prod[i].precosortido) {
					count0++;
				}
				if (prod[1].precosortido < prod[i].precosortido) {
					count1++;
				}
				if (prod[2].precosortido < prod[i].precosortido) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precosortido);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precosortido);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precosortido);
			}
			

			fflush(stdin);
			printf("PRECO PAO DE QUEIJO\n");			
			count0 = 0;
			count1 = 0;
			count2 = 0;
			for (i=0;i<3;i++) {
				if (prod[0].precopaoqueijo < prod[i].precopaoqueijo) {
					count0++;
				}
				if (prod[1].precopaoqueijo < prod[i].precopaoqueijo) {
					count1++;
				}
				if (prod[2].precopaoqueijo < prod[i].precopaoqueijo) {
					count2++;
				}
			}
			if (count0==2) {
				printf("O produto mais barato e da LOJA 0 ! Preco: %f\n\n",prod[0].precopaoqueijo);
			}
			else if (count1==2) {
				printf("O produto mais barato e da LOJA 1 ! Preco: %f\n\n",prod[1].precopaoqueijo);
			}
			else if (count2==2) {
				printf("O produto mais barato e da LOJA 2 ! Preco: %f\n\n",prod[2].precopaoqueijo);
			}
			fflush(stdin);
			goto menu;
		
		case 7:
			break;
		
	}
	printf("Obrigado pela preferencia!");

	
	printf("\n\n\n");
	return (0);
}

