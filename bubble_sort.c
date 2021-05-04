#include<stdio.h>

void bubblesort(int arr[],int l){
int temp;
for(int i=l;i>1;i--){
    for(int j=0;j<i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}

void main(){
int arr[]
={4,3,2,5};
bubblesort(arr,4);
printf("array is :\n");
for(int j=0;j<4;j++){
    printf(" %d ",arr[j]);

}
}
