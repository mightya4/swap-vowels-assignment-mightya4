#include <stdio.h>
#include <stdbool.h>

int size_of_str_array(char new_array[]);
bool is_end_of_str_array(char new_array[] , int index);
void element_swap(char first_array[], char second_array[], int first_arr_index, int second_arr_index, int first_array_max_size, int second_array_max_size);

int main() {
    //Set initial loop counters
    //Get length of array - 1
    //Loop through first array increment index until fir st vowel in array is found
    //If no vowel is found in first array return zero
    //Loop through second array
    //In second array check if element at current index is a vowel and if first array vowel exists swap
    //Create element_swap function to swap current indexed elements of passed arrays
    //Create is_end_of_str_array function to check if index elements exceeds limit of arrays passed update bool value to true return updated value
    char arr[] = "jdasbfu";
    bool val_1 = is_end_of_str_array(arr, 4);
    printf("%d\n", val_1);
    bool val_2 = is_end_of_str_array(arr, 10);
    printf("%d\n", val_2);
    return 0;
}

int size_of_str_array(char new_array[]){
    int i = 0;
    int arr_size = 0;
    while( new_array[i++] != '\0') {
    }
    arr_size = i;

    return arr_size - 1;
}

bool is_end_of_str_array(char new_array[], int index) {
    int max_size = size_of_str_array(new_array);
    if(index > 0 && index <= max_size) {
        // printf("current index: %d, max index: %d\n", index, max_size);
        return true;
    }
    // printf("current index: %d, max index: %d\n", index, max_size);
    return false;
}

