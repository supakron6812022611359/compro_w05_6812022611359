#include <stdio.h> 

int main() {
   
    char name1;
    int age1;
    float height1; 
    float weight1;
    char grade_code1;

    
    char name2;
    int age2;
    float height2;
    float weight2;
    char grade_code2;

    
    char name3;
    int age3;
    float height3;
    float weight3;
    char grade_code3;

    // ---------------------- ส่วนการรับข้อมูลจากผู้ใช้ ----------------------
    printf("Enter data for 3 people (NameAgeHeightWeightGradeCode):\n");
    printf("Example: K13167.556.0A\n");

    // รับข้อมูลส่วนบุคคลสำหรับบุคคลที่ 1
    printf("Person 1: ");
    // ใช้ ' ' (ช่องว่าง) ก่อน %c ใน scanf สำหรับข้าม whitespace ที่อาจหลงเหลืออยู่ใน buffer
    // ใช้ '*' สำหรับเป็นตัวคั่นตามที่โจทย์กำหนด
    scanf(" %c*%d*%f*%f*%c", &name1, &age1, &height1, &weight1, &grade_code1);

    // รับข้อมูลส่วนบุคคลสำหรับบุคคลที่ 2
    printf("Person 2: ");
    scanf(" %c*%d*%f*%f*%c", &name2, &age2, &height2, &weight2, &grade_code2);

    // รับข้อมูลส่วนบุคคลสำหรับบุคคลที่ 3
    printf("Person 3: ");
    scanf(" %c*%d*%f*%f*%c", &name3, &age3, &height3, &weight3, &grade_code3);

    // ---------------------- ส่วนการแสดงผลในรูปแบบตาราง ----------------------

    // พิมพ์เส้นคั่นบนสุดของตาราง
    printf("+-------+-----+----------+----------+------------+\n");
    // พิมพ์หัวตารางพร้อมการจัดตำแหน่ง
    // %-7s: จัดชิดซ้าย, กว้าง 7 ตัวอักษร
    // %-5s: จัดชิดซ้าย, กว้าง 5 ตัวอักษร
    // %-10s: จัดชิดซ้าย, กว้าง 10 ตัวอักษร
    // %-12s: จัดชิดซ้าย, กว้าง 12 ตัวอักษร
    printf("| %-5s | %-3s | %-8s | %-8s | %-10s |\n", "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");
    // พิมพ์เส้นคั่นกลางตาราง (ใต้หัวตาราง)
    printf("+-------+-----+----------+----------+------------+\n");

    // แสดงผลข้อมูลของแต่ละบุคคลพร้อมการจัดตำแหน่งในตาราง
    // %-7c: จัดชิดซ้าย, กว้าง 7 ตัวอักษร (สำหรับ Name)
    // %-5d: จัดชิดซ้าย, กว้าง 5 ตัวอักษร (สำหรับ Age)
    // %9.1f: จัดชิดขวา, กว้างรวม 9 ตัวอักษร, แสดงทศนิยม 1 ตำแหน่ง (สำหรับ Height)
    // %9.1f: จัดชิดขวา, กว้างรวม 9 ตัวอักษร, แสดงทศนิยม 1 ตำแหน่ง (สำหรับ Weight)
    // %-12c: จัดชิดซ้าย, กว้าง 12 ตัวอักษร (สำหรับ Grade Code)

    // ข้อมูล Person 1
    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name1, age1, height1, weight1, grade_code1);
    // ข้อมูล Person 2
    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name2, age2, height2, weight2, grade_code2);
    // ข้อมูล Person 3
    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name3, age3, height3, weight3, grade_code3);

    
    printf("+-------+-----+----------+----------+------------+\n");

    return 0; 
}