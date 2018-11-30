/*O nome de um array e o mesmo que &array[0]*/
#include<stdio.h>
#include<stdlib.h>
main(){
    char array[5];
    printf("  array = %p\n\n&array[0] = %p\n", array, &array[0]);
    system("pause");
    return 0;
}