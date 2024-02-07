#include <stdio.h>

                    // GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

                // calculate lcm
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

                // find the LCM 
int find_lcm(int arr[], int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    int n;

                            // Input: Number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int numbers[n];

                        // Input: Array of integers
    printf("Enter %d integers separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

                        // Calculate and print LCM
    int lcm_result = find_lcm(numbers, n);
    printf("LCM of the given integers is: %d\n", lcm_result);

    return 0;
}
