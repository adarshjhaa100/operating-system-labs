#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<assert.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    
    char *str = argv[1];

    while(1){
        sleep(1);
        printf("\nVar: %s\n", str);
    }

    return 0;
}


