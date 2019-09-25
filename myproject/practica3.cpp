#include <iostream>
using namespace std;

void imprimir_notas( int notas[], int n, int p);
int calcular_promedio(int notas[], int n);
int calcula_nota_mayor( int notas[], int n);
int calcula_nota_menor( int notas[], int n);
void eliminar_nota(int notas[], int n, int nota);

int main(){
    int n = 0;
    cout<<"Ingrese la cantidad de alumnos:";
    cin>>n;
    int *notas = new int[n];
    for(int i=0; i<n; i++){
        cin>>notas[i];
    }
    imprimir_notas(notas, n, 0);
    int p = calcular_promedio(notas, n);
    cout<<"El promedio es: "<<p<<endl;
    imprimir_notas(notas, n, p);
    cout<<"La nota mayor es: "<<calcula_nota_mayor(notas, n)<<endl;
    int menor_nota = calcula_nota_menor(notas, n);
    cout<<"La nota menor es: "<<menor_nota<<endl;
    eliminar_nota(notas, n, menor_nota);
    cout<<"Nuevo Promedio: "<< calcular_promedio(notas, n)<<endl;

    return 0;
}

void imprimir_notas( int notas[], int n, int p){
    cout<<"indice | \t valor"<<endl;
    cout<<"-------|--------------"<<endl;
    for(int i=0; i<n; i++){
        if(notas[i] > p){
            cout<<i<<"\t"<<notas[i]<<endl;
        }
    }
}

int calcula_nota_mayor( int notas[], int n){
    int mayor = 0;
    for(int i=0; i<n; i++){
        if(notas[i] > mayor){
            mayor = notas[i];
        }
    }
    return mayor;
}

int calcula_nota_menor( int notas[], int n){
    int menor = 9998998989898;
    for(int i=0; i<n; i++){
        if(notas[i] < menor){
            menor= notas[i];
        }
    }
    return menor;
}


int calcular_promedio(int notas[], int n){
    int suma = 0;
    int cant = 0;
    for(int i=0;i<n; i++){
        if(notas[i]>=0){
            suma = suma + notas[i];
            cant = cant+1;
        }
    }
    return suma/cant;
}

void eliminar_nota(int notas[], int n, int nota){
    for(int i=0;i<n; i++){
        if(notas[i] == nota){
            notas[i] = -1;
        }
    }
}