#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int n=0;
char seguir,candidatos[6][100],partido[6][100];
int votos[6],indice=0,resultado=0,part_repetido=0,max_votos=0;
float porcentaje;
void candidatos_para_votar(){
do{
	cout <<"\nLos candidatos para votar son los siguientes:\n";
	printf("\n-------------------------------              ");
	for(int i=0;i<6;i++){
	printf("\nEl candidato %s del partido %s ",candidatos[i],partido[i]);
    printf("\n-------------------------------              ");
	}
	cout<<"\nYa decidio por quien votar? Si ya lo decidio oprima s\n";
	getchar();
	seguir=getch();
	if ((seguir!='s') && (seguir!='S')){
		system("cls");
		cout<<"Deve de digitar s para poder continuar: ";
		getchar();
	    seguir=getchar();
		system("cls");
		break;
		} else{
		} 
    }while((seguir!='s') && (seguir!='S'));
    system("cls");	
}

int main() {
char cedulas[n][50];	
	do{
    cout << "Digite el nombre del candidato: ";
	cin >> candidatos[indice];
	cout <<"\nDigite el nombre del partido del candidato: ";
	cin >> partido[indice];
	indice++;
    system("cls");
	}while(indice<6);
do{
char nombre[100]; 
char cedula[50];
bool resul=0;
    do{
	resul=false;	
    memcpy(cedulas[n],cedula, strlen(cedula)+1);
	n++;	
    cout<<"Digite su numero de identificacion para proseder con su voto: ";
	cin >> cedula;
    for(int i=0; i<n; i++){
		if(strcmp(cedulas[i],cedula)==0){
		resul=true;	
	    system("cls");		
	    cout<<"Usted ya digito este numero de cedula digite otro\n";
	    system("pause");
		} else {
		}
    }
    }while(resul==1);
    
	do{	
	candidatos_para_votar();	
    cout<<"Digite el nombre del partido por el cual desea votar: ";
    cin>>nombre; 
	for(int i=0; i<6; i++){
		if(strcmp(nombre,partido[i])==0){
	    seguir=1;
		} else {
		}
	}
	if(seguir!=1){
	system("cls");		
	cout<<"El pertido "<<nombre<<" no existe seleccione uno correcto\n";
	system("pause");
	}
	}while(seguir!=1);
	
	for(int i=0;i<6;i++){	
	if(strcmp(nombre,partido[i])==0){
    cout<<"\nUsted a votado por "<<candidatos[i]<<" perteneciente al partido "<<partido[i]<<endl;
    cout<<"Muchas Gracias por su voto\n";
    }
    } 
	for(int i=0; i<6; i++){
		if (strcmp(nombre,partido[i])==0){
	       votos[i]++;
	       if(votos[i]>resultado){
  		resultado=votos[i];
        }
		} else {
		}
	}
	cout<<"\nAun quedan votantes o ya desea finalizar el programa?";
	cout<<"\nSi desea finalizar oprima s\n";
	getchar();
	seguir=getch();
	
}while((seguir!='s') && (seguir!='S'));

for(int i=0;i<6;i++){
max_votos=max_votos+votos[i];
}
	cout <<"\nLas votaciones quedaron de la siguiente manera:\n";
	printf("\n------------------------------------------------------------------------------------------------------");	
	for(int i=0;i<6;i++){
	porcentaje=votos[i]*100/max_votos;	
	cout<<"\nEl candidato "<<candidatos[i]<<" del partido "<<partido[i]<<" con un total de: "<<votos[i]<<" votos y un porcentaje de: "<<porcentaje<<"%";
    printf("\n-------------------------------------------------------------------------------------------------------");
	}
    for(int i=0;i<6;i++){
   	if(votos[i]>=resultado){
       part_repetido++;
       continue;
	   }
}
	for(int i=0;i<6;i++){
        if(part_repetido>1){
        	cout<<"\nHay mas de un partido con la misma cantidad de votos deve de volver a ejecutar el programa";
        break;
		} else{
    } 
    }
    for(int i=0;i<6;i++){
	if((part_repetido<=1)&&(votos[i]>=resultado)){
			cout<<"\nEl partido ganador es "<<partido[i]<<" del candidato "<<candidatos[i]<<"\n";
			cout<<"Con una catidad de votos de: "<<votos[i]<<" y un porcentaje de: "<<porcentaje<<endl;
    }
	}
		
	return 0;
}
