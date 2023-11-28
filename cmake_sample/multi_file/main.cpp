#include <iostream>
#include <cstdio>
#include "add.h"

using namespace std;

int main()
{
    int num1,num2, sum;
    scanf("%d%d",&num1,&num2);
    sum = add(num1,num2);
    cout << "sum = " << sum << endl;
    return 0;
}