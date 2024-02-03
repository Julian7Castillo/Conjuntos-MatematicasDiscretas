#include<iostream>
#include<stdlib.h>
#define MAX 20

using namespace std;

//variables globales
char o = 162, u = 163, U = 233, a = 160, ii = 161, op, op2, op3, op4, op5, op6;
int tamA=0, tamB=0, metodo1=0, metodo2=0, metodo3=0, metodo4=0;
int conjuntoA[MAX];
int conjuntoB[MAX];
int conjuntoAUB[MAX];
int conjuntoAnB[MAX];
int conjuntoSub[MAX];
int conjuntoDif[MAX];

//prototipo de funciones
void menuPrincipal();
void subMenuCrear();
void subMenuLlenar();
void subMenuMostar();
void subMenuOperar();
void crearConjunto(int);
void llenarConjunto(int);
void mostrarConjuntos(int);
void funcionUnion();
void funcionInterseccion();
void funcionSubconjunto();
void funcionDiferencia();
void funcionRelacionBinaria(int);
void subMenuRelacionBinaria();

int main(){
	
	system("color F0");
	menuPrincipal();
}

void menuPrincipal(){
	do{
		cout<<"\n\t*************"<<endl;
		cout<<"\t|    MEN"<<U<<"   |"<<endl;
		cout<<"\t*************"<<endl;
		cout<<"a). Crear vector\nb). Llenar conjuntos\nc). Mostrar conjuntos \nd). Operaciones con conjuntos\ne). Salir"<<endl<<endl<<"-> ";
		cin>>op;
		
		switch(op){
			case 'a':
				subMenuCrear();
			break;
			case 'b':
				subMenuLlenar();
			break;
			case 'c':
				subMenuMostar();
			break;
			case 'd':
				subMenuOperar();
			break;
			case 'e':
				cout<<"\n=============================================================================================="<<endl;
				cout<<"|  [MENSAJE]: Gracias por utilizar nuestro servicio de Matem"<<a<<"ticas Discretas, vuelve pronto  |"<<endl;
				cout<<"=============================================================================================="<<endl;
			break;
			default:
				cout<<"\n==============================================="<<endl;
				cout<<"|  [ERROR]: La opci"<<o<<"n elegida no es correcta  |"<<endl;
				cout<<"==============================================="<<endl;
			break;	
		}
	}while(op != 'e');
}

void subMenuCrear(){
	//system("cls");
	do{
		cout<<"\n\t*****************"<<endl;
		cout<<"\t|    SUB-MEN"<<U<<"   |"<<endl;
		cout<<"\t*****************"<<endl;
		cout<<"a). Crear Conjunto A\nb). Crear Conjunto B\nc). Regresar"<<endl<<endl<<"-> ";
		cin>>op2;
		
		switch(op2){
			case 'a':
				crearConjunto(1);
			break;
			case 'b':
				crearConjunto(2);
			break;
			case 'c':
				cout<<"\n====================================================================="<<endl;
				cout<<"|  [MENSAJE]: Regresando al men"<<u<<" principal, gracias por utilizarnos  |"<<endl;
				cout<<"====================================================================="<<endl;
				menuPrincipal();
			break;
			default:
				cout<<"\n==============================================="<<endl;
				cout<<"|  [ERROR]: La opci"<<o<<"n elegida no es correcta  |"<<endl;
				cout<<"==============================================="<<endl;
			break;	
		}
	
	}while(op2 != 'c');
}

void subMenuLlenar(){
	//system("cls");
	do{
		cout<<"\n\t*****************"<<endl;
		cout<<"\t|    SUB-MEN"<<U<<"   |"<<endl;
		cout<<"\t*****************"<<endl;
		cout<<"a). Llenar Conjunto A\nb). Llenar Conjunto B\nc). Regresar"<<endl<<endl<<"-> ";
		cin>>op3;
		
		switch(op3){
			case 'a':
				llenarConjunto(1);
			break;
			case 'b':
				llenarConjunto(2);
			break;
			case 'c':
				cout<<"\n====================================================================="<<endl;
				cout<<"|  [MENSAJE]: Regresando al men"<<u<<" principal, gracias por utilizarnos  |"<<endl;
				cout<<"====================================================================="<<endl;
				menuPrincipal();
			break;
			default:
				cout<<"\n==============================================="<<endl;
				cout<<"|  [ERROR]: La opci"<<o<<"n elegida no es correcta  |"<<endl;
				cout<<"==============================================="<<endl;
			break;	
		}
	}while(op3 != 'c');
}

