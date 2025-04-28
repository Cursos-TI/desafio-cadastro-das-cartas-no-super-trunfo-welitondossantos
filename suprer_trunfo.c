#include <stdio.h>

int main(){
    printf("Desafio super trunfo!\n");
//Declarando as variavel carta 1

    int NomedaCidade1;
    int Populacao1;
    char Estado1[4];
    char codigo1[4];
    float Area1;
    float Pib1;
    int PontosTuristicos1;
     
    //Declarando as variavel carta 2
    int NomedaCidada2;
    int Populacao2;
    char Estado2[4];
    char codigo2[4];
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    //Comparando População
    
    printf("Entre com a Populacao1: \n");
    scanf("%d", &Populacao1);
    printf("Entre com a Populacao2: \n");
    scanf("%d", &Populacao2);

    //Resultado da comparação

    if (Populacao1 > Populacao2){
        printf("Resultado: Populacao1 venceu \n");
    }else if (Populacao2 > Populacao1){
        printf("Resultado: Populacao1 venceu \n");
    }else{
        printf("Resultado: Empate!\n");
    }
    

    

   
   

    



    
    




}