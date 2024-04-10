1) #include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 13 && age <= 19) {
        cout << "Person is a Teenager" << endl;
    } else {
        cout << "Person is not a Teenager" << endl;
    }

  
    if (age >= 18) {
        cout << "Person is eligible for voting" << endl;
    } else {
        cout << "Person is not eligible for voting" << endl;
    }

    return 0;
}
2) 5th table cde:
 #include <iostream>
using namespace std;

int main() {
    int number = 5;

    cout << "Multiplication table for " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}
3) palindron number:

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, original;
    cout << "Enter a positive number: ";
    cin >> num;
    original = num;
    while (num != 0) {
        int digit = num % 10;
        reversed = (reversed * 10) + digit;
        num /= 10;
    }

    cout << "The reverse of the number is: " << reversed << endl;

    if (original == reversed)
        cout << "The number is a palindrome.";
    else
        cout << "The number is not a palindrome.";

    return 0;
}
fibanoicc series

4) #include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }

    return 0;
}
5) swapping of 2 numbers
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    return 0;
}
        


