void insertionSort(int a[], int n){
	int index, value;
	for (int i = 1; i < n; i++){
		index = i;
		value = a[i];
		while (index > 0 && a[index - 1] > value){
			a[index] = a[index - 1];
			index --;
		}
		a[index] = value;
	}
} 
//codelearn.io
