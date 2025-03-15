void fibonacciSeries(int n){
    int a = 0, b=1;
    int arr[n];

    arr[0] = a;

    if(n>1){
        arr[1] = b;
    }

    for(int i=2; i<n; i++){
        arr[i] = a+b;
        a = b;
        b = arr[i];
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}