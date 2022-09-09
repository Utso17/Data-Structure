//Write a program to return multiple value from function using pointers.


#include <stdio.h>

#define SIZE 100

int * getNEvenNumbers(const int N, int * numbers);


int main()
{
    int evenNumbers[SIZE],size;
    int i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    getNEvenNumbers(SIZE, evenNumbers);

    printf("First %d even numbers are: \n", size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(evenNumbers + i));
    }


    return 0;
}

int * getNEvenNumbers(const int N, int * numbers)
{
    int i;

    for (i = 0; i < N; i++)
    {
        *(numbers + i) = 2 * (i + 1);
    }

    return numbers;
}
