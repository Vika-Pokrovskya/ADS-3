// Copyright 2021 NNTU-CS
void sort1(int *values, int si) {
  bool k = false;
  while (!k) {
    k = true;
    for (int i = 0; i < si - 1; i++) {
      if (values[i] > values[i + 1]) {
        int t = values[i];
        values[i] = values[i + 1];
        values[i + 1] = t;
        k = false;
      }
    }
  }
}

int cbinsearch(int *arr, int size, int value) {
 sort1(arr, size);
 int low = 0;
 int right = size - 1;
 while (low <= right) {
  int m = low + (right - low) / 2;
  if (value > *(arr + m)) {
   low = m + 1;
  } else if (*(arr + m) > value) {
   right = m - 1;
  } else {
   int b = 0;
   int v = m;
   int k = 1;
   int c = 0;
   while (arr[m] == arr[m + 1]) {
    k = k + 1;
    m = m + 1;
    }
   while (arr[v] == arr[v - 1]) {
    c = c + 1;
    v = v - 1;
    }
   b = k + c;
   return b;
  }
 }
 return 0;
}
