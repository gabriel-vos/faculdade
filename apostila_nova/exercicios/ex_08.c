#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado()
{
    srand(time(0));
    return 1 + (rand() % 6);
}

int main()
{
    system("cls");
    printf("Voce girou o dado! O numero sorteado foi %d.", dado());
}