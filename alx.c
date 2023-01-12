#include <stdio.h>


/**
 * main - this is the entry point
 * Description: this is where the program will kick start, it takes no
 * command line argument, and it return on success
 * Return: it return 0 on success or 1 on failure
*/
int main(){
    int x = 0;
    int y = 0;

    while (x < 5){

        if (y < 5){
            x = x + 1;
            if (y < 3)
                x = x - 1;
        }
        y = y + 2;
        printf("%i%i ", x, y);
        x = x + 1;
    }
    return 0;
}