#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // seed the random number generator with the current time
    int randomNumber = rand() % 100 + 1; // generate a random number in the range [1, 100]
    printf("Random number: %d\n", randomNumber);
    return 0;
}
