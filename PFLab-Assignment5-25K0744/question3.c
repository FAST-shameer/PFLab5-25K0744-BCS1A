#include <stdio.h>
int main(){
  // x + y * z > 10 && x - z < y || !(y % z)
  int x = 5, y = 3, z = 2;
  int step1, step2, step3, step4, step5, step6, step7, step8, result;
  step1 = y * z;
  printf("1. y * z = %d * %d = %d\n", y, z, step1);
  step2 = x + step1;
  printf("2. x + (y * z) = %d + (%d) = %d\n", x, step1, step2);
  step3 = step2 > 10;
  printf("3. (x + y * z) > 10 = (%d) > 10 = %d\n", step2, step3);
  step4 = x - z;
  printf("4. x - z = %d - %d = %d\n", x, z, step4);
  step5 = step4 < y;
  printf("5. (x - z) < y = (%d) < %d = %d\n", step4, y, step5);
  step6 = step3 && step5;
  printf("6. (x + y * z) && (x - z < y) = (%d) && (%d) = %d\n", step3, step5, step6);
  step7 = y % z;
  printf("7. y %% z = %d %% %d = %d\n", y, z, step7);
  step8 = !(step7);
  printf("8. !(y %%z ) = !(%d) = %d\n", step7, step8);
  result = step6 || step8;
  
  printf("9. ((x + y * z > 10) && (x - z < y)) || (!(y %% z))");
  printf(" = %d || %d = %d\n", step6, step8, result);
  printf("final result: %d\n", result);
  return 0;
}
