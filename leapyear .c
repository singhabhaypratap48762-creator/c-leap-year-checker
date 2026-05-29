#include <stdio.h>
int main() {
  int n;
  printf("Enter your year\n");
  scanf("%d",&n);
  if((n%4==0 && n%100!=0)||(n%400==0)){
      printf("this is leap year");
  }
  else{
      printf("this is not leap year");
  }
    return 0;
}
