#include <stdio.h>
#include <stdlib.h>

// Tests: =================================================

void test_01(void)
{

}

// Main:  =================================================
typedef void (*test_func)(void); 
const int TESTS_SIZE = 1;
test_func tests[] = {
    &test_01,
    //&test_02,
    //&test_03,
    //&test_04,
  };

int main(int ac, const char **av)
{
    printf("Executing %s ...\n", av[0]);
    if (ac < 2)
    {
        printf("Please execute again and provide a valid test number [1, %d] !!\n", TESTS_SIZE);
        return -1;
    }
    int test_num = atoi(av[1]);
    if (test_num < 1 || test_num > TESTS_SIZE )
        printf("Please execute again and provide a valid test number [1, %d] !!\n", TESTS_SIZE);
    else
    {
        printf("=============\n-- Test %02d --\n-------------\n",
            test_num);
        tests[test_num - 1]();
    }
}