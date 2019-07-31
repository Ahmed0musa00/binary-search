#include <stdio.h>
#define SIZE 20

int binary_search(const int arr[], int searchKey, int low, int high);

int main(void)
{
    int a[SIZE];
    int key;
    int result;
    int i;
    for(i=0;i<SIZE;i++)
    {
        a[i] = 2 * i ;
    }
    printf("Enter the no. you want : ");
    scanf("%d",&key);

    result = binary_search(a, key, 0, SIZE-1);

    if(result != -1 )
        printf( "%d found in array element %d\n", key, result );
    else
        printf( "%d not found\n", key );

    return 0;
}

int binary_search(const int arr[], int searchKey, int low, int high)
{
    int middle;
    while(low <= high)
    {
        middle = ( low + high )/2 ;
        if(searchKey == arr[middle])
            return middle ;
        else if (searchKey < arr[middle])
            high = middle - 1 ;
        else
            low = middle + 1 ;
    }
    return -1 ;
}
