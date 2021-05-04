#include<stdio.h>

void insert(int arr[],int l, int ele, int pos){

for(int i=pos;i<l;i++){
        if(i==(l-1)){
            break;
        }
    arr[i+1]=arr[i];

}
arr[pos]=ele;
}
void main(){
    printf("enter the size of your array");
    int size;
    scanf("%d",&size);
int a[size];

int b;
printf("enter the number of elements in the array(LESS THAN %d)",size);
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
int ele,pos;
printf("\nenter the element to be inserted in array \n");
scanf("%d",&ele);
printf("enter the index where it has to be inserted \n");
scanf("%d",&pos);

insert(a,size,ele,pos);
for(int j=0;j<=num_ele;j++){
    printf(" %d ",a[j]);

}
}
