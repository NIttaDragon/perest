# include <stdio.h>
#define k 5

int main()
{
  int m[k]={4,3,7,9,1};
  int *per;
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
    for (i=1;i<k;i++)
      if(*p[i]<*p[i-1])
        {
          per=p[i];
          p[i]=p[i-1];
          p[i-1]=per;
          flag=1;
          kol++;
        }
  } while (flag);

  printf("отсортированный массив\n");
  for (i=0;i<k;i++)
  {
    printf("%i\n",*p[i]);
  }
  printf("Количество перестановок %i\n",kol);
  return 0;
}
