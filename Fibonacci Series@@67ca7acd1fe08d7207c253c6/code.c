void fibonacciSeries(int n){
    int a = 0;
    int b = 1;
    int arr[n];
    arr[0] = a;
    arr[1] = b;

    int i=2;
    int c;
    while(n !=0){
        c = a+b;
        a = b;
        b = c;

        arr[i] = c;
        i++;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}