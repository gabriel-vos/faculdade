#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int naoeprimo(int num) {
    int i;
    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            return 1;
        }
    }
    return 0;    
}

int main()
{
    int i, par;
    for (i = 2; i <= 1000; i++)
    {
        par = naoeprimo(i);
        if (par == 0)
        {
            printf("%d - ", i);
        }
    }
}