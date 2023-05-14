#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int* ptr;
    ptr = (int*)calloc(5, sizeof(int));
    
    if (!ptr) {
        cout << "Memory Allocation Failed";
        exit(1);
    }
    
    cout << "Initializing values..." << endl << endl;
    
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2 + 1;
    }
    
    cout << "Initialized values" << endl;
    
    for (int i = 0; i < 5; i++) {
        /* ptr[i] dan *(ptr+i) dapat digunakan secara bergantian */
        cout << *(ptr + i) << endl;
    }
    
    free(ptr);

    _getch();
    return 0;
}