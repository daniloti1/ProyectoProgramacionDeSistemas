#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* cifrar(char cadena[30], int n);
int buscar(char a, char texto[30]);

int main(int argc, char **argv){
	printf("Cifrado ciclico\n");
	printf("Ingrese el mensaje a cifrar: \n");
	char cadenaCode[30]="mensaje";
	scanf("%s", cadenaCode);
	printf("Ingrese la clave numerica: \n");
	int num;
	scanf("%d", &num);
	printf("almenos no es el scan");
	char* mensajeCifrado;
	//mensajeCifrado=cifrar(cadenaCode,num);
	printf("bien");
	//strcpy(mensajeCifrado,cifrar(cadenaCode,num));
	//printf("Mensaje cifrado: %s \n", mensajeCifrado);

	return 0;
}

char* cifrar(char cadena[30], int n){
	printf("empezamos bien");
	char* cifradoFinal=malloc(sizeof(char)*30);
        char cifrado[30];
	strcpy(cifrado,cadena);
	char alfabeto[26]="abcdefghijklmnopqrstuvwxyz";
        int a=(int)strlen(cadena);

	printf("hasta aqui bien");
	for (int i=0;a;i++){
		int b=buscar(cadena[i],alfabeto);
		b=(b+n)%26;
                cifrado[i]=alfabeto[b];
	}
	strcpy(cifradoFinal,cifrado);
	return (char *)cifradoFinal;
}

int buscar(char a, char texto[30]){
	int indice=-1;
	for (int i=0;strlen(texto);i++){
		if (a==texto[i]){
			indice=i;
			break;
		}
	}
	return indice;
}
