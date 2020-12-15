#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;              
struct nodo{ //nodo para las pilas
	int dato;
	struct nodo *siguiente;
};
typedef struct nodo Nodo;

typedef struct nodo2{ //nodos para la cola
	int dato;
	struct nodo2* siguiente;
} nodo2;

struct treenodo {
   struct treenodo *izqptr;  		//puntero al nodo izquierdo
   int dato;     			//dato del nodo
   struct treenodo *derptr; };		// puntero al nodo derecho

struct node{ //nodo para las listas
	int dato;
	node *siguiente;
};

nodo2* primero = NULL;
nodo2* ultimo = NULL;

 //protopitos de las funciones
void insertarLista(node *&,int);
void eliminarNodo(node *&lista, int n);
void mostrarLista(node *);
void insertarNodo();
void eliminarNodo();
void mostrarCola();
void postorden(treenodo *nodo);
void inorden(treenodo *nodo);
void preorden(treenodo *nodo);

Nodo *crearPila(Nodo *pila);
Nodo *push(int valor, Nodo *pila);
Nodo *pop(Nodo *pila);
void mostrarPila(Nodo *pila);
int pilaVacia(Nodo *pila);
Nodo *topePila(Nodo *pila);

void crear(treenodo *nodo);


int main(int argc, char** argv) {
	
	node *lista = NULL;
	
	Nodo *pila;
	int valor,dato;
	pila = crearPila(pila);
		
	int op,op2;
	do{
	system("cls");
	cout<< "\tMENU PRINCIPAL\n";
	cout<< "\n1. PILAS";
	cout<< "\n2. COLAS";
	cout<< "\n3. ARBOLES";
	cout<< "\n4. LISTAS";
	cout<< "\n5. SALIR\n";
	cout<< "\nELEGIR OPCION (1-5): ";
	 cin>>op;
	 
	 switch(op){
	 	case 1: 
	 		do{
			 
	 		system("cls");
	 		cout<< "\t OPERACIONES CON PILAS\n";
	 		cout<< "\n1. INSERTAR";
	 		cout<< "\n2. EXTRAER";
	 		cout<< "\n3. VISUALIZAR";
	 		cout<< "\n4. SALIR\n";
	 		cout<< "\nELEGIR OPCION (1-4): ";
	 		cin>>op;
	 		switch(op){
	 		case 1:
			 system("cls");
			 cout<<"\tINSERTAR\n";
			 cout<<"\nDIGITE EL ELEMENTO A INSERTAR A LA PILA: ";
			 cin>>valor;
			 pila =push(valor,pila);
			 cout<<"\nSE INSERTO EL ELEMENTO A LA PILA";
			 cout<<"\n";
			 system("pause");	
	 		break;
	 		
	 		case 2:
			 system("cls");
			cout<<"\tEXTRAER\n";
			pila = pop(pila);
			cout<<"\nSE ELIMINO EL ELEMETO DEL TOPE DE LA COLUMNA"; 
			cout<<"\n";
			 system("pause");	
	 		break;
	 		
	 		case 3:
			 system("cls");
			 cout<<"\tVISUALIZAR PILA";
			 mostrarPila(pila);
			 cout<<"\n";
			 system("pause");	
	 		break;
	 		
	 		
	 	}
			 }while(op!=4);
			 break;
			 
			 case 2:
		do{
		
		system("cls");
		cout<<"\t OPERACIONES CON COLAS\n";
		cout<<"\n1. INSERTAR";
		cout<<"\n2. EXTRAER";
		cout<<"\n3. VISUALIZAR";
		cout<<"\n4. SALIDA\n";
		cout<<"\nESCOGER OPCION (1-4): ";
		cin>>op;
		switch(op){
			case 1: 
			system("cls");
			cout<<"\tINSETAR";
			insertarNodo();
			cout<<"\n";
			system("pause");
			break;
			
			case 2: 
			system("cls");
			cout<<"\tEXTRAER";
			eliminarNodo();
			printf("\n");
			system("pause");
			break;
			
			case 3: 
			system("cls");
			cout<<"\tVISUALIZAR COLA";
			mostrarCola();
			cout<<"\n";
			system("pause");
			break;
		}
		
		
	}while(op!=4);break;
	
	case 3:
		do{
		system("cls");
		cout<<"1. CREAR ARBOL";
		cout<<"\n2. RECORRIDO PREORDEN";
		cout<<"\n3. RECORRIDO POSTORDEN";
		cout<<"\n4. RECORRIDO INORDEN";
		cout<<"\n5. SALIR\n";
		cout<<"\nELEGIR OPCION (1-5): ";
		cin>>op2;
		
		switch(op2){
			case 1: 
			system("cls");
			cout<<"\t CREAR ARBOL";
			treenodo *nodo;   // puntero al nodo
			nodo= new treenodo;
			crear (nodo);
			system("cls");
			cout <<"\t\t\t\t  ---Arbol Binario Creado en memoria ---"<<endl;
			cout<<"\n";
			system("pause");
			break;
			
			case 2: 
			system("cls");
			cout<<"\t RECORRIDO PREORDEN\n";
			cout<<"\n";
			preorden(nodo);
			
			cout<<"\n";
			system("pause");
			break;
			
			case 3: 
			system("cls");
			cout<<"\t RECORRIDO POSTORDEN\n";
			cout<<"\n";
			postorden(nodo);
			cout<<"\n";
			system("pause");
			break;
			
			case 4: 
			system("cls");
			cout<<"\t RECORRIDO INORDEN\n";
			cout<<"\n";
			inorden(nodo);
			cout<<"\n";
			system("pause");
			break;	
		}
}while(op2!=5);break;

	case 4:
		do{
		
		system("cls");
		cout<<"\tLISTAS ENLAZADAS\n";
		cout<<"\n1. INSERTAR ELEMENTOS";
		cout<<"\n2. ELIMINAR ELEMENTO";
		cout<<"\n3. RECORRER LISTA";
		cout<<"\n4. SALIR\n";
		cout<<"\nELEGIR OPCION (1-5): ";
		cin>>op;
		switch(op){
			case 1:
				system("cls");
				cout<<"\tINTODUCIR ELEMENTO\n";
				
				cout<<"\nDIGITE EL ELEMENTO A INSERTAR EN LA LISTA: ";
				cin>>dato;
				insertarLista(lista,dato);
				cout<<"\nELEMENTO INSERTADO";
				
				cout<<"\n";
				system("pause");
				break;
				
			case 2:
				system("cls");
				cout<<"\tELIMINAR ELEMENTO\n";
				cout<<"\nDIGITE EL ELEMENTO A ELIMINAR: ";
				cin>>dato;
				eliminarNodo(lista, dato);
				
				cout<<"\n";
				system("pause");
				break;	
				
				case 3:
				system("cls");
				cout<<"\tRECORRER LISTA\n";
				mostrarLista(lista);
				cout<<"\n";
				system("pause");
				break;	
				
				
		}
	}while(op!=4);
}
	}while(op!=5);				
						
	return 0;
}

