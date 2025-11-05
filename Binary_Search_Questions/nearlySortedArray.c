int binarySearch(int A[], int t, int l, int r){
    if (l > r){
        return -1;
    }
    int m = floor((l + r)/2);
    if(A[m] == t){
        return m;
    }
    else if(A[m-1] == t){
        return m-1;
    }
    else if(A[m+1] == t){
        return m+1;
    }
    else if(A[m] > t){
        return binarySearch(A, t, l, m-1);
    }
    else{
        return binarySearch(A, t, m+1, r);
    }
}
