#include<stdio.h>

void sort(int arr[], int n){
    for (int i = 0; i < n - i - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if  (arr[j] < arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print(int arr[], int n, char* title){
    printf("%s", title);
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(){
    const int SIZE = 5;
    int scores[SIZE] = {10, 60, 70, 90, 100,};
    char title[] = "scores = ";
    print(scores, SIZE, title);
    sort(scores, SIZE);
    char title2[] = "results = ";
    print(scores, SIZE, title2);
    return 0 ;
}