#include <stdio.h>

int main(){
    printf("*************\n");
    printf("* Hello World *\n");
    printf("*************\n");

    int secretnumber = 42;
    int usernumber;

    printf("Escolha seu numero: ");
    scanf("%d", &usernumber);
    printf("Seu numero foi %d\n", usernumber);

    if(secretnumber == usernumber){
        printf("Acertou\n");
    }else{
        if(usernumber > secretnumber){
            printf("Seu num foi maior que o num secreto\n");
        }else{
            printf("Seu num foi menor que o num secreto\n");
        }
        
    };

    return 0;
}