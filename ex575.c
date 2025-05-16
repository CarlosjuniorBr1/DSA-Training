#include <stdio.h>

void bubbleSort(int array[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Troca os elementos adjacentes se estiverem fora de ordem
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int distributeCandies(int* candyType, int candyTypeSize) {

    bubbleSort(candyType, candyTypeSize);
    int qtd  = candyTypeSize/2;
    int dif = 1;
    for(int i = 1; i< candyTypeSize;  i++){

        if(candyType[i]  != candyType[i-1]){
            dif++;
        }
    }
    return (dif < qtd) ? dif : qtd;
    
}

int main(){

    int candyType[6] = {1,1,2,2,3,3};
    printf("%d\n", distributeCandies(candyType, 6));
}