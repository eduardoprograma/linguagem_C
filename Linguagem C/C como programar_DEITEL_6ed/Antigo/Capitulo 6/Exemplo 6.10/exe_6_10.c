/*Tratando arrays de caracteres como strings*/
#include<stdio.h>
#include<stdlib.h>
main(){
    char string[20], string2[] = "String literal";
    int i;
    printf("Entre com uma string: ");
    scanf("%s", string);
    printf("string e: %s\nstring2 e:\nstring com espaços entre caracteres e:\n", string, string2);
    for(i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}