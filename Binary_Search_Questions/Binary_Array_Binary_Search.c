int binaryArrayBinarySearch(int A[], int l, int r, int count){
    int n = 24;
    if (A[l] == A[r] && count == 1){
        if (A[l] == 1){
            return n;
        }
        else{
            return 0;
        }
    }
    int m = floor((l+r)/2);
    if (A[m] == 1 && A[m-1] == 0){
        return n-m;
    }
    else if (A[m] == 1){
        return binaryArrayBinarySearch(A,l,m-1,count+1);
    }
    else{
        return binaryArrayBinarySearch(A,m+1,r,count+1);
    }
}
