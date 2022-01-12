#include <stdio.h>
void selection(int*,int);
int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
      scanf("%d", &arr[i]);
    selection(arr,5);
    for(i=0;i<5;i++)
      printf("%d ",arr[i]);
    return 0;
}
void selection(int *a, int n)
{
    int min,j,i,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(*(a+j)<*(a+min))
              min=j;
        }
        temp=*(a+i);
        *(a+i)=*(a+min);
        *(a+min)=temp;
    }
}
