#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* repeatString(const char* str, int times) {
    int len = strlen(str);
    char* result = malloc(len * times + 1);
    for (int i = 0; i < times; ++i) {
        strcat(result, str);
    }
    return result;
}

char* createBox(int height, int width) {
    char* box = malloc((width * 3 + 1) * 2 + (height - 2) + 1);
    box[0] = '\0';

    strcat(box, "┏");
    strcat(box, repeatString("━┳", width - 1));
    strcat(box, "━┓");

    for (int i = 0; i < height - 1; ++i) {
        strcat(box, "\n┣");
        strcat(box, repeatString("━╋", width - 1));
        strcat(box, "━┫");
    }

    strcat(box, "\n┗");
    strcat(box, repeatString("━┻", width - 1));
    strcat(box, "━┛");

    return box;
}

int main() {
    char* box = createBox(10, 7);
    printf("%s\n", box);
    free(box);
    return 0;
}
