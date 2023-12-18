#include <iostream>
#include <stdio.h>

int menuM(){
	int j=0;
	printf("--- MENU MASSA ---");
	printf("\n 1) Centigrama");
	printf("\n 2) Decagrama");
	printf("\n 3) Decigrama");
	printf("\n 4) Grama");
	printf("\n 5) Hectograma");
	printf("\n 6) Miligrama");
	printf("\n 7) Quilograma");
	printf("\n 8) Onca");
	printf("\nInforme a massa principal: ");
	scanf("%i",&j);
	return j;
}

int imprimirM(){
	int v=menuM();
	switch(v){
		case 1:
			system("cls");
			printf("Qual conversao deseja fazer?");
			printf("\n 1) Centigrama para Decagrama");
			printf("\n 2) Centigrama para Decigrama");
			printf("\n 3) Centigrama para Grama");
			printf("\n 4) Centigrama para Hectograma");
			printf("\n 5) Centigrama para Miligrama");
			printf("\n 6) Centigrama para Quilograma");
			printf("\n 7) Centigrama para Onca");
			break;
		case 2:
			system("cls");
			printf("Qual conversao deseja fazer?");
			printf("\n 8) Decagrama para Centigrama");
			printf("\n 9) Decagrama para Decigrama");
			printf("\n 10) Decagrama para Grama");
			printf("\n 11) Decagrama para Hectograma");
			printf("\n 12) Decagrama para Miligrama");
			printf("\n 13) Decagrama para Quilograma");
			printf("\n 14) Decagrama para Onca");
			break;
		case 3:
			system("cls");
			printf("Qual conversao deseja fazer?");
			printf("\n 15) Decigrama para Centigrama");
			printf("\n 16) Decigrama para Decagrama");
			printf("\n 17) Decigrama para Grama");
			printf("\n 18) Decigrama para Hectograma");
			printf("\n 19) Decigrama para Miligrama");
			printf("\n 20) Decigrama para Quilograma");
			printf("\n 21) Decigrama para Onca");
			break;
		case 4:
			system("cls");
			printf("Qual conversao deseja fazer?");
			printf("\n 22) Grama para Centigrama");
			printf("\n 22) Grama para Decagrama");
			printf("\n 24) Grama para Decigrama");
			printf("\n 25) Grama para Hectograma");
			printf("\n 26) Grama para Miligrama");
			printf("\n 27) Grama para Quilograma");
			printf("\n 28) Grama para Onca");
			break;
		case 5:
			system("cls");
			printf("Qual conversao deseja fazer?");
			printf("\n 29) Hectograma para Centigrama");
			printf("\n 30) Hectograma para Decagrama");
			printf("\n 31) Hectograma para Decigrama");
			printf("\n 32) Hectograma para Grama");
			printf("\n 33) Hectograma para Miligrama");
			printf("\n 34) Hectograma para Quilograma");
			printf("\n 35) Hectograma para Onca");
			break;
		case 6:
			system("cls");
			printf("Qual conversao deseja fazer?");
			printf("\n 36) Miligrama para Centigrama");
			printf("\n 37) Miligrama para Decagrama");
			printf("\n 38) Miligrama para Decigrama");
			printf("\n 39) Miligrama para Grama");
			printf("\n 40) Miligrama para Hectograma");
			printf("\n 41) Miligrama para Quilograma");
			printf("\n 42) Miligrama para Onca");
			break;
		case 7:
			system("cls");
			printf("Qual conversao deseja fazer?");
			printf("\n 43) Quilograma para Centigrama");
			printf("\n 44) Quilograma para Decagrama");
			printf("\n 45) Quilograma para Decigrama");
			printf("\n 46) Quilograma para Grama");
			printf("\n 47) Quilograma para Hectograma");
			printf("\n 48) Quilograma para Miligrama");
			printf("\n 49) Quilograma para Onca");
			break;
		case 8:
			system("cls");
			printf("Qual conversao deseja fazer?");
			printf("\n 50) Onca para Centigrama");
			printf("\n 51) Onca para Decagrama");
			printf("\n 52) Onca para Decigrama");
			printf("\n 53) Onca para Grama");
			printf("\n 54) Onca para Hectograma");
			printf("\n 55) Onca para Miligrama");
			printf("\n 56) Onca para Quilograma");
			break;								
	}
	printf("\n 57) Sair");
	int resposta;
	printf("\n Digite a opcao desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

float cgdag(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/1000));
	return (resultado);
}

