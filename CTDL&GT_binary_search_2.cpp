
#include <stdio.h>
#include <iostream>
int binarySearch(int arr[], int n, int x) {
   int low = 0, high = n - 1, mid;

   while (low <= high) {
      mid = (low + high) / 2;

      if (arr[mid] == x)
         return mid;

      if (arr[mid] < x)
         low = mid + 1;

      else
         high = mid - 1;
   }
   return -1;
}
int main() {
   int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 12;
   int result = binarySearch(arr, n, x);

   if (result == -1)
      printf("Khong tim thay %d trong mang", x);
   else
      printf("%d co trong mang, o vi tri %d", x, result);

   return 0;
}
