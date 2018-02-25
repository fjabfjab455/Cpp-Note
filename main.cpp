#include <iostream>
using namespace std;


//可以定义指针的指针，但不能定义引用的指针！也就是说指针不能去指向一个引用
//void swap(char** a, char** b) {
//    char* temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}

void swap(char* &a, char* &b) { //这叫指针的引用，也就是说用引用来引向一个指针
    char* temp;
    temp = a;
    a = b;
    b = temp;
}


int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
    int a = 3;
    int &ra = a; //ra不是int&类型，而是int类型。这是声明ra是a的引用，即rrra, rra, ra和a代表同一个东西
    int &rra = a;
    int &rrra = ra;
    cout << ra << rra << rrra << endl;

    char* pstr = "China";
    char* qstr = "America";
    swap(pstr, qstr);
    cout << pstr << endl;
    cout << qstr << endl;













    return 0;
}