Nodo *crearPila(Nodo *pila){ //creando la pila

	return pila = NULL;
}

int pilaVacia(Nodo *pila){ //verifica si la pila esta vacia
	if(pila==NULL){
		return 1;
	}
	return 0;
}

 Nodo*topePila(Nodo *pila){
 	return pila;
 }

Nodo *push(int valor,Nodo *pila){ //insertar elementos a la pila

	Nodo *NodoNuevo;
	NodoNuevo = (Nodo *) malloc(sizeof(Nodo));

	if(NodoNuevo!=NULL){

		NodoNuevo->dato=valor;
		NodoNuevo->siguiente=pila;
		pila=NodoNuevo;
	}
	
	return pila;

}

Nodo *pop(Nodo *pila){

	Nodo *nodoAux;
	if(!pilaVacia(pila)){
		nodoAux=pila;
		pila=pila->siguiente;
		free(nodoAux);
	}
	
	return pila;
}

void mostrarPila(Nodo *pila){ //se muestra la pila

	Nodo *nodoAux;
	nodoAux = pila;
	cout<<"\n-----------\n";

	while(nodoAux!=NULL){
		printf("%i\n",nodoAux->dato);
		nodoAux=nodoAux->siguiente;
	}
	cout<<"-----------";
}

void insertarNodo(){
	nodo2* nuevo = (nodo2*) malloc(sizeof(nodo2));
			cout<<"\nDIGITE EL ELEMENTO A INSERTAR A LA COLA: ";
	cin>>nuevo->dato;
	if(primero == NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = nuevo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
    cout<<"\nSE INSERTO EL ELEMENTO A LA COLA\n\n";

}


void eliminarNodo(){

    nodo2* actual = (nodo2*) malloc(sizeof(nodo2));
	actual = primero;
	nodo2* anterior = (nodo2*) malloc(sizeof(nodo2));
	anterior = NULL;
	 if (actual== NULL) {
     cout<<"\nNO SE PUEDEN ELIMINAR ELEMENTOS DE LA COLA, PORQUE ESTA VACIA (HAY SUBDESBORDAMIENTO)\n\n\n";

}
   else if(actual == primero){
    primero = primero->siguiente;
    cout<<"\nSE ELIMINO DE LA COLA EL ELEMETO QUE ESTA EN LA POSICION FRENTE Y SE CAMBIARON LAS POSICIONES DENTRO DE LA COLA\n\n";


}

}



void mostrarCola(){
	nodo2* actual = (nodo2*) malloc(sizeof(nodo2));
	actual = primero;
	if(primero != NULL){
    cout<<"\t \t \t \t\t\tCola Simple\n\n";
	cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
		while(actual != NULL){
			cout<<"\t" <<actual->dato << "\t|" ;
			actual = actual->siguiente;
		}
    cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
        cout<<"\t 0\t\t 1\t\t 2\t\t 3\t\t 4\t\t 5\t\t 6\n\n\n";
	}else{
        cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
        cout<<"\t   \t|\t   \t|\t   \t|\t   \t|\t   \t|\t   \t|\t   \t|";
        cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
        cout<<"\t 0\t\t 1\t\t 2\t\t 3\t\t 4\t\t 5\t\t 6";
		cout<<"\n\n\n\n La cola esta vacia\n\n";
	}

}

void crear(treenodo *nodo) 		//crea un  Árbol binario
{
char resp[1];
system("cls");
cout<< "ENTRE EL DATO: " ;
 cin>>nodo->dato;
cout <<"HAY NODOS A LA IZQUIERDA DE " << nodo -> dato << ". PRESIONE (S/N): ";
cin>>resp;
if (strcmp(resp, "S") == 0 || strcmp(resp, "s") == 0){
    nodo->izqptr= new (treenodo);
    crear(nodo->izqptr); }
else
    nodo->izqptr=NULL;
cout <<"HAY NODOS A LA DERECHA DE " << nodo -> dato << ". PRESIONE (S/N): ";
cin>>resp;
if (strcmp(resp, "S") == 0 || strcmp(resp, "s") == 0){
       nodo->derptr = new (treenodo);
       crear(nodo->derptr); }
else
       nodo->derptr= NULL;
return;
}

void preorden(treenodo *nodo){  //recorrido de preorden
	if(nodo!=NULL){
		cout<<nodo->dato<<" , ";
		preorden(nodo->izqptr);
		preorden(nodo->derptr);
		
	}
	
	
}

void inorden(treenodo *nodo){ //recorrido inorden
	if(nodo!=NULL){
		inorden(nodo->izqptr);
		cout<<nodo->dato<< " , ";
		inorden(nodo->derptr);
	}
	
}


void postorden(treenodo *nodo){ //recorrido postorden
	if(nodo!=NULL){
		postorden(nodo->izqptr);
		postorden(nodo->derptr);
		cout<<nodo->dato <<" , ";
	}
}


void insertarLista(node *&lista, int n){ // se agregan elementos a lista
	node *nuevo_nodo = new node();
	nuevo_nodo->dato = n;
	
	node *aux1 = lista;
	node *aux2;
	
	while((aux1 != NULL) && (aux1->dato <n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1 ){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
	
}

void eliminarNodo(node *&lista, int n){
	if(lista != NULL){
		node *aux_borrar;
		node *anterior = NULL;
		
		aux_borrar = lista;
		
		//recorrrer lista
		while((aux_borrar != NULL) && (aux_borrar->dato !=n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		
		//si el dato no ha sido encontrado
		if(aux_borrar == NULL){
		cout<<"\nEL ELEMENTO NO HA SIDO ENCONTRADO";	
		}
		
		//elemento a eliminar
		else if(anterior == NULL){
			lista = lista->siguiente;
			delete aux_borrar;
		}
		else{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}

void mostrarLista(node *lista){ 
	node *actual = new node();
	actual = lista;
	while(actual != NULL){ //muestra la lista de forma ordenada.
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
}
