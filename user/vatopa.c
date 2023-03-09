#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{

    uint64 VA = (uint64)atoi(argv[1]);
    int pid;
    if (argc == 2)
    {
        pid = atoi(argv[2]);
    }
    else
    {
        pid = 0;
    }
    //printf("%d\n", VA);

    int PA = vatopa(VA,pid);
    printf("0x%x\n", PA);
    return 0;
}