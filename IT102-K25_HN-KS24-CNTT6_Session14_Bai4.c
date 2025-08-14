#include <stdio.h>
int maxArr(int array[], int size){
    int max = array[0];
    for (int i = 0; i < size; i++)
        if (max < array[i]) {
            max = array[i];
        }
    return max;
}

int main () {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    printf ("So lon nhat trong mang la : %d", maxArr(arr, size));
    return 0;
}