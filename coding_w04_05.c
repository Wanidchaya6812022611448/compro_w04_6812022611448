// Case 1: Static Variable
#include <stdio.h>

void countCallStatic() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

void runCase1() {
    printf("Starting function calls...\n");
    countCallStatic();
    printf("After first call:\n");
    countCallStatic();
}

// Case 2: Non-Static Variable
void countCallNonStatic() {
    int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

void runCase2() {
    printf("Starting function calls...\n");
    countCallNonStatic();
    printf("After first call:\n");
    countCallNonStatic();
}

int main() {
    // Run Case 1
    printf("======= Case 1: Static Variable =======\n");
    runCase1();

    printf("\n======= Case 2: Non-Static Variable =======\n");
    runCase2();

    return 0;
}

/*/
คำถามท้ายโจทย์:
1. ผลลัพธ์ที่ได้ต่างกันอย่างไร? เพราะเหตุใด?
   - กรณี static ค่าของ counter จะเพิ่มขึ้นเรื่อย ๆ (1, 2)
     เพราะ static จะไม่ถูกรีเซ็ตค่าทุกครั้งที่เรียกฟังก์ชัน
   - กรณี non-static ค่า counter จะเท่ากับ 1 ทุกครั้ง
     เพราะตัวแปรถูกประกาศใหม่ทุกครั้งในฟังก์ชัน

2. ความแตกต่างของ Non-Static Variable?
   - Non-static variable มีอายุเฉพาะตอนฟังก์ชันถูกเรียก
     เมื่อจบฟังก์ชันจะถูกลบทิ้ง

3. อภิปราย และสรุปผลที่ได้จากการทดลอง:
   - static variable เหมาะกับการเก็บสถานะหรือข้อมูลที่ต้องการจำข้ามรอบการเรียกใช้
   - non-static variable เหมาะกับค่าชั่วคราวที่ใช้เฉพาะภายในแต่ละรอบ
   - การเลือกใช้อย่างเหมาะสมมีผลกับ logic และผลลัพธ์ของโปรแกรม
*/
