#include <stdio.h>

int main() {
    int i ,j , k ;
    scanf("%d" ,&j);
    for (i = 1 ; i <= j ; i++){
        for (j = 1 ; j<=i ; j++){
            printf("*\n");
        }
        printf("\n")
    }
    return 0;

}