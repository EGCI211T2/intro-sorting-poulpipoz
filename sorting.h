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
                //display(a, n);
            }
        }
    }
}

void selectionSort(int *a, int n){
    int i, mi;
    int min = a[0];
    mi = 0;
    for(int j = 0; j < n-1; j++){
        mi = j;
        for(i = j+1; i < n; i++){
            if(a[mi] > a[i]){
                mi = i;
            }
        }
        swap(a[j], a[mi]);
        //display(a, n);
    }
    
}

void ptrSelectionSort(int *a, int n){
    int i, mi;
    int min = a[0];
    mi = 0;
    int *p;
    for(int j = 0; j < n-1; j++){
        p=&a[j];
        for(i = j+1; i < n; i++){
            if(*p > a[i]){
                p = &a[i];
            }
        }
        swap(a[j], *p);
        //display(a, n);
    }
    
}

void insertionSort(int *a, int n, int newnb){
    for(int i = n-1; i >= 0; i--){
        if(a[i]<= newnb){
            break;
        }
        swap(a[i+1], a[i]);
        //display(a, n);
    }
}