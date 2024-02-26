#include <stdio.h>


int calcula(int menor, int maior) {

    for (int div = menor; div > 0 ; --div) {
      if ( (maior%div == 0) && (menor%div == 0)) {
        return(div);
      }
    }

}

int mdc1(int num1, int num2, int *mdc) {
 
  if (num1 == num2) {
    return(*mdc = num1);
  }
  else if (num1 > num2) {
    return ( *mdc = calcula (num2 , num1) );
  }
  else {
    return ( *mdc = calcula (num2 , num1) );
    }
  
 
}


int main() {
  int num1, num2, mdc = 1;
  scanf("%d %d", &num1, &num2);
  mdc1(num1 , num2, &mdc);
  printf("%d\n", mdc);

  return 0;
}



