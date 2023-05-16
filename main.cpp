#include <iostream>

int main() {
    //Integer types
    int i = 10;
    unsigned int ui = 20;
    short s = -30;
    unsigned short us = 40;
    long l = -50L;
    unsigned long ul = 60UL;
    
    //Floating point types
    float f = 3.14f;
    double d = 3.14159;
    long double ld = 3.141592653589793238;
    
    //Character types
    char c = 'A';
    wchar_t wc = L'B';
    char16_t c16 = u'C';
    char32_t c32 = U'D';
    
    //Bolean type
    bool b1 = true;
    bool b2 = false;

    std::cout << "-- Integer types -- \n" << std::endl;
    std::cout << "Int: " << i << std::endl;
    std::cout << "Unsigned Int: " << ui << std::endl;
    std::cout << "Short: " << s << std::endl;
    std::cout << "Unsigned Short: " << us << std::endl;
    std::cout << "Long: " << l << std::endl;
    std::cout << "Unsigned Long:" << ul << std::endl, '\n';
    
    std::cout << "\n-- Floating points types --" << std::endl;
    std::cout << "\nFloat: " << f << std::endl;
    std::cout << "Double: " << d << std::endl;
    std::cout << "Long Double: " << ld << std::endl;
    
    std::cout << "\n-- Character types --" << std::endl;
    std::cout << "\nChar: " << c << std::endl;
    std::wcout << "Wide Char: " << wc << std::endl;
    std::wcout << "Char16_t: " << static_cast<wchar_t>(c16) << std::endl;
    std::wcout << "Char32_t: " << static_cast<wchar_t>(c32) << std::endl;
    /*If we didn't put static_cast<wchar_t>(c16)/(c32) the result for char16 and char32 will be
    numbers instead of C and D outputs*/ 
    
    std::cout << "\n-- Boolean types --" << std::endl;
    if (b1) {
        std::cout << "\nb1 is true" << std::endl;
    } else {
        std::cout << "b1 is false" << std::endl;
    }

    if (b2) {
        std::cout << "b2 is true" << std::endl;
    } else {
        std::cout << "b2 is false" << std::endl;
    }
    std::cout << "\nValue of b1: "<< b1 << std::endl;
    std::cout << "Value of b2: "<< b2 << std::endl;

    return 0;
}
