#include <stdio.h>


int main(){
    int i;
    for (i = 1; i <= 10; i++)
    {
      if(i%2 == 0){
         printf("even %d\n", i);
      }
      else{
         printf("odd %d\n", i);
      }
    }
    return 0;
}
