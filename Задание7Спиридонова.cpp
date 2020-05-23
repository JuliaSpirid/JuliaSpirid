#include <iostream>
#include "MIREA.h"
using namespace std;
int main()
{
    //Создать МИРЭА
    MIREA mirea;
    //Временные объекты типа "студент"
    Student temp_student("Stud1", "stud1@mirea.ru", "1110-1101", 4, 1);
    mirea.addStudent(temp_student);
    Student temp_student2("Stud2", "stud2@mirea.ru", "1110-1101", 4, 2);
    mirea.addStudent(temp_student2);
    mirea.printStudents();
}