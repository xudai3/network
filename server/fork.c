#include <unistd.h>
#include <stdio.h>

int main()
{
    pid_t fpid;
    int cnt = 0;
    fpid = fork();
    if(fpid < 0)
        printf("error in fork");
    else if(fpid == 0)
    {
        printf("i am the child process, my process id is %d\n", getpid());
        cnt++;
    }
    else
    {
        printf("i am the parent process, my process id is %d\n", getpid());
        cnt++;
    }
    printf("statistic result: %d\n", cnt);
    return 0;
}