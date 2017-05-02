#include <iostream>

using namespace std;

int main(){

  int arregloEstatico[5];

  cout<<"Dir arr: "<<arregloEstatico<<endl;
  //Apuntador de enteros
  int*apuntador=arregloEstatico;

  cout<<"Dir ptr: "<<apuntador<<endl;
  //Inicializar
  for(int i=0;i<5;i++){
    arregloEstatico[i]=i+1;
  }
	
  cout<<" Contenido de ptr: "<<endl;
  //Imprimir contenido
  for(int i=0;i<5;i++){
    cout<<apuntador[i]<<endl; 
  }
  
  cout<<" _____________"<<endl;
  cout<<*(apuntador+4)<<endl;

  apuntador = new int[10];

  cout<<"Dir arreglo en heap: "<<apuntador<<endl;
 
  //Liberar memoria
  delete[]apuntador; 
  
  apuntador=NULL;

  delete[]apuntador;


  //Matrices
  int**matriz;

  matriz = new int*[5];

  for(int i=0;i<5;i++){
    matriz[i]=new int [5]; 
  }

  //Poblar matriz
  for(int i=0;i<5;i++){
    for(int j=0;i<5;i++){
      matriz[i][j]=i*j;
    }
  }
  //Usar la matriz
  


  //Liberar la memoria
  for(int i=0;i<5;i++){
    delete[]matriz[i];
  }

  delete[]matriz;
  return 0;
}
