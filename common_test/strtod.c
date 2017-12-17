#include <stdio.h>
#include <stdlib.h>

void test_strtod(const char* str) {
    char* end;
    double res = strtod(str, &end);
    printf("str=%s, double_res=%f, end_invalid_str=%s\n", str, res, end);
}

int main() {
    test_strtod("12345.678");
    test_strtod("1234.567qwer");
    test_strtod("-232.23e4");
}
