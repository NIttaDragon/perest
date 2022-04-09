# include <stdio.h>
#define k 5
void rec(int i,int* p[i],int kol,char flag)
{
  int* per;
  if(*p[i]<*p[i-1])
  {
    per=p[i];
    p[i]=p[i-1];
    p[i-1]=per;
    kol++;
    char flag=1;
  }
}
int main()
{
  int m[k]={4,3,7,9,1};
  int *p[k];
  int i;
  int kol=0;
  char flag=1;

  printf("Неотсортированный массив\n");
  for (i=0;i<k;i++)
    printf("%i\n",m[i]);

  for (i=0;i<k;i++)
    p[i]=&m[i];

  do{
    flag=0;
    for(i=0;i<k;i++)
      rec(i,p[i],kol,flag);
  } while (flag);

  printf("отсортированный массив\n");
  for (i=0;i<k;i++)
  {
    printf("%i\n",*p[i]);
  }
  printf("Количество перестановок %i\n",kol);
  return 0;
}
