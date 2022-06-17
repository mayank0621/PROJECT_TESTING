//CODE FOR CPU PROFILING//

#include <stdlib.h>
#include<stdio.h>
#include <unistd.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int *ptr = (int *) malloc(sizeof(int));
    int x;
    
for (int i = 0; i < argc; ++i)
{
    printf("Arguments at index %d is: %s\n",i,argv[i]);
}

if(argc>1){

     x = atoi(argv[1]);
   if(x==1000)
    {
            usleep(1000);
            {
            printf("Wait for 1000 ms.\n");
            }
        }

        else if(x==2000)
    {
            usleep(2000);
            {
            printf("Wait for 2000 ms.\n");
            }
        }

    else{
        printf("infinite while loop start....\n");
        
        while(1);
        
    }

}
return 0;
}

    





