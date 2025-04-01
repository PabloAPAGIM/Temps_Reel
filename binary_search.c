#include <stdio.h>


int Binary_Search(int *arr, int length,int target){
    
    int L=0;
    int R=length-1;
    while(L<=R){
        int mid= (R+L)/2;

        if (arr[mid]<target){
            L=mid+1;
        }
        else if(arr[mid]>target){
            R=mid-1;
        }
        else{
            return mid;
        }
        
    }
    return -1;
}
void shorting(int * arr, int size){
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(void){
    /*
    int arr[25] = {3, 7, 12, 18, 22, 27, 31, 36, 41, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110, 115, 120};
    int length= sizeof(arr) / sizeof(arr[0]);
    int Value_Search=115;

    //int result= Binary_Search(arr,length, Value_Search);
    */
    //printf("The number %d is in the possition %d",Value_Search, result);
    int arr2[] = {50, 23, 75, 12, 9, 64, 34, 87, 19, 5};
    
    int length2= sizeof(arr2) / sizeof(arr2[0]);
    /*
    for (int i = 0; i < length2; i++) {
        printf("%d ", arr2[i]);
    }
    */
    shorting(arr2,length2);
    
    for (int i = 0; i < length2; i++) {
        printf("%d ", arr2[i]);
    }
    
}