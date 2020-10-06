#include <stdio.h>
#include "racional.h"

int main(){
  racional q,p,r;
  racional cero;
  ini_rac(&cero,0,1);
  char s1[1000];
  
  ini_rac(&q,1,2);
  ini_rac(&p,3,4);
  suma_rac(&r,&q,&p);
  printf("%s + ",tostr_rac(s1,&q));
  printf("%s = ",tostr_rac(s1,&p));
  printf("%s\n",tostr_rac(s1,&r));
  return 0;
}
