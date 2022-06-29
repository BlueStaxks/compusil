#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>
int main() {
    struct tm* struct_ptr;
    while (1) {
        system("CLS");
        time_t now = time(NULL);
        struct_ptr = localtime(&now);
        printf("%02d:%02d:%02d", (*struct_ptr).tm_hour, (*struct_ptr).tm_min, (*struct_ptr).tm_sec);
        Sleep(1000);
    }
    return 0;
}