void subMenuMostar(){
	//system("cls");
	do{
		cout<<"\n\t*****************"<<endl;
		cout<<"\t|    SUB-MEN"<<U<<"   |"<<endl;
		cout<<"\t*****************"<<endl;
		cout<<"a). Mostar Conjunto A\nb). Mostrar Conjunto B\nc). Regresar"<<endl<<endl<<"-> ";
		cin>>op4;
		
		switch(op4){
			case 'a':
				if(conjuntoA[0] == '\0'){
					cout<<"\nEl conjunto A esta vacio "<<endl;
				}else if(conjuntoA[0] != '\0'){
					mostrarConjuntos(1);
				}
			break;
			case 'b':
				if(conjuntoB[0] == '\0'){
					cout<<"\nEl conjunto B esta vacio "<<endl;
				}else if(conjuntoB[0] != '\0'){
					mostrarConjuntos(2);
				}
			break;
			case 'c':
				cout<<"\n====================================================================="<<endl;
				cout<<"|  [MENSAJE]: Regresando al men"<<u<<" principal, gracias por utilizarnos  |"<<endl;
				cout<<"====================================================================="<<endl;
				menuPrincipal();
			break;
			default:
				cout<<"\n==============================================="<<endl;
				cout<<"|  [ERROR]: La opci"<<o<<"n elegida no es correcta  |"<<endl;
				cout<<"==============================================="<<endl;
			break;	
		}
	
	}while(op4 != 'c');
}

void subMenuOperar(){
	//system("cls");
	do{
		cout<<"\n\t*****************"<<endl;
		cout<<"\t|    SUB-MEN"<<U<<"   |"<<endl;
		cout<<"\t*****************"<<endl;
		cout<<"a). Conjunto uni"<<o<<"n\nb). Conjunto Intersecci"<<o<<"n\nc). Subconjunto\nd). Conjunto diferencia\ne). Relaci"<<o<<"n Binaria\nf). Regresar"<<endl<<endl<<"-> ";
		cin>>op5;
		
		switch(op5){
			case 'a':
				funcionUnion();
			break;
			case 'b':
				funcionInterseccion();
			break;
			case 'c':
				funcionSubconjunto();
			break;
			case 'd':
				funcionDiferencia();
			break;
			case 'e':
				subMenuRelacionBinaria();
			break;
			case 'f':
				cout<<"\n====================================================================="<<endl;
				cout<<"|  [MENSAJE]: Regresando al men"<<u<<" principal, gracias por utilizarnos  |"<<endl;
				cout<<"====================================================================="<<endl;
				menuPrincipal();
			break;
			default:
				cout<<"\n==============================================="<<endl;
				cout<<"|  [ERROR]: La opci"<<o<<"n elegida no es correcta  |"<<endl;
				cout<<"==============================================="<<endl;
			break;	
		}
	}while(op5 != 'f');
}

void crearConjunto(int metodo1){
	if(metodo1 == 1){
		do{
			cout<<"\nDigite la cantidad de Elementos para el conjuto A (Máximo de 20 espacios): ";
			cin>>tamA;
			cout<<endl;
			if(tamA > 20){
				cout<<"=========================================="<<endl;
				cout<<"| [MENSAJE-ERROR]: M"<<a<<"ximo de 20 espacios |"<<endl;
				cout<<"=========================================="<<endl;
			}
		}while(tamA < 0 || tamA > 20);
		cout<<">> El conjunto A fue creado correctamente!"<<endl;	
	}
	if(metodo1 == 2){
		do{
			cout<<"\nDigite la cantidad de Elementos para el conjuto B (Máximo de 20 espacios): ";
			cin>>tamB;
			cout<<endl;
			if(tamB > 20){
				cout<<"=========================================="<<endl;
				cout<<"| [MENSAJE-ERROR]: M"<<a<<"ximo de 20 espacios |"<<endl;
				cout<<"=========================================="<<endl;
			}
		}while(tamB < 0 || tamB > 20);
		cout<<">> El conjunto B fue creado correctamente!"<<endl;	
	}
}

