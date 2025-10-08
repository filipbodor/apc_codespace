//#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <climits>

int main(int argc, char *argv[]) {
    std::ifstream file(argv[1]);
    
    std::vector<long long> v;

    std::string a;


    while (getline(file, a)) {
        bool flag = false;
        long long temp = 0;
        int multiplier = 1;

        for (int i = 0; i < a.size() && a[i] != '\n'; i++) {
            if (a[i] >= '0' && a[i] <= '9') {
                temp = temp * 10 + (a[i] - '0');
                if (temp > INT_MAX || temp < INT_MIN) {
                    return 1;
                }
                flag = true;
            } else if (a[i] == ' ') {
                if (flag) {
                    v.push_back(temp * multiplier);
                    temp = 0;
                }
                flag = false;
                multiplier = 1;
            } else if (a[i] == '-' && !flag) {
                multiplier = -1;
            } else {
                return 1;
            }
        }

        if (flag) {
            v.push_back(temp * multiplier);
        }
    }

    sort(v.begin(), v.end());


    for (long long i : v) {
        std::cout << i << std::endl;
    }
    return 0;
}