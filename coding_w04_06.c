#include <stdio.h>

// ประกาศค่าคงที่แบบ global (ใช้ได้ทุกฟังก์ชัน)
const int GLOBAL_RATE = 10;  // ค่าคงที่ GLOBAL_RATE มีค่า 10

void calculate() {
    // ประกาศค่าคงที่แบบ local (ใช้ได้เฉพาะในฟังก์ชันนี้เท่านั้น)
    const int LOCAL_BONUS = 50;  // ค่าคงที่ LOCAL_BONUS มีค่า 50

    // แสดงค่าทั้งสอง
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();  // เรียกใช้ฟังก์ชัน calculate()

    // แสดงค่าคงที่ GLOBAL_RATE ใน main ได้ (เพราะเป็น global)
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);



    return 0;
}

/*/
	1.	ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?
	  •	GLOBAL_RATE คือค่าคงที่ที่ประกาศนอกฟังก์ชัน (Global) ใช้ได้ทุกฟังก์ชัน
	  •	LOCAL_BONUS คือค่าคงที่ที่ประกาศในฟังก์ชัน calculate() (Local) ใช้ได้เฉพาะภายในฟังก์ชันนั้น
	2.	เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80;?
	  •	จะเกิด Compile-time Error เพราะ const คือค่าคงที่ ไม่สามารถเปลี่ยนค่าได้หลังการประกาศ
	3.	ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้?
	  •	เพราะ LOCAL_BONUS ถูกประกาศใน calculate() จึงมองเห็นได้แค่ในฟังก์ชันนั้น
        ฟังก์ชันอื่นเช่น main() จะไม่สามารถเข้าถึงตัวแปรนี้ได้ (Scope จำกัดเฉพาะภายในฟังก์ชัน)
	4.	อธิบายและสรุปผลที่ได้จากการทดลอง
	  •	ค่าคงที่แบบ Global ใช้ได้ทุกที่ในโปรแกรม
	  •	ค่าคงที่แบบ Local ใช้ได้เฉพาะภายในฟังก์ชันที่ประกาศ
	  •	การเปลี่ยนค่า const จะทำให้เกิด compile error
*/