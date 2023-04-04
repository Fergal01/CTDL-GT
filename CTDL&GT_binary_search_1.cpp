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