void llenarConjunto(int metodo2){
	if(metodo2 == 1){
		for(int i=0; i<tamA; i++){
			cout<<"\nEscriba el elemento en el conjunto A: ";
			cin>>conjuntoA[i];
		}		
		cout<<"\nElementos guardados correctamente!"<<endl;
	}
	if(metodo2 == 2){
		for(int i=0; i<tamB; i++){
			cout<<"\nEscriba el elemento en el conjunto B: ";
			cin>>conjuntoB[i];
		}	
		cout<<"\nElementos guardados correctamente!"<<endl;
	}
}

void mostrarConjuntos(int metodo3){
	if(metodo3 == 1){
		cout<<"\nConjunto A = {";
		for(int i=0; i<tamA; i++){
			cout<<conjuntoA[i]<<", ";
		}
		cout<<"} "<<endl;
	}if(metodo3 == 2){
		cout<<"\nConjunto B = {";
		for(int i=0; i<tamB; i++){
			cout<<conjuntoB[i]<<", ";
		}
		cout<<"} "<<endl;
	}
}

void funcionUnion(){
	int aux21=0,aux7=0;
	for(int i=0; i<tamA; i++){
		conjuntoAUB[i]=conjuntoA[i];
	}
	aux21=tamA;
	for(int i=0; i<tamB; i++){
		for(int j=0; j<tamA+tamB; j++){
			if(conjuntoB[i]==conjuntoAUB[j]){
				aux7=1;
			}
		}
		if(aux7==0){
			conjuntoAUB(aux21) = conjuntoB[i];
			aux21++;		
		}
	}
		
	/*int y=0;
	for(int i=0; i<tamA; i++){
		conjuntoAUB[y] = conjuntoA[i];
		y++;
		for(int j=0; j<tamB;){
			for(int x=0; x<sizeof(conjuntoAUB)/4; x++){
				if(conjuntoAUB[x] != conjuntoB[j]){
					conjuntoAUB[y] = conjuntoB[j];
				i++;
				y++;
				j++;
				}	
			}
		}
	}*/
	if(conjuntoAUB[0] == '\0'){
		cout<<"\nEl conjunto AUB esta vacio "<<endl;
	}else{
		cout<<"\nConjunto AUB = {";
		for(int i=0; i<sizeof(conjuntoAUB)/4; i++){
			if(conjuntoAUB[i] > 0){
				cout<<conjuntoAUB[i]<<", ";
			}
		}
		cout<<"} "<<endl;
	}
}

void funcionInterseccion(){
	int x=0;
	for(int i=0; i<tamA; i++){
		for(int j=0; j<tamB; j++){
			if(conjuntoA[i] == conjuntoB[j]){
				conjuntoAnB[x] = conjuntoA[i];
				x++;
			}
		}
	}
	if(conjuntoAnB[0] == '\0'){
		cout<<"\nEl conjunto AnB esta vacio "<<endl;
	}else{
		cout<<"\nConjunto AnB = {";
		for(int i=0; i<sizeof(conjuntoAnB)/4; i++){
			if(conjuntoAnB[i] > 0){
				cout<<conjuntoAnB[i]<<", ";
			}
		}
		cout<<"} "<<endl;
	}
}

