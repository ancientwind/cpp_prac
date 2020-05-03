#include <iostream>
#include <string>
#include <vector>
#include "basics.h"

using namespace std;

// reference
int ival = 1024;
int &refVal = ival;

int reference() {
    refVal += 1024;
    cout << refVal << endl;
    return 0;
}

// typedef
typedef double wages;
typedef wages salary;
wages hourly, monthly;
salary yearly;

// enum
enum open_modes {
    input, output, append
};
enum Forms {
    shape = 1, shpere, cylinder, polygon = 3
};

void printEnum() {
    cout << input << output << append << endl;
    cout << shape << shpere << cylinder << polygon << endl;
    Forms poly = polygon;
    cout << poly;
}

// string
void pracString1() {
    string s1;
    string s2("hello7");
    string s3(s2);
    string s4(3, 'a');
    string s5 = s2 + " jack";
    cin >> s1;
    cin >> s3;
    cout << s1 << " " << s2 << " " << s3 << " " << s4 << endl;
    cout << s5;
    string s6;
    cout << "s6 is: " << s5 << endl;

    cout << (s1 < s2);
    cout << (s1 + s3);

    for (string::size_type idx = 0; idx < s2.size(); idx++) {
        char c = s2[idx];
        if (isalpha(c)) {
            c = toupper(c);
        }
        cout << c;
    }
}

void pracString2() {
    string line;
    while (getline(cin, line)) {
        cout << line;
        cout << line.size();
        cout << line.empty();
        int size = line.size();
        string::size_type sizeType = line.size();
        cout << size;
        cout << sizeType;
        cout << endl;
    }
}

// vector
void pracVector1() {
    vector<int> v1;
    vector<int> v2(5, 7);
    vector<int> v3(v2);
    vector<string> s4(3); // 3 elements, each initialized to ""

    v2[2] = 999; // 必须是已存在的元素才能用下标操作符进行索引
    cout << v2[2] << endl;
    v1.push_back(3);
    cout << v1[0] << v2[2] << v3[3] << s4[2] << endl;
    v1[1] = 10;
    cout << v1[1] << endl;
    cout << v1[2] << endl;

    for (vector<int>::iterator iterator = v2.begin(); iterator != v2.end(); iterator++) {
        *iterator = 8;
        cout << *iterator << endl;
    }

}


int main() {
//    std::cout << "Hello, World!" << std::endl;
//    reference();
//    printEnum();
//    pracString1();
    pracVector1();
    return 0;
}
