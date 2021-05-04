#include<stdio.h>

int search(int arr[],int l,int ele){
    int count=120;
for(int i=0;i<l;i++){
    if(arr[i]==ele){
       count=i;
        break;
    }

}
return count;

}
void main(){
int arr[]={1,2,3,71};
printf("enter the element to be searched: ");
int ele;
scanf("%d",&ele);
int b=search(arr,5,ele);

if(b!=120){
    printf("\nthe element is present at %d index",b);
}
else{
    printf("\nthe element could not be found");
}

}
