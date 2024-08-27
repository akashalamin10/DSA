#include <stdio.h>
int main(){

int my_array[] = {4, 6, 8, 1, 9};
int size = sizeof(my_array) / sizeof(my_array[0]);
int min_value = my_array[0];

for(int i = 0; i < size; i++)
{
if(my_array[i] < min_value){
min_value = my_array[i];
}
}
 printf("Lowest value: %d\n", min_value);




return 0;



}