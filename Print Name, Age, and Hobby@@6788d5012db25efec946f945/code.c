#include <stdio.h>

int main() {
    char name[100] , hobby[100];
    int age ;
    scanf("%99s" , name );
    scanf("%d" , &age);
    scanf("%99s" , hobby);
    printf("Name: %s\n",name);
    printt("Age: %d\n" , age);
    printf("Hobby: %s\n", hobby);
    return 0 ;
}