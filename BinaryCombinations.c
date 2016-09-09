#include <stdio.h>

void PrintBinary(int array[], int length);
void CalcBinary(int array[], int k, int length);

int array[]= {0};

int main()
{
    int length, k = 1;
    printf("Please enter the length of the binary string.\n");
    scanf("%d", &length);
    CalcBinary(array,k,length);
}

void CalcBinary(int array[], int k, int length)
{
    if (k==length)
    {
        array[k]=0;
        PrintBinary(array,length);
        array[k]=1;
        PrintBinary(array,length);
        return;
    }

    array[k]=0;
    CalcBinary(array,k+1,length);
    array[k]=1;
    CalcBinary(array,k+1,length);
}

void PrintBinary(int array[], int length)
{
    int ctr;
    for (ctr=1; ctr<=length; ctr++)
    {
        printf("%d ",array[ctr]);
    }
    printf("\n");
}
