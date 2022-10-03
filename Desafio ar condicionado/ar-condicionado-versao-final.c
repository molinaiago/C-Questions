#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

int andar;
float sala[3];
float volumesala;
float kcalrecinto;
int njanelas;
float janarea[15];
float areajanela;
int i = 1;
int opcjanela=0;
int contsolmanhacortina=0;
int contsoltardecortina=0;
int contsolmanhasemcortina=0;
int contsoltardesemcortina=0;
int contjanelanasombra=0;
float janelaskcal=0;
int portas;
float kcalportas=0;
int pessoas;
float kcalpessoas=0;
int neletro=0;
int escolhaeletro=0;
float eletrokcal=0;
float potenciakcal=0;
float cargatermica=0;
float btu=0;
int escolhaar;

printf("============================================\n");
printf("       CALCULO PARA SEU AR CONDICIONADO     \n");
printf("============================================\n");
fflush(stdin);

printf("Qual o comprimento da sala?\n");
scanf("%f",&sala[0]);

printf("Qual a largura da sala?\n");
scanf("%f",&sala[1]);

printf("Qual o pe direito da sala? (Distancia entre teto e solo)\n");
scanf("%f",&sala[2]);

volumesala = sala[0]*sala[1]*sala[2];
printf("O volume do seu recinto e: %f\n",volumesala);

printf("Qual a posicao da sala?\n [1] SOB ANDARES\n [2] PERTO DO TELHADO\n");
scanf("%d",&andar);

if (andar==1) {
	kcalrecinto = volumesala * 16;
}
if(andar==2) {
	kcalrecinto = volumesala * 22,33333333333333;
}

printf("Quantas janelas tem no recinto?\n");
scanf("%d",&njanelas);
fflush(stdin);

i=1;
while(i <= njanelas) {
printf("Quanto de largura tem sua janela %d?\n",i);
scanf("%f",&janarea[i]);
printf("Quanto de altura tem suas janelas %d?\n",i);
scanf("%f",&janarea[i+1]);
fflush(stdin);
areajanela = areajanela+(janarea[i]*janarea[i+1]);
i++;
}
printf("Area das Janelas: %f\n",areajanela);

i=1;
while (i <= njanelas) {
	printf("============================================\n");
	printf("           Sobre a Janela %d:\n           \n",i);
	printf("============================================\n");
	printf("[1] SOL MANHA COM CORTINA\n");
	printf("[2] SOL TARDE COM CORTINA\n");
	printf("[3] SOL MANHA SEM CORTINA\n");
	printf("[4] SOL TARDE SEM CORTINA\n");
	printf("[5] JANELA NA SOMBRA\n");
	scanf("%d",&opcjanela);
	fflush(stdin);
	
		if (opcjanela==1) {
			contsolmanhacortina = contsolmanhacortina+1;
			janelaskcal = janelaskcal+(areajanela * 160);
			fflush(stdin);
		}
		if (opcjanela==2) {
			contsoltardecortina = contsoltardecortina+1;
			janelaskcal = janelaskcal+(areajanela * 212);
			fflush(stdin);
		}
		if (opcjanela==3) {
			contsolmanhasemcortina = contsolmanhasemcortina+1;
			janelaskcal = janelaskcal+(areajanela * 222);
			fflush(stdin);
		}
		if (opcjanela==4) {
			contsoltardesemcortina = contsoltardesemcortina+1;
			janelaskcal = janelaskcal+(areajanela * 410);
			fflush(stdin);
		}
		if (opcjanela==5) {
			contjanelanasombra = contjanelanasombra+1;
			janelaskcal = janelaskcal+(areajanela * 37);
			fflush(stdin);
		}
		printf("=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=\n");
		i++;
		fflush(stdin);
}

printf("Voce tem %d janelas no recinto, com uma area de %f.\n",njanelas,areajanela);
printf("Com essas informacoes, fiz os seguintes calculos: \n");
printf("%d janelas com SOL DE MANHA COM CORTINA\n",contsolmanhacortina);
printf("%d janelas com SOL DE TARDE COM CORTINA\n",contsoltardecortina);
printf("%d janelas com SOL DE MANHA SEM CORTINA\n",contsolmanhasemcortina);
printf("%d janelas com SOL DE TARDE SEM CORTINA\n",contsoltardesemcortina);
printf("%d janelas NA SOMBRA\n",contjanelanasombra);

