#include <stdio.h>
void countsort(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    int num;
    for(int i=0;i<n;i++){
        num=a[i];
        count[num]++;
    }
    for(int i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    int temp[n];
    for(int i=n-1;i>=0;i--){
        temp[--count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
}
int main() {
    int arr[8]={2,3,7,6,5,4,9,3};
    countsort(arr,8);
    for(int i=0;i<8;i++){
        printf("%d,",arr[i]);
    }
}

