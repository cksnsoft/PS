// 2021

#include <stdio.h>
int n; int arr[1000];

int maxNum(int* arr) {
    int maxnum = *arr;
    for(int i=0;i<n;i++) {
        if (maxnum < *(arr+i)) {
            maxnum = *(arr+i);
        }
    }
    return maxnum;
}

int main() {
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }
    //가장 큰 숫자 찾기
    int maxnum = maxNum(arr);
    //다 계산 후 평균 구하기.
    float sum = 0;
    float temp;
    for (int k=0; k<n; k++) {
        temp = (float) arr[k]/maxnum;
        temp = temp * 100;
        sum += temp;
    }
    printf("%f", sum/n);
}

// [ 40 ] divide this by another int. And the result is saved until the decimal point.
//
// 
// 
// 

// Pointers and arrays!
// &n  ---> 1000 [ # <-]-- n
// arr ---> 1001 [ # <-]-- arr[0]
//          1002 [ # <-]-- arr[1]
//               []
//               []
//               []
//               []