float cgdg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10));
	return (resultado);
}

float cgg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/100));
	return (resultado);
}

float cghg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10000));
	return (resultado);
}

float cgmg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10));
	return (resultado);
}

float cgkg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*0.8));
	return (resultado);
}

float cgo(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/2834.95));
	return (resultado);
}

float dagcg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*1000));
	return (resultado);
}

float dagdg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*100));
	return (resultado);
}

float dagg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10));
	return (resultado);
}

float daghg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10));
	return (resultado);
}

float dagmg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10000));
	return (resultado);
}

float dagkg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/100));
	return (resultado);
}

float dago(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*0.35274));
	return (resultado);
}

float dgcg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10));
	return (resultado);
}

float dgdag(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/100));
	return (resultado);
}

float dgg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10));
	return (resultado);
}

float dghg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/1000));
	return (resultado);
}

float dgmg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*100));
	return (resultado);
}

float dgkg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10000));
	return (resultado);
}

float dgo(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/283.495));
	return (resultado);
}

float gcg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*100));
	return (resultado);
}

float gdag(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10));
	return (resultado);
}

float gdg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10));
	return (resultado);
}

float ghg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/100));
	return (resultado);
}

float gmg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*1000));
	return (resultado);
}

float gkg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/1000));
	return (resultado);
}

float go(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/28.3495));
	return (resultado);
}

float hgcg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10000));
	return (resultado);
}

float hgdag(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10));
	return (resultado);
}

float hgdg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*1000));
	return (resultado);
}

float hgg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*100));
	return (resultado);
}

float hgmg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*100000));
	return (resultado);
}

float hgkg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10));
	return (resultado);
}

float hgo(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*3.5274));
	return (resultado);
}

float mgcg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10));
	return (resultado);
}

float mgdag(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/10000));
	return (resultado);
}

float mgdg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/100));
	return (resultado);
}

float mgg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/1000));
	return (resultado);
}

float mghg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/100000));
	return (resultado);
}

float mgkg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/1000000));
	return (resultado);
}

float mgo(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/28349.5));
	return (resultado);
}

float kgcg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*100000));
	return (resultado);
}

float kgdag(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*100));
	return (resultado);
}

float kgdg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10000));
	return (resultado);
}

float kgg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*1000));
	return (resultado);
}

float kghg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*10));
	return (resultado);
}

float kgmg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*1000000));
	return (resultado);
}

float kgo(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*35.274));
	return (resultado);
}

float ocg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*2834.95));
	return (resultado);
}

float odag(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/0.35274));
	return (resultado);
}

float odg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*283.495));
	return (resultado);
}

float og(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*28.3495));
	return (resultado);
}

float ohg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/3.5274));
	return (resultado);
}

float omg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1*28349.5));
	return (resultado);
}

float okg(float num1, float num2){
	float resultado;
	resultado=(num2=(num1/35.274));
	return (resultado);
}

