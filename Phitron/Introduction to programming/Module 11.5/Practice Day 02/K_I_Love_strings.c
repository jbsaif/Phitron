#include <stdio.h>
#include <string.h>

int main() {
    int test_case;
    scanf("%d", &test_case);

    while (test_case--) {
        char s[51], t[51];
        scanf("%s %s", s, t);

        int size_s = strlen(s);
        int size_t = strlen(t);

        char result[102];  // enough space for s + t + '\0'
        int idx = 0;

        // Interleave characters
        for (int i = 0; i < size_s || i < size_t; i++) {
            if (i < size_s)
                result[idx++] = s[i];
            if (i < size_t)
                result[idx++] = t[i];
            
        }

        result[idx] = '\0';

        printf("%s\n", result);
    }

    return 0;
}
