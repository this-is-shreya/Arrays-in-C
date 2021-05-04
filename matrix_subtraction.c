#include<stdio.h>

void subtract_matrix(int n,int a[n][n],int b[n][n]){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=a[i][j]-b[i][j];
    }
}

}
void main(){
int n;
printf("enter the number of rows in matrix\n");
//we are assuming it's a n x n matrix
scanf("%d",&n);
int a[n][n];
int b[n][n];
printf("enter the first matrix\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int c;
        printf("enter a[%d][%d] ",i,j);
        scanf("%d",&c);
        a[i][j]=c;
    }
}
printf("enter the second matrix\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int c;
        printf("enter b[%d][%d] ",i,j);
        scanf("%d",&c);
        b[i][j]=c;
    }
}printf("first matrix\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf(" %d ",a[i][j]);
    }
    printf("\n");
}printf("second matrix\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf(" %d ",b[i][j]);
    }
    printf("\n");
}
subtract_matrix(3,a,b);

printf("after subtraction we get\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf(" %d ",a[i][j]);
    }
    printf("\n");
}
}

