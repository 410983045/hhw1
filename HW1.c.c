#include <stdio.h>


int main(){


  int i,j;
     for(i= 1; i<= 9; i++){                 // 1*1~9*1
        for(j= 1; j<= 9; j++){              // 1*1~1*9
           printf("%d*%d=%d ", i, j, i*j);


        }

     printf("\n");



     }





return 0;
}