void funcionSubconjunto(){	
	for(int i = 0; i < tamA; i++){
		for(int j = 0; j < tamB; j++){
			if(conjuntoA[i] == conjuntoB[j]){
				conjuntoSub[i] = conjuntoA[i];	
			}else if(conjuntoB[j] == conjuntoA[i]){
				conjuntoSub[i] = conjuntoB[j];
			}
		}
	}
	if(conjuntoSub[0] == '\0'){
		cout<<"\nEs un conjunto vacio o no hay sub conjunto "<<endl;
	}else if(conjuntoSub[0] == conjuntoB[0]){
		cout<<"\nConjunto A subconjunto B = {";
		for(int i=0; i<tamA; i++){
			if(conjuntoSub[i] > 0){
				cout<<conjuntoSub[i]<<", ";
			}
		}
		cout<<"} "<<endl;
	}
	else if(conjuntoSub[0] == conjuntoA[0]){
		cout<<"\nConjunto B subconjunto A = {";
		for(int i=0; i<tamB; i++){
			if(conjuntoSub[i] > 0){
				cout<<conjuntoSub[i]<<", ";
			}
		}
		cout<<"} "<<endl;
	}else{
		cout<<"no hay sub conjunto ";
	}
}

void funcionDiferencia(){
	
	int aux3, aux4;
	for(int i=0; i<tamA; i++){
		for(int j=0; j<tamA-1; j++){
			if(conjuntoA[j] > conjuntoA[j+1]){
				aux3 = conjuntoA[j];
				conjuntoA[j] = conjuntoA[j+1];
				conjuntoA[j+1] = aux3;
			}
		}
	}
	for(int i=0; i<tamB; i++){
		for(int j=0; j<tamB-1; j++){
			if(conjuntoB[j] > conjuntoB[j]){
				aux4 = conjuntoB[j];
				conjuntoB[j] = conjuntoB[j+1];
				conjuntoB[j+1] = aux4;
			}
		}
	}
	for(int i = 0; i < tamA; i++){
		for(int j = 0; j < tamB; j++){
			if(conjuntoA[i] == !conjuntoB[j]){
				aux3 = conjuntoA[i];
				conjuntoDif[i] = aux3;
			//}else if(conjuntoB[j] == conjuntoA[i]){
				//conjuntoR[i] = conjuntoB[j];
			}
		}
	}
	cout<<"\nConjunto A diferencia B = {";
	for(int i=0; i<aux3; i++){
		cout<<conjuntoDif[i]<<", ";
	}
	cout<<"} "<<endl;
}

void subMenuRelacionBinaria(){
	do{
		cout<<"\n\t*****************"<<endl;
		cout<<"\t|    SUB-MEN"<<U<<"   |"<<endl;
		cout<<"\t*****************"<<endl;
		cout<<"a). Relacion binaria A R B \nb). Relacion binaria B R A \nc). Regresar"<<endl<<endl<<"-> ";
		cin>>op6;
		
		switch(op6){
			case 'a':
				funcionRelacionBinaria(1);
			break;
			case 'b':
				funcionRelacionBinaria(2);
			break;
			case 'c':
				cout<<"\n====================================================================="<<endl;
				cout<<"|  [MENSAJE]: Regresando al men"<<u<<" principal, gracias por utilizarnos  |"<<endl;
				cout<<"====================================================================="<<endl;
				subMenuOperar();
			break;
			default:
				cout<<"\n==============================================="<<endl;
				cout<<"|  [ERROR]: La opci"<<o<<"n elegida no es correcta  |"<<endl;
				cout<<"==============================================="<<endl;
			break;	
		}
	
	}while(op6 != 'c');
}

void funcionRelacionBinaria(int metodo4){
	if(metodo4 == 1){
		cout<<"\nConjunto A R B = {";
		for(int i=0; i<tamA; i++){
			for(int j=0; j<tamB; j++){
				cout<<"("<<conjuntoA[i]<<", "<<conjuntoB[j]<<"),";
			}
		}
		cout<<"} "<<endl;
	}
	if(metodo4 == 2){
		cout<<"\nConjunto B R A = {";
		for(int i=0; i<tamB; i++){
			for(int j=0; j<tamA; j++){
				cout<<"("<<conjuntoB[i]<<", "<<conjuntoA[j]<<"),";
			}
		}
		cout<<"} "<<endl;
	}
}
