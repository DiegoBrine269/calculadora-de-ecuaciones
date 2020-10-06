#include <stdio.h>
#include "pol2rac.h"

int main(){
  int i,j,err;
  racional q,p,r;
  ecseg e;
  racional cero;
  ini_rac(&cero,0,1);
  char s1[1000];
  for(i=-10;i<10;i++)
    for(j=1;j<10;j++){
      ini_rac(&q,i,j);
	    ini_rac(&p,j,j);
	    ini_rac(&r,i,j+1);
      ini_ec2r(&e,&q,&p,&r);
	    tostr_ec2r(s1,&e);
	    printf("%s\n",s1);
    }  
  return 0;
}
