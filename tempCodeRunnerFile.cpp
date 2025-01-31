#include <iostream>
using namespace std;

int main() {
    int a = 5;       // ตัวแปรจำนวนเต็ม a = 5
    char b = 'A';    // ตัวแปรตัวอักษร b = 'A'
    char &c = b;     // Reference c อ้างอิงไปที่ b
    int *x = &a;     // Pointer x ชี้ไปที่ a
    char *y = &b;    // Pointer y ชี้ไปที่ b
    int **z = &x;    // Pointer z ชี้ไปที่ x (Pointer to Pointer)

    // แสดงค่าของตัวแปร a, b, c, x, y, z
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;
    
    // แสดงที่อยู่ของตัวแปร a, b, c, x, y, z
    cout << &a << " " << (void*)&b << " " << (void*)&c << " " << &x << " " << &y << " " << &z << endl;
    
    // เปลี่ยนค่า b ผ่าน Reference c
    c = 'F';
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;
    
    // เปลี่ยนค่า b ผ่าน Pointer y
    *y = 'W';
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;
    
    // เปลี่ยนค่า a ผ่าน Pointer x
    *x = 6;
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;
    
    // เปลี่ยนค่า a ผ่าน Pointer z
    **z = 7;
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;
    
    return 0;
}
