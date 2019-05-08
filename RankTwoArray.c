#include<stdio.h>
void Rank(int *arr1,int *arr2)
{
  int i=sizeof(arr1)/sizeof(arr1[0])-1;
  int j=sizeof(arr2)/sizeof(arr2[0])-1;

  int w=i+j+1;
  while(w--)
  {
     if(arr1[i]>arr1[j])
     {
       arr1[w]=arr1[i];
       i--;
     }
     else{
       arr1[w]=arr1[j];
       j--;
     }
  }
}
int main()
{
  int arr1[100]={1,3,5,7};
  int arr2[]={2,4,6,8};
  Rank(arr1,arr2);
  return 0;
}
