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
   if(x==1)
    {
            sleep(1);
            {
            printf("Wait for 1 second.\n");
            }
        }

        else if(x==2)
    {
            sleep(2);
            {
            printf("Wait for 2 second.\n");
            }
        }

    else{
        printf("infinite while loop start....\n");
        
        while(1);
        
    }

}
return 0;
}

    





