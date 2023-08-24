#include <stdio.h>

main(){
    //se o salario é maior
    //se o salario é igual
    //se o salario é menor

    float salarioMinimo = 1320.00;
    float salario;

    printf("Digite o salario atual");
    scanf("%f", &salario);

    if(salario > salarioMinimo){
        printf("O salario é maior");
    }else if(salario == salarioMinimo){
        printf("O salario é igual");
    }else{
        printf("O salario menor");
    }




}