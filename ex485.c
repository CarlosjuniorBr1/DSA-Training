#include <stdio.h>

// numero da questão: 485 

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int aux = 0;
    int max = 0;
    for(int i = 0; i < numsSize; i++ ){

        if(nums[i] == 1 ) aux++;
        else{
            if( max < aux ) max = aux;
            aux = 0;
        } 
    }
    if( max < aux ) max = aux;

    return max;
}

int main(){

    int nums[] = {1, 1, 0, 1, 1};

    printf("%d\n", findMaxConsecutiveOnes(nums,6));
    return 0;
}