int main(){
	float num1, num2;
	int opcao=imprimirM();
	printf("\nInforme uma massa: ");
	scanf("%f", &num1);
	switch(opcao) {
		case 1:
			system("cls");
			printf("A conversao de %.1f Centigrama para Decagrama = %.2f ", num1, cgdag(num1, num2));
			break;
		case 2:
			system("cls");
			printf("A conversao de %.1f Centigrama para Decigrama = %.2f ", num1, cgdg(num1, num2));
			break;
		case 3:
			system("cls");
			printf("A conversao de %.1f Centigrama para Grama = %.2f", num1, cgg(num1, num2));
			break;
		case 4:
			system("cls");
			printf("A conversao de %.1f Centigrama para Hectograma = %.2f", num1, cghg(num1, num2));
			break;
		case 5:
			system("cls");
			printf("A conversao de %.1f Centigrama para Miligrama = %.2f", num1, cgmg(num1, num2));
			break;
		case 6:
			system("cls");
			printf("A conversao de %.1f Centigrama para Quilograma = %.2f", num1, cgkg(num1, num2));
			break;
		case 7:
			system("cls");
			printf("A conversao de %.1f Centigrama para Onca = %.3f", num1, cgo(num1, num2));
			break;
		case 8:
			system("cls");
			printf("A conversao de %.1f Decagrama para Centigrama = %.2f", num1, dagcg(num1, num2));
			break;
		case 9:
			system("cls");
			printf("A conversao de %.1f Decagrama para Decigrama = %.2f", num1, dagdg(num1, num2));
			break;
		case 10:
			system("cls");
			printf("A conversao de %.1f Decagrama para Grama = %.2f", num1, dagg(num1, num2));
			break;
		case 11:
			system("cls");
			printf("A conversao de %.1f Decagrama para Hectograma = %.2f", num1, daghg(num1, num2));
			break;
		case 12:
			system("cls");
			printf("A conversao de %.1f Decagrama para Miligrama = %.2f", num1, dagmg(num1, num2));
			break;
		case 13:
			system("cls");
			printf("A conversao de %.1f Decagrama para Quilograma = %.2f", num1, dagkg(num1, num2));
			break;
		case 14:
			system("cls");
			printf("A conversao de %.1f Decagrama para Onca = %.3f", num1, dago(num1, num2));
			break;
		case 15:
			system("cls");
			printf("A conversao de %.1f Decigrama para Centigrama = %.2f", num1, dgcg(num1, num2));
			break;
		case 16:
			system("cls");
			printf("A conversao de %.1f Decigrama para Decagrama = %.2f", num1, dgdag(num1, num2));
			break;
		case 17:
			system("cls");
			printf("A conversao de %.1f Decigrama para Grama = %.2f", num1, dgg(num1, num2));
			break;
		case 18:
			system("cls");
			printf("A conversao de %.1f Decigrama para Hectograma = %.2f", num1, dghg(num1, num2));
			break;
		case 19:
			system("cls");
			printf("A conversao de %.1f Decigrama para Miligrama = %.2f", num1, dgmg(num1, num2));
			break;
		case 20:
			system("cls");
			printf("A conversao de %.1f Decigrama para Quilograma = %.2f", num1, dgkg(num1, num2));
			break;
		case 21:
			system("cls");
			printf("A conversao de %.1f Decigrama para Onca = %.3f", num1, dgo(num1, num2));
			break;
		case 22:
			system("cls");
			printf("A conversao de %.1f Grama para Centigrama = %.2f", num1, gcg(num1, num2));
			break;
		case 23:
			system("cls");
			printf("A conversao de %.1f Grama para Decagrama = %.2f", num1, gdag(num1, num2));
			break;
		case 24:
			system("cls");
			printf("A conversao de %.1f Grama para Decigrama = %.2f", num1, gdg(num1, num2));
			break;
		case 25:
			system("cls");
			printf("A conversao de %.1f Grama para Hectograma = %.2f", num1, ghg(num1, num2));
			break;
		case 26:
			system("cls");
			printf("A conversao de %.1f Grama para Miligrama = %.2f", num1, gmg(num1, num2));
			break;
		case 27:
			system("cls");
			printf("A conversao de %.1f Grama para Quilograma = %.2f", num1, gkg(num1, num2));
			break;
		case 28:
			system("cls");
			printf("A conversao de %.1f Grama para Onca = %.3f", num1, go(num1, num2));
			break;
		case 29:
			system("cls");
			printf("A conversao de %.1f Hectograma para Centigrama = %.2f", num1, hgcg(num1, num2));
			break;
		case 30:
			system("cls");
			printf("A conversao de %.1f Hectograma para Decagrama = %.2f", num1, hgdag(num1, num2));
			break;
		case 31:
			system("cls");
			printf("A conversao de %.1f Hectograma para Decigrama = %.2f", num1, hgdg(num1, num2));
			break;
		case 32:
			system("cls");
			printf("A conversao de %.1f Hectograma para Grama = %.2f", num1, hgg(num1, num2));
			break;
		case 33:
			system("cls");
			printf("A conversao de %.1f Hectograma para Miligrama = %.2f", num1, hgmg(num1, num2));
			break;
		case 34:
			system("cls");
			printf("A conversao de %.1f Hectograma para Quilograma = %.2f", num1, hgkg(num1, num2));
			break;
		case 35:
			system("cls");
			printf("A conversao de %.1f Hectograma para Onca = %.3f", num1, hgo(num1, num2));
			break;
		case 36:
			system("cls");
			printf("A conversao de %.1f Miligrama para Centigrama = %.2f", num1, mgcg(num1, num2));
			break;
		case 37:
			system("cls");
			printf("A conversao de %.1f Miligrama para Decagrama = %.2f", num1, mgdag(num1, num2));
			break;
		case 38:
			system("cls");
			printf("A conversao de %.1f Miligrama para Decigrama = %.2f", num1, mgdg(num1, num2));
			break;
		case 39:
			system("cls");
			printf("A conversao de %.1f Miligrama para Grama = %.2f", num1, mgg(num1, num2));
			break;
		case 40:
			system("cls");
			printf("A conversao de %.1f Miligrama para Hectograma = %.2f", num1, mghg(num1, num2));
			break;
		case 41:
			system("cls");
			printf("A conversao de %.1f Miligrama para Quilograma = %.2f", num1, mgkg(num1, num2));
			break;
		case 42:
			system("cls");
			printf("A conversao de %.1f Miligrama para Onca = %.4f", num1, mgo(num1, num2));
			break;
		case 43:
			system("cls");
			printf("A conversao de %.1f Quilograma para Centigrama = %.2f", num1, kgcg(num1, num2));
			break;
		case 44:
			system("cls");
			printf("A conversao de %.1f Quilograma para Decagrama = %.2f", num1, kgdag(num1, num2));
			break;
		case 45:
			system("cls");
			printf("A conversao de %.1f Quilograma para Decigrama = %.2f", num1, kgdg(num1, num2));
			break;
		case 46:
			system("cls");
			printf("A conversao de %.1f Quilograma para Grama = %.2f", num1, kgg(num1, num2));
			break;
		case 47:
			system("cls");
			printf("A conversao de %.1f Quilograma para Hectograma = %.2f", num1, kghg(num1, num2));
			break;
		case 48:
			system("cls");
			printf("A conversao de %.1f Quilograma para Miligrama = %.2f", num1, kgmg(num1, num2));
			break;
		case 49:
			system("cls");
			printf("A conversao de %.1f Quilograma para Onca = %.3f", num1, kgo(num1, num2));
			break;
		case 50:
			system("cls");
			printf("A conversao de %.1f Onca para Centigrama = %.2f", num1, ocg(num1, num2));
			break;
		case 51:
			system("cls");
			printf("A conversao de %.1f Onca para Decagrama = %.2f", num1, odag(num1, num2));
			break;
		case 52:
			system("cls");
			printf("A conversao de %.1f Onca para Decigrama = %.2f", num1, odg(num1, num2));
			break;
		case 53:
			system("cls");
			printf("A conversao de %.1f Onca para Grama = %.2f", num1, og(num1, num2));
			break;
		case 54:
			system("cls");
			printf("A conversao de %.1f Onca para Hectograma = %.2f", num1, ohg(num1, num2));
			break;
		case 55:
			system("cls");
			printf("A conversao de %.1f Onca para Miligrama = %.2f", num1, omg(num1, num2));
			break;
		case 56:
			system("cls");
			printf("A conversao de %.1f Onca para Quilograma = %.2f", num1, okg(num1, num2));
			break;
		case 57:
			printf("finalizando o programa, aperte qualquer botao para sair.");
			exit(0);
            break;
	}
}
