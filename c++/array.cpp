#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char array[] = "1234567890";
    const char *str = "1234567890";
    int lenth;
    int i;
    for (i = 0; i < sizeof(array); i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << "array lenth: " << sizeof array << endl; 

    i = 0;
    lenth = strlen(str);
    while(i < lenth) {
        cout << "str[" << i++ << "] = " << *str++ << endl;
    }
    cout << "str lenth: " << lenth << endl;


    return 0;
}
