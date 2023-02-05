#include <stdio.h>
int votingalgo(int arr[], int n) {
    int count = 1;
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
    int arr[5] =  {2,2,1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", votingalgo(arr,n));
    
    
    return 0;
}
