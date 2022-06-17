#include <stdlib.h>
#include<stdio.h>
#include <unistd.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int *ptr = (int *) malloc(sizeof(int));

for (int i = 0; i < argc; ++i)
{
    printf("Arguments at index %d is: %s\n",i,argv[i]);
}
    if(argc>1){
    if( ! strcmp(argv[1], "notleak")){
    free(ptr);
    printf("Memory leek not occured.\n");
    }
    
    
    
   else if ( ! strcmp(argv[1], "leak"))
    {
        printf("Memory leek  occured.\n");
    return 0;

}
    

else if ( ! strcmp(argv[1], "sleep")){
            sleep(1);
            printf("Wait for 1 second.\n");
        }   
    }
    
return 0;
    
}




