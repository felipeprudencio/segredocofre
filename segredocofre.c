#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

#define MAX 1001

int main () {
    int X=0,Y=0,Z=0,i=0,N=0,M=0,Mfinal=1,Manterior=0,Aux=0,andar=0;
	int Nbarra[MAX], Msequencia_andar[MAX],indice[MAX];	
    scanf("%i %i", &N, &M);
    
    for(X=1; X <= N; X++){
    	scanf("%i", &Nbarra[X]);
	}
	
	for(X=1; X <= M; X++){
    	scanf("%i", &Msequencia_andar[X]);
	}
	
	
	//referente ao numero de sequencias 
	for(X=1; X<=M; X++){	
		//referente a qual numero da sequencia
    if(X!=1){
      Manterior=Msequencia_andar[X-1];
    }else{
      Manterior=1;
    }
    Mfinal=Msequencia_andar[X];



    andar=abs(Manterior-Mfinal);
    
	if(Manterior==Mfinal){
	    //printf("%i",Nbarra[Msequencia_andar[andar+1]] );
	    indice[Nbarra[Msequencia_andar[andar+1]]]++;
	   // printf("Alterar");
	}

    //printf("%i %i", Mfinal, Manterior );

    //anda pela barra
		for(Y=0; Y<andar; Y++){
 
        if(Manterior<=Mfinal){
         //printf("(%i-%i-%i-D[%i])", Y, Manterior, (Manterior+Y+1), Nbarra[Manterior+Y+1]);
         Aux=Nbarra[Manterior+Y+1];
         indice[Aux]++;
        }else if(Mfinal<=Manterior){
         //printf("(%i-%i-%i-E[%i])", Y, Manterior, (Manterior-Y-1), Nbarra[Manterior-Y-1]);
         Aux=Nbarra[Manterior-Y-1];
         indice[Aux]++;
        }
         
 			
		}
		//printf("\n");
	}
	

	
	
	while(i<10){
	    printf("%i ", indice[i]);
	    i++;
	}
    
	
	return 0;
}

