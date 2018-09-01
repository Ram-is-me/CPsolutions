#include<stdio.h>
int main()
{
  int n,k,l,c,d,p,nl,np;
  scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
  int totaldrink=k*l;
  int totaltoastdr=totaldrink/nl;
  int limes=c*d;
  int salt=p/np;
  int min=0;
  // printf("%d %d %d\n", totaltoastdr, salt, limes);
  if(totaltoastdr<=limes && totaltoastdr<=salt)
  {
    min=totaltoastdr;
  }
  else if(limes<=totaltoastdr && limes<=salt)
  {
    min=limes;
  }
  else if(salt<=totaltoastdr && salt<=limes)
  {
    min=salt;
  }
  printf("%d\n", min/n);
  return 0;
}
