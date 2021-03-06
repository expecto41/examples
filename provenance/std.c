#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "provenance.h"

int main( void ){
  int a;
  if(provenance_set_tracked(true)){
    printf("Failed Tracking, error %d\n", errno);
    printf("%s\n\n",strerror(errno));
  }
  if(provenance_set_propagate(true)){
    printf("Failed propagate, error %d\n", errno);
    printf("%s\n\n",strerror(errno));
  }
  printf("Enter input: ");
  scanf("%d", &a);
  printf("Input was %d\n", a);
}
