#include <stdio.h>
#include <stdlib.h>

//nhập mảng 10 phần tử từ 0 -> 9
void nhap_mang(int *ptr){
    for(int i=0; i<10; i++){
        ptr[i] = i;
    }
}

void xuat_mang(int *ptr){
    for(int i=0; i<10; i++){
        printf("%2d", ptr[i]);
    }
} 

void even(int *ptr){
    int *even = (int*)malloc(5*sizeof(int));
    printf("\neven: ");
    for(int i=0; i<10; i++){
        if(ptr[i]%2==0){
            even[i/2]=ptr[i];
            printf("%2d", even[i/2]);
        }
    }
}

void odd(int *ptr){
    int *odd = (int*)malloc(5*sizeof(int));
    printf("\n odd: ");
    for(int i=1; i<10; i++){
        if(ptr[i]%2==1){
            odd[i/2]=ptr[i];
            printf("%2d", odd[i/2]);
        }    
    }
}

int main()
{
    int *arr;
    arr = (int*)malloc(10*sizeof(int));

    nhap_mang(arr);
    printf("Mang: ");
    xuat_mang(arr);

    even(arr);
    odd(arr);
}