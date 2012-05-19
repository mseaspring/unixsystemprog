#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t childpid;
    pid_t mypid;
    mypid = getpid()
    childpid = fork()
    if (childpid == -1){
        perr("Failed to fork");
    }
    if (childpid == 0)
        printf("I am a child %ld,ID=%ld",(long)getpid(),(long)mypid);
    else
        printf("I am a parent %ld,ID = %ld",(long)getpid(),(long)mypid);
}

