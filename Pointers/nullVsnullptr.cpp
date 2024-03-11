In C++, NULL and nullptr are used to represent null pointers, but they differ in their types and behavior.

NULL:

NULL is a preprocessor macro that typically expands to an integral zero.
It is historically used in C and early versions of C++ to represent null pointers.
It doesn't have a specific type and can cause issues with overloaded function resolution because it can be ambiguous.
Using NULL in C++ is considered a legacy practice and it's recommended to use nullptr instead in modern C++ code.
nullptr:

nullptr is a keyword introduced in C++11 to represent a null pointer.
It has its own distinct type called std::nullptr_t, which is implicitly convertible to any pointer type.
Unlike NULL, nullptr is type-safe and helps prevent many common programming errors, such as accidental use of integer zero where a pointer is expected.
It's preferred in modern C++ code for clarity and type safety.
Example usage:

cpp
Copy code
int* ptr = nullptr; // Using nullptr to initialize a pointer
if (ptr == nullptr) {
    // Do something if ptr is null
}

// Function that takes an int pointer
void func(int* ptr) {
    // Function body
}

func(nullptr); // Passing nullptr to the function

// Example of usage in C++11 or later
int* ptr = nullptr;
Using nullptr is preferred over NULL in modern C++ because it's type-safe and more explicit. It's especially useful in contexts where overloaded functions are involved, as it avoids ambiguity.