printf("Quantas portas tem no recinto?\n");
scanf("%d",&portas);
kcalportas = portas * 125;
fflush(stdin);

printf("Quantas pessoas trabalham no recinto?\n");
scanf("%d",&pessoas);
kcalpessoas = pessoas * 125;
fflush(stdin);

printf("Quantos aparelhos eletronicos voce tem na sala?\n");
scanf("%d",&neletro);
fflush(stdin);
i = 1;
while (i <= neletro) {
	printf("============================================\n");
	printf("           Sobre o ELETRO %d:\n           \n",i);
	printf("============================================\n");
	printf("[1] APARELHO DE SOM\n");                          /* 200W */
	printf("[2] VENTILADOR\n");                               /* 100W */
    printf("[3] AQUECEDOR DE AMBIENTE\n");                    /* 1500W*/
    printf("[4] CAFETEIRA\n");                                /* 300W */
    printf("[5] EXAUSTOR\n");                                 /* 300w */
    printf("[6] IMPRESSORA LASER\n");                         /* 400W */ 
    printf("[7] TELEVISAO\n");                                /* 200W */ 
    printf("[8] COMPUTADOR\n");                               /* 350W */
    scanf("%d",&escolhaeletro);
	fflush(stdin);
    
    if (escolhaeletro==1){
    	eletrokcal = eletrokcal + 200;
	}
	 if (escolhaeletro==2){
    	eletrokcal = eletrokcal + 100;
	}
	 if (escolhaeletro==3){
    	eletrokcal = eletrokcal + 1500;
	}
	 if (escolhaeletro==4){
    	eletrokcal = eletrokcal + 300;
	}
	 if (escolhaeletro==5){
    	eletrokcal = eletrokcal + 300;
	}
	 if (escolhaeletro==6){
    	eletrokcal = eletrokcal + 400;
	}
	 if (escolhaeletro==7){
    	eletrokcal = eletrokcal + 200;
	}
	 if (escolhaeletro==8){
    	eletrokcal = eletrokcal + 350;
	}
	i++;
}
eletrokcal = eletrokcal * 0.9; /* 1W = 0,9kcal */
fflush(stdin);

printf("============================================\n");
printf("                LEVANTAMENTO              \n",i);
printf("============================================\n");
fflush(stdin);
printf("KCAL Recinto: %f\n",kcalrecinto);
printf("KCAL Janelas: %f\n",janelaskcal);
printf("KCAL Eletros: %f\n",eletrokcal);
printf("KCAL Pessoas: %f\n",kcalpessoas);
printf("KCAL Portas: %f\n",kcalportas);

printf("-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=\n");

cargatermica = kcalrecinto+janelaskcal+eletrokcal+kcalpessoas+kcalportas;
printf("CARGA TERMICA: %f\n",cargatermica);

btu = cargatermica * 3.92;
printf("BTU (KCAL*CARGA): %f\n",btu);

