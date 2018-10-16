#include "conditional.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {

  AddOrMult(*choice);


  return 0;
}
void AddOrMult(int* choice){
  do {
    printf("Select Add (1) or Multiply (2): ");
    scanf("%d",choice);
  } while(choice != 1 && choice != 2);
    int number = GetNumber(*number);

    if (choice == 1) {
      Add(number);
    }else if (choice == 2) {
      Multiply(number);
    }
}

void GetNumber(int* number){
  do {
    printf("Select a number in the range (1-100): ");
    scanf("%d",number);
  } while(number >= 1 && number <=  100 );

}
void Multiply(int *number){
  long result = 0;

  for (int i = 1; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      result*= i;
    }
  }
  printf("Result: %ld\n",result);
}
void Add(int *number){
  long sum = 0;

  for (int i = 1; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum+= i;
    }
  }
  printf("Result: %ld\n",sum);
}
