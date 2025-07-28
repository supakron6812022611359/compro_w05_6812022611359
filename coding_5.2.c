#include <stdio.h>       // นำเข้า libary Stdio.h (Starndard Input Output Header) มาใช้งานฟังก์ชั่น input,output

int main() {             // สร้างฟังก์ชั่นหลักของโปรแกรม เพื่อเป็นจุดเริ่มต้นการทำงานเมื่อรันโปรแกรม
    char name[31];       // name เป็นชื่อที่จำกัดตัวอักษรทั้งหมด 30 ตัว
    int age;             // age เป็นตัวแปรรับค่า อายุ เป็นจำนวนเต็ม
    float height;        // height เป็นตัวแปรเก็บค่า ความสูง เป็นทศนิยม 1 ตำแหน่ง 

    char subject;        // Subject เป็นตัวแปรรับค่า วิชา เป็นอักษรตัวเดียว
    float grade;         // grade เป็นตัวแปรรับค่า เกรด เช่น 2.50 3.50 4.00
    char symbol;         // สร้างตัวแปร Symbol เพื่อมาเก็บค่า เกรดแบบไม่มีประจุ โดยใช้ char เนื่องจากค่าจะประกาศในตัวแปรเป็นตัวอักษรตัวเดียว

    char buffer[100];    // สร้างที่พักข้อมมูลชั่วคราวใน Ram สำหรับเก็บข้อความที่ input มาโดย Keyborad ขนาด 100 ตัวอักษร

    printf("Enter name, age, height: ");                        // แสดงผลข้อมูลสำหรับกรอกข้อมูล ชื่อ อายุ ส่วนสูง
    fgets(buffer, sizeof(buffer), stdin);                       // ใช้ fgets เพื่ออ้านข้อมูลจาก Keyborad และนำไปเก็บไว้ใน buffer
    sscanf(buffer, "%s %d %f", name, &age, &height);            // รับ ชื่อ(แบบ string ขนาด 30 ตัวอักษร), อายุ(เป็นเลขจำนวนเต็ม), ส่วนสูง(เป็นทศนิยม 1 ตำแหน่ง)

    printf("Enter subject, grade, symbol: ");                   // แสดงข้อความเพื่อให้กรอกข้อมูลของ ตัวอักษรตัวแรกของชื่อวิชา, เกรด, เกดรแบบไม่มีประจุ
    fgets(buffer, sizeof(buffer), stdin);                       // ใช้ fgets เพื่ออ้านข้อมูลจาก Keyborad และนำไปเก็บไว้ใน buffer
    sscanf(buffer, "%c %f %c", &subject, &grade, &symbol);      // รับ ชื่อวิชา(ตัวอักษรพิมพ์ใหญ่ตัวแรกของของวิชา), เกรดที่ได้(เป็นทศนิยม 2 ตำแหน่ง), ตัวอักษร(1 ตัว แทนเกรดแบบไม่มีประจุ)

    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height);                           // แสดงผลลัพธ์ของค่า ชื่อ, อายุ, ส่วนสูง
    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n", subject, name[0], grade, symbol);   // แสดงผลลัพธ์ของค่า ชื่อวิชา, ตัวอักษรตัวแรกของชื่อ, เกรดที่ได้, เกรดแบบไม่มีประจุ

    return 0;           // ทำการ reset ค่าของ code เพื่อสิ้นสุดกระบวนการ
}
