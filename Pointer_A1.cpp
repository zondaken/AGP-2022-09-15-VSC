#include <iostream>

void foo(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
}

void bar(int& a)
{
    a = 69;
}

int main(int argc, const char *argv[])
{
    int a = 42;
    int* p = &a;

    std::cout << "Value: " << a << "\n";
    std::cout << "Pointer: " << p << "\n";
    std::cout << "Dereferenced: " << *p << "\n";
    std::cout << "-------------------\n";

    int arr[] = { 42, 69, 111 };
    int size = sizeof(arr) / sizeof(arr[0]);

    foo(arr, size);
    bar(a);
    std::cout << "Changed value: " << a << "\n";

    return 0;
}