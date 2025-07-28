int main() {
    char nameInitial = 'Aom';  // charใช้กำหนดค่าตัวอักษร
    int age = 19; //intใช้กำหนดจำนวนเต็มอายุ
    float weight = 100.5;  //floatใช้กำหนดค่าน้ำหนักทศนิยม
    char gender [] = "Female"; //charใช้กำหนดอักษรตัวแปรเพศ
    printf("nameInitial: %c\n", nameInitial);  //%cใช้ประกาศตัวแปรที่เป็นตัวอักษร
    printf("Age: %d\n", age);  //%dใช้ประกาศตัวแปรที่เป็นตัวเลขจำนวนเต็ม
    printf("wight: %.1f kg\n", weight);  //%.1fใช้ประกาศตัวแปรที่เป็นตัวเลขทศนิยม
    printf("Gender: %s\n", gender);  //%sใช้ประกาศตัวแปรที่เป็นข้อความ

    return 0;
}