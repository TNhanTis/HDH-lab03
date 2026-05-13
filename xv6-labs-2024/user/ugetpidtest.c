#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int pid_sys = getpid();
  int pid_fast = ugetpid();

  printf("getpid=%d ugetpid=%d\n", pid_sys, pid_fast);
  if(pid_sys != pid_fast){
    fprintf(2, "ugetpidtest: mismatched PID\n");
    exit(1);
  }

  exit(0);
}
