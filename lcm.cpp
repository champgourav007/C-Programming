#include <iostream>

int hcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    if (a == b)
    {
        return a;
    }
    if (a < b)
    {
        return hcf(a, b - a);
    }
    else
    {
        return hcf(a - b, b);
    }
}

int main()
{
    std::cout << "Enter two numbers : ";
    int a, b;
    std::cin >> a >> b;
    while (a != 0 && b != 0)
    {
        if(a < b){
            b = b - a;
        }
        else{
            a = a - b;
        }
        if(a == b){
            break;
        }
    }
    

    int ans = hcf(a, b);
    std::cout << "LCM of " << a << " and " << b << " is : " << (a * b) / ans << std::endl;
}