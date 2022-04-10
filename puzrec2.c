#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define k 5

void rec(int* p,int j,int sum)
{
  int* per;
  int kol=0;
  for (int i=0;i<4;i++)
  {
    printf("p в циклe= %d\n",*p);
    printf("p+1 в циклe= %d\n",*(p+1));
    if(*p>*(p+1))
    {
      *per=*p;
      *p=*(p+1);
      printf("*p= %d\n",*p);
      *(p+1)=*per;
      printf("*(p+1)= %d\n",*(p+1));
      kol++;
    }
    *p++;
  }
  printf("p после цикла= %d\n",*p);
  *p=*(p-3);
  printf("p с возвратом= %d\n",*p);
  sum=sum+kol;
  j++;
  printf("общее количество перестановок=%d\nколичество вызовов рекурси= %i\n",sum,j);
  if(j<10)
  {
    rec(p,j,sum);
  }
  else
    printf("Количество перестановок %i\n",sum);
}

int main()
{
  int m[k]={4,3,7,9,1};
  int *p;
  int i; int j=0;
  int sum=0;
  printf("Неотсортированный массив\n");
  for (i=0;i<k;i++)
  {
    printf("m= %i\n",m[i]);
    p=&m[i];
  }
  p=&m[0];
  rec(p,j,sum);
  printf("Отсортированный массив\n");
  for (i=0;i<k;i++)
  {
    printf("%i\n",*p);
    *p++;
  }
  return 0;
}
