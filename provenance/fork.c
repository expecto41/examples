#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "provenance.h"

int main( void ){
  if(provenance_set_tracked(true)){
    printf("Failed Tracking, error %d\n", errno);
    printf("%s\n\n",strerror(errno));
  }
  if(provenance_set_propagate(true)){
    printf("Failed propagate, error %d\n", errno);
    printf("%s\n\n",strerror(errno));
  }
  fork();
}
