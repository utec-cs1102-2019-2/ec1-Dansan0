#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

vector<vector<int>> crear(int filas, int columnas);

vector<int> sumar_filas(vector<vector<int>>&matriz);
vector<int> sumar_columnas(vector<vector<int>>&matriz);

void imprimir_matriz(vector<vector<int>>matrix);

void imprimir_vector(vector<int>v);


int main(){
    srand(time(nullptr));
    vector<vector<int>>matriz=crear(rand()%10,rand()%10);

    imprimir_matriz(matriz);
    vector<int>col=sumar_columnas(matriz);
    vector<int>fil=sumar_filas(matriz);
    cout<<"Suma de columnas:"<<endl;
    imprimir_vector(col);
    cout<<endl<<"Suma de filas:"<<endl;
    imprimir_vector(fil);

    return 0;}


vector<vector<int>> crear(int filas, int columnas){
    vector<int>col(columnas,0);
    vector<vector<int>>matrix(filas,col);
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            matrix[i][j]=rand()%10;
        }
    }return matrix;}

void imprimir_matriz(vector<vector<int>>matrix){
    for (int i=0;i<matrix.size();i++){
        for (int j=0;j<matrix[i].size();j++){
            cout<< matrix[i][j]<<"\t";
        }cout<<endl;}}

vector<int> sumar_filas(vector<vector<int>>&matriz){
    vector<int>suma_filas(matriz.size(),0);
    int suma=0;
    for (int i=0;i<matriz.size();i++){
        for (int j=0;j<matriz[i].size();j++) {
            suma += matriz[i][j];
        }
        suma_filas[i]=suma;
        suma=0;
        }
return  suma_filas; }

vector<int> sumar_columnas(vector<vector<int>>&matriz){
    vector<int>suma_columnas(matriz[0].size(),0);
    int suma=0;
    for (int i=0;i<matriz.size();i++){
        for (int j=0;j<matriz[i].size();j++){
            suma+=matriz[j][i];
        }
        suma_columnas[i]=suma;
        suma=0;
    }
return suma_columnas;}

void imprimir_vector(vector<int>v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
}