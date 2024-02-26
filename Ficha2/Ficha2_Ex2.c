#include <stdio.h>

float multInt1(int n, float m) {
  float r = 0;

  for(; n>0; n/=2) {
    r += (n%2)*m;
    m *=2;
  }

  return r;
}




int main() {
  int n=81;
  float m=423;
  printf("%f", multInt1(n,m));
  return 0;
}

