void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main(void) {
    int arr[4] = {4,3,2,1};
    int choice = 0;
    
    TRISE = 1;
    TRISA = 0;
    TRISB = 0;
    TRISC = 0;
    TRISD = 0;
    choice = LATE;
    switch(choice){
        case 1:
            sortAscending(arr,4);
            break;
        case 2:
            sortDescending(arr,4);
            break;
    }
    
    LATA = arr[0];
    LATB = arr[1];
    LATC = arr[2];
    LATD = arr[3];
    
}
