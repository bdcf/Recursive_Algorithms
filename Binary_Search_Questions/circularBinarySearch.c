int circularBinarySearch(int A[], int t, int l, int r){
    int m = floor((r+l)/2);
    if (A[m] == t){
        return m;
    }
    if (A[r] > A[m]){
        if (A[m] < t && t <= A[r]){
            return circularBinarySearch(A, t, m + 1, r);
        }
        else{
            return circularBinarySearch(A, t, l, m-1);
        }
    }
    else{
        if (A[m] > t && t >= A[l]){
            return circularBinarySearch(A, t, l, m-1);
        }
        else{
            return circularBinarySearch(A, t, m + 1, r);
        }
    }
}
