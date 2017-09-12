#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void * startFunction (void *paramX){

    printf("Entramos na Thread de X \n");

    int a=0
    while(a<2000){
        a++;
    }
    
    printf("Saimos na Thread de X \n");

    return NULL
}


int main()
{
    
    pthread_t threadStart;

    int x = 0;
    int y = 0;

    pthread_create(&threadStart, NULL, inc_x, &x);
 
    while(y<100){
        y++;
    }
    printf("Termino da contagem de Y \n");

    pthread_join(threadStart, NULL);


    return 0;
}


