#include <iostream>
int main() {
int a=0;
int *puntero;
puntero=&a;
int **aa=&puntero;
std::cout << "Hello, World!" << std::endl;
return 0;
}
