#include <stdio.h>
#include <jmorecfg.h>

int main() {
    /***********************************EX1******************/
    int i=1;
    while(i<=100 )
    {
        printf("%d\n",i+1);
        i+=5;
    }
    /**********************************Ex2*********************/
    int j=100;
    while(j>=1)
    {
        printf("%d\n",j);
        j-=10;
    }
    /*********************************Ex3************************/
    int debut=0;
    int fin =0;
    int inc=0;
    int nbboucles=0;
    int nb=0;
    printf("Veuillez saisir le début de la boucle\n");
    scanf("%d",&debut);
    printf("Veuillez saisir la fin de la boucle\n");
    scanf("%d",&fin);
    printf("Veuillez saisir l'incrementation/décrementation\n");
    scanf("%d",&inc);
    /***************Calcul du nombre de tours*******************/
    if(debut>fin)
    {


        nbboucles=(debut-fin)/inc;
        inc*=-1; //correction incrémentation
    }
    else
        nbboucles=(fin-debut)/inc;

    /*****************boucle parametrée*************************/
    for(i=debut;nb<=nbboucles;i+=inc)
    {
        printf("%d\n",i);
        nb++;
    }




    return 0;
}