#include <stdio.h>

void update(int *a,int *b) {
   int i , j ;
   i = *a + *b;
   j = *b - *a;
      if (j<0)
      {
          j = -(j);
      }
   *a = i;
   *b = j; 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}