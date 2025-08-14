#include<stdio.h>
void displayArr(int array[]) {
    for (int i = 0; i < 5; i++) {
        printf("%d ",array[i]);
    }
}

int main() {
    int arr[5]  = {1,2,3,4,5};
    displayArr(arr);
    return 0;
}