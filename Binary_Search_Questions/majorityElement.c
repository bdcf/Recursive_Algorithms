#include <stdio.h>
#include <math.h>

int leftBinarySearch(int A[], int left, int right, int t) {
    if (left > right){
        return -1; 
    } 
    int m = floor((left + right) / 2);
    if ((A[m] == t && A[m-1] != t) || (A[m] == t && m == left)){
        return m;
    }
    if (A[m] > t || A[m] == t) {
        return leftBinarySearch(A, left, m - 1, t);
    } 
    else {
        
        return leftBinarySearch(A, m + 1, right, t);
    }
}

int rightBinarySearch(int A[], int left, int right, int t) {
    if (left > right) return left - 1; 
    int m = (left + right) / 2;
    if ((A[m] == t && A[m+1] != t) || (A[m] == t && m == right)){
        return m;
    }
    if (A[m] < t || A[m] == t) {
        return rightBinarySearch(A, m + 1, right, t);
    } else {
        return rightBinarySearch(A, left, m - 1, t);
    }
}

int main() {
    int A[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 8;
    int t = 1;
    int left = leftBinarySearch(A, 0, n, t);
    int right = rightBinarySearch(A, 0, n, t);
    int u = floor(n/2);
    int y = A[u];
    if ((right - left + 1) >= (floor(n/2) + 1)){
        printf("Yes, there are %d occurences of %d", (right - left + 1), y);
    }
    else{
        printf("No");
    }

    return 0;
}
