#include <stdio.h>
struct Student
{
  int roll;
  int age;
  float marks;
};

int main()
{
  struct Student s1;
  printf("Enter roll number: ");
  scanf("%d", &s1.roll);
  printf("Enter age: ");
  scanf("%d",&s1.age);
  printf("Enter marks: ");
  scanf("%f", &s1.marks);

  printf("\n--- Student Detals ---\n");
  printf("Roll Number: %d\n", s1.roll);
  printf("Age: %d\n", s1.age);
  printf("Marks: %.2f\n", s1.marks);

  return 0;
}
