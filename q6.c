#include <stdio.h>
int main(){
    int i = 1;
    printf("The First 10 Even Natural Numbers are: \n");
    while (i <= 10){
        printf("%d \t", 2 * i);
        i++;
    }
    return 0;
}