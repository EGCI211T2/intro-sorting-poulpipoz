void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void display(int *a, int n){
  for(int i = 0; i < n; i++){
    cout<<setw(4)<<a[i];
  }
  cout<<endl;
}

void sort(int *a, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
                display(a, n);
            }
        }
    }
}


