#include <stdio.h>

int main() {
    int num[8]; 
    int i = 0;
    int n = 0;
    int b = 0;
    int k = 0;

//The part which takes the input ***************************************************************************************************
    printf("Enter 8 integer values:\n");

    for (int i = 0; i < 8;) {
        printf("Enter value: ");
        scanf("%d", &num[i]); 
        i++;
    }

//The part which print the given numbers ***************************************************************************************************
    printf("You entered the following values:\n");

    for(int i = 0;i < 8;){
        printf("%d",num[i]);
        printf(" ");
        i++;
        
    }
    printf(" \n");

//The sorting algorithem (New)

    for(int i = 0; i < 7; i++){
        while (n < 8){

            if (num[n] > num[n+1]){
                b = num[n];
                num[n] = num[n+1];
                num[n+1] = b;
                b = 0;}

            //To print the list
            for(int i = 0;i < 8;i++){
                printf("%d",num[i]);
                printf(" ");}

            printf(" \n");
            n++;
            }

        n=0;

      }
        

    return 0;
}
