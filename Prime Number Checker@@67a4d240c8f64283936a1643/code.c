#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime

    for (int i = 2; i <= sqrt(num); i++) { // Check divisibility only up to sqrt(num)
        if (num % i == 0) {
            return 0; // Not Prime
        }
    }
    return 1; // Prime
}

// int main() {
//     int t, num;
//     scanf("%d", &t); // Read number of test cases

//     while (t--) {
//         scanf("%d", &num); // Read each number
//         printf("%d\n", isPrime(num)); // Print result
//     }

//     return 0;
// }

