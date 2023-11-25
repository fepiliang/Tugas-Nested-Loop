#include<iostream>

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int findNextPalindrome(int n) {
    n++;

    while (!isPalindrome(n)) {
        n++;
    }

    return n;
}

int main() {
    int input;
    std::cout << "Masukkan angka: ";
    std::cin >> input;

    int result = findNextPalindrome(input);
    std::cout << "Palindrome terdekat setelah " << input << " adalah: " << result << std::endl;

    return 0;
}