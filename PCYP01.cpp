#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Diccionario(){
	//lectura de archivo
    FILE* archive;
	char word;

    //abrir archivo
    fopen_s(&archive, ".txt", "w");
    if (archive != NULL){
    	scanf("%[^\n]", &word);
    	fflush(stdin);
		//remover caracteres
		
      //escribir en minuscula
        for(in i=0, word[i]!='\0'; i++){
        	word[i] = tolower(word[i]);
		}
		printf("%s", word);	
		
		}
    else{
        printf("\n No detecta archivo \n\n");
        }
    fclose(archive);
}

int main()
{
    return 0;
}