#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    pid_t pid; 

	pid = fork()
    
    if(pid < 0 ){
    	
        perror("fork");
        exit(1);
 
    }

    if (pid == 0)
    {
        printf("pid do Filho: %d\n", getpid());
    }
    else
    {
        printf("pid do Pai: %d\n", getpid());
    }


    return 0;
}
