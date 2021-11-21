#include <stdio.h>
#include <stdlib.h>
#include "arrayio.h"

int MAX_LAENGE = 1000;
int MAX_VALUE = 100;
 

void count_sort_calculate_counts(int input_array[], int len, int count_array[]) {
    count_array[MAX_VALUE];
    
    	for (int j = 0; j <= MAX_VALUE; j++){
    		count_array[j] = 0;
   	 	}
    
    for (int j = 0; j < len; j++){
    	count_array[input_array[j]] = count_array[input_array[j]] + 1;
         }
    
}

void count_sort_write_output_array(int output_array[], int len, int count_array[]) {

    int k, j, i; 
    k = 1; 

        for (j = 1; j < MAX_VALUE; j++){
            for (i = 1; i < count_array[j]; i++){
                output_array[k] = j;
                k = k + 1;
            }
        }
}



int main(int argc, char *argv[]) {

    if (argc < 2){
        printf("Aufruf: %s <Dateiname>\n", argv[0]);
        printf("Beispiel: %s zahlen.txt\n", argv[0]);
        exit(1);
    }

    char *filename = argv[1];

    int input_array[MAX_LAENGE];
    int len = read_array_from_file(input_array, MAX_LAENGE, filename);

    printf("Unsortiertes Array:");
    print_array(input_array, len);

    // Deklarationen und Funktionsaufrufe für Countsort
    /* void countsort(input_array, output_array){
      count_sort_calculate_counts(input_array, len, count_array);
      count_sort_write_output_array(output_array, len, count_array);
    } */

    printf("Sortiertes Array:");

    // war vorher ausgeklammert --> Array ausgeben 
    print_array(output_array, len);

    return 0;
}
