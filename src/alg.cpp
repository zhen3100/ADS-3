// Copyright 2021 EV.VOLKOV

int cbinsearch(int *arr, int size, int value) {
    int i = 0, j = size - 1;
    int count = 0;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == value) { 
            int m = mid;
            while (arr[m] == value) {
                ++count;
                ++m;
            }
            while (arr[mid - 1] == value) {
                ++count;
                --mid;
            }
            return count;
        } else if (arr[mid] > value) {
            j = mid;
        } else {
            i = mid + 1;
        }
    }
    return 0;
}
