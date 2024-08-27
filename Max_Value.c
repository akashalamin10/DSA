#include <stdio.h>
int main(){
int my_array[] = {3, 6, 8, 2, 1, 9};
int size = sizeof(my_array) / sizeof(my_array[0]);
int max_Value = my_array[0];


for(int i = 0; i < size; i++){
    {if(my_array[i] > max_Value)
   max_Value = my_array[i]; 

}
}
printf("Max Value is %d\n", max_Value);





    return 0;
}