#include <stdio.h>
#define k 5

int rec(int* p)
{
  int* per;
  int kol=0;
  int sum=0;
  for (int i=0;i<4;i++)
  {
    if(*p>*(p+1))
    {
      *per=*p;
      *p=*(p+1);
      *(p+1)=*per;
      kol++;
    }
    *p++;
  }
  sum=sum+kol;
  printf("sum=%d\n",sum);
  for(int a=0;a<k;a++)
    int j=rec(p);
  return(sum);
}

int main()
{
  int m[k]={4,3,7,9,1};
  int *p;
  int i,a;
  int kol=0;
  printf("Неотсортированный массив\n");
  for (i=0;i<k;i++)
    printf("%i\n",m[i]);
  p=&m;
  a=rec(p);
  printf("Отсортированный массив\n");
  for (i=0;i<k;i++)
  {
    printf("%i\n",*p);
    *p++;
  }
  printf("Количество перестановок %i\n",a);
  return 0;
}
