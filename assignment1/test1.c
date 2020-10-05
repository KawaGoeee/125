#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "assignment1.h"

bool test_q1_1()  {
  if (concat_ints(1, 6) == 16)  {
    printf("Q1-1 ok\n");
    return true;
  }
  else  {
    printf("Q1-1 ERROR\n");
    return false;
  }
}

bool test_q1_2()  {
  if (concat_ints(999, 99) == 99999)  {
    printf("Q1-2 ok\n");
    return true;
  }
  else  {
    printf("Q1-2 ERROR\n");
    return false;
  }
}

bool test_q2_1()  {
  char c = 'D';
  upper2lowercase(&c);

  if (c == 'd')  {
    printf("Q2-1 ok\n");
    return true;
  }
  else  {
    printf("Q2-1 ERROR\n");
    return false;
  }
}


bool test_q2_2()  {
  char c = 'z';
  upper2lowercase(&c);

  if (c == 'z')  {
    printf("Q2-2 ok\n");
    return true;
  }
  else  {
    printf("Q2-2 ERROR\n");
    return false;
  }
}

bool test_q3_1()  {
  char str[] = "abcd123";
  left_rotate(str, 7);

  if (strcmp(str,"abcd123") == 0)  {
    printf("Q3-1 ok\n");
    return true;
  }
  else  {
    printf("Q3-1 ERROR\n");
    return false;
  }
}

bool test_q3_2()  {
  char str[] = "abcdefg";
  left_rotate(str, 2);

  if (strcmp(str,"cdefgab") == 0)  {
    printf("Q3-2 ok\n");
    return true;
  }
  else  {
    printf("Q3-2 ERROR\n");
    return false;
  }
}

bool test_q4_1()  {
  const int ar[3][5] =
    {
    {1,2,3,4,3},
    {9,6,5,3,5},
    {1,2,3,4,3}
    };

  if (contains_equal_columns(3, 5, ar))  {
    printf("Q4-1 ok\n");
    return true;
  }
  else  {
    printf("Q4-1 ERROR\n");
    return false;
  }
}

bool test_q4_2()  {
  const int ar1[3][5] =
    {
    { 1,2,3,4,3},
    {-1,6,3,3,4},
    { 1,2,3,5,3}
    };

  if (contains_equal_columns(3, 5, ar1) == false)  {
    printf("Q4-2 ok\n");
    return true;
  }
  else  {
    printf("Q4-2 ERROR\n");
    return false;
  }
}


bool test_q5_1()  {
  char* str1 = "5";
  char* str2 = "9";
  char* sum = str_compute_sum(str1, str2);
  if (sum && strcmp(sum, "14") == 0)  { // checks sum != NULL and the value is correct
    printf("Q5-1 ok\n");
    free(sum);
    return true;
  }
  else  {
    printf("Q5-1 ERROR\n");
    free(sum);
    return false;
  }
}


bool test_q5_2()  {
  char* str1 = "123530124";
  char* str2 = "981252430004";
  char* sum = str_compute_sum(str1, str2);
  if (sum && strcmp(sum, "981375960128") == 0)  { // checks sum != NULL and the value is correct
    printf("Q5-2 ok\n");
    free(sum);
    return true;
  }
  else  {
    printf("Q5-2 ERROR\n");
    free(sum);
    return false;
  }
}

int main()  {
  test_q1_1();
  test_q1_2();
  test_q2_1();
  test_q2_2();
  test_q3_1();
  test_q3_2();
  test_q4_1();
  test_q4_2();
  test_q5_1();
  test_q5_2();
  return 0;
}