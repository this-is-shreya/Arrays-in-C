#include<stdio.h>

void multiply(int n,int a[n][n],int b[n][n], int ans[n][n]){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        ans[i][j]=0;
        for(int k=0;k<n;k++){
            ans[i][j]=ans[i][j]+a[i][k]*b[k][j];
        }
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
int c[n][n];
multiply(n,a,b,c);

printf("after multiplication we get\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf(" %d ",c[i][j]);
    }
    printf("\n");
}

}
