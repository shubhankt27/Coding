#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int hrg(int a[6][6]){
    int sum1=-9999, sum2=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum2=0;
            sum2+= a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
            if(sum2>sum1){
                sum1=sum2;
                continue;
            }
            else
                continue;
        }
    }
    return sum1;
}
int main(){
    int arr[6][6], sum=0;
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    sum = hrg(arr);
    printf("%d", sum);
    return 0;
}
