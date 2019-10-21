#include <stdio.h>
#define max(a,b) (a > b ? a : b)

int matrix[100][100] = {0};

int knapsack(int index, int size, int weights[],int values[]){
    int take,dontTake;

    take = dontTake = 0;

    if (matrix[index][size]!=0)
        return matrix[index][size];

    if (index==0){
        if (weights[0]<=size){
            matrix[index][size] = values[0];
            return values[0];
        }
        else{
            matrix[index][size] = 0;
            return 0;
        }
    }

    if (weights[index]<=size)
        take = values[index] + knapsack(index-1, size-weights[index], weights, values);

    dontTake = knapsack(index-1, size, weights, values);

    matrix[index][size] = max (take, dontTake);

    return matrix[index][size];

}

int main(){
    int nItems = 1;
    int knapsackSize = 10;
    int weights[1] = {500};
    int values[1] = {30};

    printf("Max value = %dn",knapsack(nItems-1,knapsackSize,weights,values));

    return 0;
}

