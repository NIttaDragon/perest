# include <stdio.h>

//void per(int m[i],)
int main()
{
  int m[5];
  int per;
  printf("заполнение массива\n");
  for (int i=0;i<5;i++)
  {
    printf("m[%d]= ",i);
    scanf("%d",&m[i]);
  }
  for (int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      if(m[i]<m[j])
      {
        per=m[i];
        m[i]=m[j];
        m[j]=per;
      }
    }
  }
  printf("отсортированный массив\n");
  for (int i=0;i<5;i++)
  {
    printf("m[%d]= %d\n",i,m[i]);
  }
  return 0;
}
