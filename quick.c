#include <stdio.h>


void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


int part(int ar[], int l, int h) {
  
  int pivot = ar[l];
  
  int i = (l + 1);
  int j = h;
  do{
  	while(ar[i]<=pivot){
  		i++;
	  }
	while(ar[j]>=pivot)
	{
		j--;
	}
	if(i<j)
	{
		swap(&ar[i],&ar[j]);
	}
  }while(i<j);
  
  swap(&ar[l],&ar[j]);
  return j;
}

void quick(int ar[], int l, int h) {
  if (l < h) {
    

    int p = part(ar, l, h);

    quick(ar, l, p - 1);

    quick(ar, p + 1, h);
  }
}

int main() 
{
  int data[5];
  int i;
  printf("Enter the elements of the array: ");
  for(i=0;i<5;i++)
    scanf("%d",&data[i]);
  printf("Unsorted Array\n");
  for(i=0;i<5;i++)
    printf("%d ",data[i]);
  
  quick(data,0,4);
  
  printf("\nSorted array in ascending order: \n");
  for(i=0;i<5;i++)
    printf("%d ",data[i]);
}
