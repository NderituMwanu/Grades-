#include<stdio.h>
int main()

{
int marks, grade;
printf("ENTER marks \n");
scanf("%d", & marks);

      if (marks>=75)
        {
            printf("grade is A\n");
        }

      else (marks>=65)
          {
              printf("grade is B\n");
          }

        else (marks>=55)
            {
                printf("grade is C\n");
            }

        else (marks>=45)
              {
                  printf("grade is SUP\n");
              }

            else (marks<45);
                {
                    printf("grade is FAIL\n");
                }

  return 0;

}
