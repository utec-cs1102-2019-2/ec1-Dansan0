#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;
vector<vector<int>> crear(int filas, int columnas);
void imprimir(vector<vector<int>>matrix);
void multiplicar(vector<vector<int>>&matrix,int filas, int columnas, int n);
vector<vector<int>>transpuesta(vector<vector<int>>&matrix,int filas, int columnas);

int main(){
srand(time(nullptr));
int filas=0, columnas=0,n=0;
cin>>filas;
cin>>columnas;
vector<vector<int>>matriz=crear(filas,columnas);
imprimir(matriz);
cout<<"Ingrese el valor con el multiplicar:";
cin>>n;
multiplicar(matriz,filas,columnas,n);
imprimir(matriz);
cout<<endl<<"Transpuesta:"<<endl;
vector<vector<int>>nuevo=transpuesta(matriz,filas,columnas);
imprimir(nuevo);

return 0;}

vector<vector<int>> crear(int filas, int columnas){
    vector<int>col(columnas,0);
    vector<vector<int>>matrix(filas,col);
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            matrix[i][j]=20+rand()% (41-20);
        }
    }
return matrix;}

void imprimir(vector<vector<int>>matrix){
    for (int i=0;i<matrix.size();i++){
        for (int j=0;j<matrix[i].size();j++){
            cout<< matrix[i][j]<<"\t";
        }cout<<endl;

    }
}
void multiplicar(vector<vector<int>>&matrix,int filas, int columnas, int n){
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            matrix[i][j]= matrix[i][j]*n;
        }
matrix;}}

vector<vector<int>>transpuesta(vector<vector<int>>&matrix,int filas, int columnas){
    vector<int>fil(filas,0);
    vector<vector<int>>aux(columnas,fil);
    for (int i=0;i<columnas;i++){
        for(int j=0;j<filas;j++){
            aux[i][j]=matrix[j][i];
        }
    }
return aux;}