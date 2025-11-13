void merge(int arr[], int l, int m, int r) {
    int x, y, z; int a = m - l + 1; int b = r - m; int lArr[a], rArr[b];
    for (x = 0; x < a; x++ )
        lArr[x] = arr[l + x];
    for (y = 0; y < b; y++ )
        rArr[y] = arr[m + 1 + y];
    x = 0; y = 0; z = l;
    while (x < a && y < b) {
        if (lArr[x] <= rArr[y]) {
            arr[z] = lArr[x];
            x++;
        }
        else {
            arr[z] = rArr[y];
            y++;
        }
        z++;
    }
    while (x < a) {
        arr[z] = lArr[x];
        x++; z++;
    }
    while (y < b) {
        arr[z] = rArr[y];
        y++; z++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
