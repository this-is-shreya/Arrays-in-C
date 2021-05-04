#include<stdio.h>

void deletion(int arr[],int l,int pos){
for(int i=pos;i<l;i++){
    arr[i]=arr[i+1];
}

}

void main(){
printf("enter the size of your array");
    int size;
    scanf("%d",&size);
int a[size];
int b;
printf("enter the number of elements in the array",size);
int num_ele;
scanf("%d",&num_ele);
for(int i=0;i<num_ele;i++){
    printf("enter element \n");
    scanf("%d",&b);
    a[i]=b;
}
printf("array is :\n");
for(int j=0;j<num_ele;j++){
    printf(" %d ",a[j]);

}
int pos;

printf("\nenter the index of the element which has to be deleted \n");
scanf("%d",&pos);

deletion(a,size,pos);
num_ele--;
for(int j=0;j<num_ele;j++){
    printf(" %d ",a[j]);

}
}


