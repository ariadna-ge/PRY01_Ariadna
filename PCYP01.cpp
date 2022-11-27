#include <stdio.h>
#include <stdlib.h>

int main()
{
    //lectura de archivo
    FILE* archive;
    char c;

    //abrir archivo
    fopen_s(&archive, ".txt", "w");
    if (archive != NULL){
        scanf_s("%[^\n]", &c);
        fflush(stdin);
        //limpieza buffer
    }
    else{
        printf("\n No detecta archivo \n\n");
        }
    fclose(archive);
    return 0;
}