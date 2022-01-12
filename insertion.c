#include <stdio.h>
void insertion(int*,int);
int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
      scanf("%d", &arr[i]);
    insertion(arr,5);
    for(i=0;i<5;i++)
      printf("%d ",arr[i]);
    return 0;
}
void insertion(int *a, int n)
{
    int key,j,i;
    for(i=1;i<n;i++)
    {
        key=*(a+i);
        j=i-1;
        while(j>=0 && *(a+j)>key)
        {
            *(a+j+1)=*(a+j);
            j--;
        }
        *(a+j+1)=key;
    }
}
