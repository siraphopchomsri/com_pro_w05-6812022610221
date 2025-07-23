#include <stdio.h> // Include the standard input-output header file

int main() {
    // ประกาศตัวแปรสำหรับเก็บข้อมูลของแต่ละคน (3 คน)
    //คน1
    char name1;//ใช้ char เพื่อเก็บชื่อ (ตัวอักษรเดียว)
    int age1;//ใช้ int เพื่อเก็บอายุ (เลขจำนวนเต็ม)
    float height1;//ใช้ float เพื่อเก็บส่วนสูง (หน่วยเป็นเซนติเมตร) 
    float weight1;//ใช้ float เพื่อเก็บน้ำหนัก (หน่วยเป็นกิโลกรัม)
    char grade_code1;//ใช้ char เพื่อเก็บรหัสเกรด (ตัวอักษรเดียว)

    //คน2
    char name2;//ใช้ char เพื่อเก็บชื่อ (ตัวอักษรเดียว)
    int age2;//ใช้ int เพื่อเก็บอายุ (เลขจำนวนเต็ม)
    float height2;//ใช้ float เพื่อเก็บส่วนสูง (หน่วยเป็นเซนติเมตร)
    float weight2;//ใช้ float เพื่อเก็บน้ำหนัก (หน่วยเป็นกิโลกรัม)
    char grade_code2;//ใช้ char เพื่อเก็บรหัสเกรด (ตัวอักษรเดียว)

    //คน3
    char name3;//ใช้ char เพื่อเก็บชื่อ (ตัวอักษรเดียว)
    int age3;//ใช้ int เพื่อเก็บอายุ (เลขจำนวนเต็ม)
    float height3;//ใช้ float เพื่อเก็บส่วนสูง (หน่วยเป็นเซนติเมตร)
    float weight3;//ใช้ float เพื่อเก็บน้ำหนัก (หน่วยเป็นกิโลกรัม)
    char grade_code3;//ใช้ char เพื่อเก็บรหัสเกรด (ตัวอักษรเดียว)

   
    printf("Enter data for 3 people (NameAgeHeightWeightGradeCode):\n");// ข้อมูลสำหรับ 3 คน
    printf("Example: K13167.556.0A\n");// ตัวอย่างการป้อนข้อมูล: K13167.556.0A

    // รับข้อมูลสำหรับคนที่ 1
    printf("Person 1: ");//
   
    scanf(" %c*%d*%f*%f*%c", &name1, &age1, &height1, &weight1, &grade_code1);
    // รับข้อมูลสำหรับคนที่ 2
    printf("Person 2: ");
    scanf(" %c*%d*%f*%f*%c", &name2, &age2, &height2, &weight2, &grade_code2);

    // รับข้อมูลสำหรับคนที่ 3
    printf("Person 3: ");
    scanf(" %c*%d*%f*%f*%c", &name3, &age3, &height3, &weight3, &grade_code3);

   
  
    printf("+-------+-----+----------+----------+------------+\n");// แสดงหัวตาราง
    
    printf("| %-5s | %-3s | %-8s | %-8s | %-10s |\n", "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");// แสดงชื่อคอลัมน์
   
    printf("+-------+-----+----------+----------+------------+\n");// แสดงเส้นแบ่งตาราง


    // แสดงข้อมูลคน 1
    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name1, age1, height1, weight1, grade_code1);
    // ข้อมูลคน 2
    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name2, age2, height2, weight2, grade_code2);
    // ข้อมูลคน 3
    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name3, age3, height3, weight3, grade_code3);

    
    printf("+-------+-----+----------+----------+------------+\n");// แสดงเส้นแบ่งตาราง

    return 0;
} 