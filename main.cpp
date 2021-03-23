#include <iostream>

int getLength (int array[]){
    return sizeof(array)/sizeof(int);
}
int main() {
    int intArray[5];
    std::cout<<"Tamanho array " << getLength(intArray) <<std::endl;
    return 0;
}