printf("================================================================\n");
printf("           Sobre o AR CONDICIONADO, QUAL VOCe DESEJA?           \n",i);
printf("================================================================\n");
printf("[1] SPLIT TRADICIONAL\n");
printf("[2] SPLIT CASSETE\n");
printf("[3] SPLIT INVERTER\n");
printf("[4] PISO TETO\n");
scanf("%d",&escolhaar);
fflush(stdin);
    
    if (escolhaar==1){
    	printf("================================================================\n");
		printf("           VOCE ESCOLHEU O AR SPLIT TRADICIONAL                  \n",i);
		printf("================================================================\n");
    	/* fonte: americanas/mercadolivre */
    	if (btu<8000) {
    		printf("SEU BTU E MENOR QUE 8000, O PRECO ARREDONDADO DE R$1800");
		}
		if (btu>=8000 && btu<=9000) {
			printf("SEU BTU ESTA ENTRE 8K E 9K, O PRECO ARREDONDADO E R$2500");
		}
		if (btu>9000 && btu<=10000) {
			printf("SEU BTU ESTA ENTRE 9K E 10K, O PRECO ARREDONDADO E R$1700");
		}
		if (btu>10000 && btu<=12000) {
			printf("SEU BTU ESTA ENTRE 10K E 12K, O PRECO ARREDONDADO E R$2000");
		}
		if (btu>12000 && btu<=18000) {
			printf("SEU BTU ESTA ENTRE 12K E 18K, O PRECO ARREDONDADO E R$3000");
		}
		if (btu>18000 && btu<=24000) {
			printf("SEU BTU ESTA ENTRE 18K E 24K, O PRECO ARREDONDADO E R$4500");
		}
		if (btu>24000 && btu<=27000) {
			printf("SEU BTU ESTA ENTRE 24K E 27K, O PRECO ARREDONDADO E R$5500");
		}
		if (btu>27000 && btu<=30000) {
			printf("SEU BTU ESTA ENTRE 27K E 30K, O PRECO ARREDONDADO E R$6500");
		}
		if (btu>30000 && btu<=36000) {;
			printf("SEU BTU ESTA ENTRE 30K E 36K, O PRECO ARREDONDADO E R$8000");
		}
		if (btu>36000 && btu<=48000) {
			printf("SEU BTU ESTA ENTRE 36K E 48K, O PRECO ARREDONDADO E R$9000");
		}
		if (btu>48000 && btu<=60000) {
			printf("SEU BTU ESTA ENTRE 48K E 60K, O PRECO ARREDONDADO E R$12000");
		}
		
	}
	 if (escolhaar==2){
    	printf("================================================================\n");
		printf("           VOCE ESCOLHEU O AR SPLIT CASSETE                      \n",i);
		printf("================================================================\n");
	 	/* fonte: https://www.leveros.com.br/ar-condicionado/cassete */
    	if (btu<8000) {
    		printf("SEU BTU E MENOR QUE 8000, O PRECO ARREDONDADO DE R$2000");
		}
		if (btu>=8000 && btu<=9000) {
			printf("SEU BTU ESTA ENTRE 8K E 9K, O PRECO ARREDONDADO E R$2500");
		}
		if (btu>9000 && btu<=10000) {
			printf("SEU BTU ESTA ENTRE 9K E 10K, O PRECO ARREDONDADO E R$3500");
		}
		if (btu>10000 && btu<=12000) {
			printf("SEU BTU ESTA ENTRE 10K E 12K, O PRECO ARREDONDADO E R$4000");
		}
		if (btu>12000 && btu<=18000) {
			printf("SEU BTU ESTA ENTRE 12K E 18K, O PRECO ARREDONDADO E R$5200");
		}
		if (btu>18000 && btu<=24000) {
			printf("SEU BTU ESTA ENTRE 18K E 24K, O PRECO ARREDONDADO E R$8500");
		}
		if (btu>24000 && btu<=27000) {
			printf("SEU BTU ESTA ENTRE 24K E 27K, O PRECO ARREDONDADO E R$4500");
		}
		if (btu>27000 && btu<=30000) {
			printf("SEU BTU ESTA ENTRE 27K E 30K, O PRECO ARREDONDADO E R$9600");
		}
		if (btu>30000 && btu<=36000) {
			printf("SEU BTU ESTA ENTRE 30K E 36K, O PRECO ARREDONDADO E R$1200");
		}
		if (btu>36000 && btu<=48000) {
			printf("SEU BTU ESTA ENTRE 36K E 48K, O PRECO ARREDONDADO E R$13000");
		}
		if (btu>48000 && btu<=60000) {
			printf("SEU BTU ESTA ENTRE 48K E 60K, O PRECO ARREDONDADO E R$18000");
		}
	}
	
	 if (escolhaar==3){
    	printf("================================================================\n");
		printf("           VOCE ESCOLHEU O AR SPLIT INVERTER                     \n",i);
		printf("================================================================\n");
	 	/* fonte: */
    	if (btu<8000) {
    		printf("SEU BTU E MENOR QUE 8000, O PRECO ARREDONDADO DE R$2000");
		}
		if (btu>=8000 && btu<=9000) {
			printf("SEU BTU ESTA ENTRE 8K E 9K, O PRECO ARREDONDADO E R$2500");
		}
		if (btu>9000 && btu<=10000) {
			printf("SEU BTU ESTA ENTRE 9K E 10K, O PRECO ARREDONDADO E R$1700");
		}
		if (btu>10000 && btu<=12000) {
			printf("SEU BTU ESTA ENTRE 10K E 12K, O PRECO ARREDONDADO E R$3000");
		}
		if (btu>12000 && btu<=18000) {
			printf("SEU BTU ESTA ENTRE 12K E 18K, O PRECO ARREDONDADO E R$3600");
		}
		if (btu>18000 && btu<=24000) {
			printf("SEU BTU ESTA ENTRE 18K E 24K, O PRECO ARREDONDADO E R$5000");
		}
		if (btu>24000 && btu<=27000) {
			printf("SEU BTU ESTA ENTRE 24K E 27K, O PRECO ARREDONDADO E R$7000");
		}
		if (btu>27000 && btu<=30000) {
			printf("SEU BTU ESTA ENTRE 27K E 30K, O PRECO ARREDONDADO E R$8500");
		}
		if (btu>30000 && btu<=36000) {
			printf("SEU BTU ESTA ENTRE 30K E 36K, O PRECO ARREDONDADO E R$9500");
		}
		if (btu>36000 && btu<=48000) {
			printf("SEU BTU ESTA ENTRE 36K E 48K, O PRECO ARREDONDADO E R$12000");
		}
		if (btu>48000 && btu<=60000) {
			printf("SEU BTU ESTA ENTRE 48K E 60K, O PRECO ARREDONDADO E R$15000 < x > 19000");
		}
	}
	
	 if (escolhaar==4){
    	printf("================================================================\n");
		printf("           VOCE ESCOLHEU O AR PISO TETO                         \n",i);
		printf("================================================================\n");
    	if (btu<8000) {
    		printf("SEU BTU E MENOR QUE 8000, O PRECO ARREDONDADO DE R$2000");
		}
		if (btu>=8000 && btu<=9000) {
			printf("SEU BTU ESTA ENTRE 8K E 9K, O PRECO ARREDONDADO E R$2500");
		}
		if (btu>9000 && btu<=10000) {
			printf("SEU BTU ESTA ENTRE 9K E 10K, O PRECO ARREDONDADO E R$3000");
		}
		if (btu>10000 && btu<=12000) {
			printf("SEU BTU ESTA ENTRE 10K E 12K, O PRECO ARREDONDADO E R$4000");
		}
		if (btu>12000 && btu<=18000) {
			printf("SEU BTU ESTA ENTRE 12K E 18K, O PRECO ARREDONDADO E R$4500");
		}
		if (btu>18000 && btu<=24000) {
			printf("SEU BTU ESTA ENTRE 18K E 24K, O PRECO ARREDONDADO E R$5500");
		}
		if (btu>24000 && btu<=27000) {
			printf("SEU BTU ESTA ENTRE 24K E 27K, O PRECO ARREDONDADO E R$6500");
		}
		if (btu>27000 && btu<=30000) {
			printf("SEU BTU ESTA ENTRE 27K E 30K, O PRECO ARREDONDADO E R$7500");
		}
		if (btu>30000 && btu<=36000) {
			printf("SEU BTU ESTA ENTRE 30K E 36K, O PRECO ARREDONDADO E R$8000");
		}
		if (btu>36000 && btu<=48000) {
			printf("SEU BTU ESTA ENTRE 36K E 48K, O PRECO ARREDONDADO E R$10000");
		}
		if (btu>48000 && btu<=60000) {
			printf("SEU BTU ESTA ENTRE 48K E 60K, O PRECO ARREDONDADO E R$12000");
		}
	}

return 0;
}
