#include <stdio.h>

// Function to check if a number is prime (without sqrt)
int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime
    if (num == 2) return 1; // 2 is prime

    for (int i = 2; i <= num / 2; i++) { // Check divisibility up to num/2
        if (num % i == 0) {
            return 0; // Not prime
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


