// #include <iostream>
// #include <cstdio>
#include <stdio.h>
#include "./add_dir/add.h"

//using namespace std;

int main()
{
    int num1,num2, sum;
    scanf("%d%d",&num1,&num2);
    sum = add(num1,num2);
    printf("sum = %d\n",sum);
    // cout << "sum = " << sum << endl;
    return 0;
}