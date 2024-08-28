#include <stdio.h>
int main(){
int my_array [] = {2,3,4,566,77,22,33,88,99};
int n = sizeof(my_array) / sizeof(my_array[0]);

for(int i =0; i < n-1; i++){
    int min_index = i;
    for(int j = i+1; j < n; j++){
        if(my_array[j] < my_array[min_index]){
            min_index = j;
        }
    }
    int min_value = my_array[min_index];
    for(int k = min_index; k > i; k--){
        my_array[k] = my_array[k-1];
    }
    my_array[i] = min_value;
}
printf("Selection Sorting array: ");
for(int i = 0; i < n; i++){
    printf(" %d", my_array[i]);
}









    return 0;
}