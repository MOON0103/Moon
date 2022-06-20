#include <stdio.h>

void swap(int* a, int* b) 
{ 	
    int temp = *a;
    *a = *b; 
    *b = temp; 
}

int main()
{
  int a[6] = {3, 1, 6, 5, 4, 2};
  int n = 6;


  for(int i = 0; i < 5; i++)
  {
    for(int j = i + 1; j < 6; j++)
    {
      if(a[i] > a[j]) 
      swap(&a[i], &a[j]);
    }
  }
  for(int i = 0; i < 6; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}
