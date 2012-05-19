#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc,char * agrv[]){
    
    pid_t childpid  = 0;
    int i,n;
    if (argc != 2){
        fprintf(stderr,"Usage:%s processes \n ",agrv[0]);
        return 1;
    }
    n = atoi(argv[1])
    for (i = 1; i < n; i++)
        if (childpid = fork())
            break;
    fprintf(stderr,"i :%d process Id:%ld,parent ID:%ld child ID:%ld\n",
            i,(long)getpid(),(long)getppid(),(long)childpid);
    return 0;
}
