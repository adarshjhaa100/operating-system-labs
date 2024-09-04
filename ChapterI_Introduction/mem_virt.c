#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<assert.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    
    int *ptr = malloc(sizeof(int));

    while(1)
    {
        sleep(1);
        *ptr += 1;
        printf("\naddress: %p, value: %d\n", ptr, *ptr);
    }

    return 0;
}