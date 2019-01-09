//
//  main.c
//  demid
//
//  Created by Ilya Merkulov on 09/01/2019.
//  Copyright © 2019 Ilya Merkulov. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//void print_array(int *array, int n) {
//    for (int i = 0; i < n - 1; i++) {
//        printf("%d", array[i]);
//    }
//    printf("%d\n", array[n - 1]);
//}

int next_bin(char *array, int n) {
    int i = n - 1;
    while (i >= 0) {
        if (array[i] == '0') {
            array[i] = '1';
            for (int j = i + 1; j < n; j++) {
                array[j] = '0';
            }
            return 1;
        }
        i--;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    char *arr;
    int n;

//    printf("Введите размер массива: ");
//    scanf("%d", &n);
    n = 3;
    
    arr = (char*) malloc(n * sizeof(char));
    for (int i = 0; i < n; i++) {
        arr[i] = '0';
    }
    
    do {
//        print_array(arr, n);
        printf("%s\n", arr);
    } while (next_bin(arr, n));
    
    free(arr);
    return 0;
}
