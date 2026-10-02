#include <stdio.h>
#include <stdlib.h>

estern void sum_array(int *array, int size);

int main(){
  FILE *file = fopen("data.txt" , "r");
  int size = 0;
  fscanf(file, "%d", &size)
  int array[size];

  for(int i =0; i < size; i++){
    fscanf(file, "%d", &arr[i])
  }
  fclose(file);
  int total_sum = sum_array(array,size);
  printf("The sum is: %d\n", total_sum);
  return 0;
}
