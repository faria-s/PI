#include <stdio.h>

float multInt1(int n, float m) {

  float r=0;

  for(; n>0; n--) {
    r += m;
  }

  return r;
}


int main() {
  int n;
  float m;
  scanf("%d %f",&n,&m);
  printf("%f", multInt1(n,m));
  return 0;
}

