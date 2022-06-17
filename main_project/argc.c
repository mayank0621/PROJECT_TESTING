#include <stdlib.h>
#include<stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int *ptr = (int *) malloc(sizeof(int));

for (int i = 0; i < argc; ++i)
{
    printf("Arguments at index %d is: %s\n",i,argv[i]);
}

    if(argc==1){
    free(ptr);
    printf("No memory leek.\n");
    }
    if(argc==2)
    {
        printf("Memory leek occured.\n");
    return 0;

}

if(argc==3){
            sleep(1);
            printf("Wait for 1 second.\n");
        }      
return 0;
    
}

