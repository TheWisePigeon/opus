#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char *get_binary_representation(int number) {
  int representation_length = ceil(log2(number));
  char *representation = malloc((representation_length + 1) * sizeof(char));
  int remainder;
  for (int i = representation_length - 1; i >= 0; i--) {
    remainder = number % 2;
    number = number / 2;
    char bin[2];
    sprintf(bin, "%d", remainder);
    representation[i] = *bin;
  }
  return representation;
};

int nb_bits(int number){
  int n = 0;
  while (number & (~0)) {
    number = number >> 1;
    n += 1;
  }
  return n;
}

int add(int a, int b){
  char *bin_a = get_binary_representation(a);
  char *bin_b = get_binary_representation(b);
  return 0;
}

int main(int argc, char **argv) {
  char *representation = get_binary_representation(9);
  printf("%s", representation);
  free(representation);
  return 0;
}
