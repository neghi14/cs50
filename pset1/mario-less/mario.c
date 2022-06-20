#include <cs50.h>
#include <stdio.h>

//init code
int main (void){

//initialize the variable
    int h;
    //initialize input
    do{
        h = get_int("What's your Height: ");
    }
    //Check to validate input
    while (h < 1 || h > 8);

    //row
        for (int i =0 ; i < h; i++){

            for(int k = 0; k < h - i - 1; k++){
                printf(" ");
            }
            for(int j = 0; j <= i; j++){
            printf("#");
            }
             printf("\n");
        }

}