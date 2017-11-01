#include <stdio.h>
#include <cs50.h>
#include <math.h>

int input;
long factorialize (int);
int main()
{
    //printf("testing\n");
    factorialize(input);
}

long factorialize()
{
   // int input;

        printf("Enter number to factorialize\n");
        input = get_int();


  if (input == 0) {
        return 1;

    }

    int checkit = input * factorialize(input-1);
    printf("%i", checkit);
    //printf("%i", input * factorialize(input-1));

    return false;
}

// function factorialize(num){
//   if (num === 0) {return 1;}
//   return num * factorialize(num-1);
// }

//factorialize(5);
