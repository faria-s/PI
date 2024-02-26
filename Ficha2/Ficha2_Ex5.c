#include <stdio.h>


int mdc3(int *num1, int *num2, int *mdc) {

  if ((*num1 == *num2) || (*num2%*num1 == 0)) {
    return(*mdc = *num1);
  }
  else if (*num1%*num2 == 0) {
     return(*mdc = *num2);
  }
  else {

    while ((*num1 > 0) && (*num2 > 0)) {

      if ( (*num1/ *num2) == 1){
        return(*mdc = *num1 % *num2);
      }
      else if ((*num2 / *num1) == 1) {
        return(*mdc = *num2 % *num1);
      }
      else if (*num2 < *num1) {
        *num1 = *num1 % *num2;  
      }
      else if (*num2 > *num1) {
        *num2 = *num2 % *num1;
      }
    }
  }
}


int main() {
  int num1, num2, mdc = 1;
  scanf("%d %d", &num1, &num2);
  mdc3(&num1 , &num2, &mdc);
  printf("%d\n", mdc);

  return 0;
}
