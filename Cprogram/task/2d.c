#include<stdio.h>
void main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0;i<3;i++){
    for(int j=i;j<=i;j++){
        printf("%d ",arr[i][j]);

    }
    printf("\n");
}
}

