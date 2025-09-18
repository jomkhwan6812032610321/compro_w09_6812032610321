#include <stdio.h>
int main() {
    int i = 1;

    do {
        printf("%d ", i);   //แสดงค่า i
        i++;    //เพิ่มค่า i ทีละ 1
        continue;   //ข้ามการทำงานในลูปนี้ไปเลย
    } while (i <= 10);  // i ไม่เกิน 10
    return 0;
}