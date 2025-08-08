#include <iostream>

void sort(int arr[], int size);
    
int main(){
    int arr[] = {10, 1, 1, 4, 6, 9, 2, 3, 7, 8};

    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);

    for (int element : arr) {
        std::cout << element << " ";
    }

    return 0;
}
void sort(int arr[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1; j++){
            if(arr[j]>arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}