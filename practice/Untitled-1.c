#include <stdio.h>
int votingalgo(int arr[], int n) {
  int count = 0;
  int majority = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i]==majority)
    {
      count++;
    }
    else count--;
    if(count==0) {
      majority = arr[i];
      count = 1;
    }
    
  }
  return majority;
}

int main() {

  
  
return 0;
}
