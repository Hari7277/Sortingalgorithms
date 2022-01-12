#include <stdio.h>
void bubble(int*,int);
int main()
{
    int arr[5],i;
    printf("Enter the elements of the array:");
    for(i=0;i<5;i++)
      scanf("%d", &arr[i]);
    bubble(arr,5);
    printf("The sorted array elements:");
    for(i=0;i<5;i++)
      printf("%d ",arr[i]);
    return 0;
}
void bubble(int *a, int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+j)<*(a+i))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
}
