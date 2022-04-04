#include <stdio.h>
#include <malloc.h>

//сортировка вставками
void InsertionSort(int n, int mass[])
{
    int newElement, location;

    for (int i = 1; i < n; i++)
    {
        newElement = mass[i];
        location = i - 1;
        while(location >= 0 && mass[location] > newElement)
        {
            mass[location+1] = mass[location];
            location = location - 1;
        }
        mass[location+1] = newElement;
    }
}

int main()
{
    //ввод N
    int N;
    printf("Введите количество элементов: ");
    scanf("%d", &N);
    //выделение памяти под массив
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    //ввод элементов массива
    printf("Введите элементы массива:\n");
    for (int i = 0; i < N; i++)
    {
      printf("m[%d]= ",i);
      scanf("%d", &mass[i]);
    }
    //сортировка вставками
    InsertionSort(N, mass);
    //вывод отсортированного массива на экран
    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");
    //освобождение памяти
    free(mass);
    return 0;
}
