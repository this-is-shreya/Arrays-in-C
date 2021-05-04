#include<stdio.h>

void transpose(int n, int a[n][n]){
int c[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        c[j][i]=a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=c[i][j];
    }
}

}
void main(){
int n;
printf("enter the number of rows in matrix\n");
//we are assuming it's a n x n matrix
scanf("%d",&n);
int a[n][n];

printf("enter the matrix\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int c;
        printf("enter a[%d][%d] ",i,j);
        scanf("%d",&c);
        a[i][j]=c;
    }
}printf("given matrix\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf(" %d ",a[i][j]);
    }
    printf("\n");
}
transpose(n,a);
printf("after transpose we get\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf(" %d ",a[i][j]);
    }
    printf("\n");
}


}
