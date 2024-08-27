#include <stdint.h>
int main(){

int my_array[] = {1,2,3,4,5,6,7,8};
int n = sizeof(my_array) / sizeof(my_array[0]);
for(int i = 0; i < n-1; i++){
    for(int j=0; j <n-i-1; j++){
        if(my_array[j] < my_array[j+1]){
            int temp = my_array[j];
            my_array[j] = my_array[j+1];
            my_array[j+1] = temp;
        }
    }
}
printf("Sorted From Highest to lowest: ");
    for(int i = 0; i < n; i++){
        printf(" %d", my_array[i]);
    }
    printf("\n");



    return 0;
}