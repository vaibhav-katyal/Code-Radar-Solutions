void fibonacciSeries(int n){
    int a = 0;
    int b = 1;
    int arr[n];

    int i=0;
    while(n !=0){
        a = b;
        b = c;
        int c = a+b;

        arr[i] = c;
        i++;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

}