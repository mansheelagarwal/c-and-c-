#include <iostream>

using namespace std;

int main()
{
    int num1=10, num2=20, temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("Num1=%d",num1);
    printf("\nNum2=%d",num2);
    return 0;

}
