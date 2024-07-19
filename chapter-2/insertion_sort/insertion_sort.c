#include<stdio.h>

void read_array(int* arr, int n){
    for(int i=0; i<n; i++){
        printf("input element-%d of array: ", i+1);
        scanf("%d", arr+i);
    }
}

void print_array(int* arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

void insertion_sort(int* arr, int n){
    for(int i=1; i<n; i++){
        int key = *(arr+i);
        int j = i-1;
        while(j>=0 && *(arr+j) > key){
            *(arr+j+1) = *(arr+j);
            j = j-1;
        }
        *(arr+j+1) = key;
    }
}

int main(){
    int* arr;
    int n;

    printf("input array length: ");
    scanf("%d", &n);

    read_array(arr, n);
    print_array(arr, n);

    insertion_sort(arr, n);
    print_array(arr, n);

    return 0;
}