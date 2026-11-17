#include <stdio.h>
union Student
{
int roll;
int age;
float marks;
};

int main()
{
  union Student s1;
  printf("Enter roll number: ");
  scanf("%d",&s1.roll);
  printf("Roll Number= %d\n", s1.roll);
  printf("Enter age: ");
  scanf("%d",&s1.age);
  printf("Age=%d\n",s1.age);
  printf("Enter marks: ");
  scanf("%f",&s1.marks);
  printf("Marks=%.2f\n",s1.marks);

  return 0;
}
