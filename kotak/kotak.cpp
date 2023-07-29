#include <iostream>
#include <string>

std::string repeatString(const std::string& str, int times) {
    std::string result;
    for (int i = 0; i < times; ++i) {
        result += str;
    }
    return result;
}

std::string kotak(int o, int p) {
    int n1 = p - 1;
    std::string a = "┏" + repeatString("━┳", n1) + "━┓";
    std::string b = repeatString("\n┣" + repeatString("━╋", n1) + "━┫", o - 1);
    std::string c = "\n┗" + repeatString("━┻", n1) + "━┛";
    return a + b + c;
}

int main() {
    std::cout << kotak(10, 7) << std::endl;
    return 0;
}
