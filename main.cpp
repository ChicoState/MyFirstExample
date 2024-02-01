#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

/*
1. Upstream
- Main code
2. Origin
- Fork to create origin

3. Clone/Local
- git clone SSH or URL
- CD into correct Folder
- Push to update origin

3.1 Staging
git add files
git commit -m "Message resolves #62 resolves #32"
git push origin main

git remove -v will show you list of remotes
git remote set-url origin SSHkey

*/

int main()
{

    int x{};
    int y{};
    std::string inx{};
    std::string iny{};

    while (true)
    {
        std::cout << "Hi, please enter two whole numbers: ";
        std::cin >> inx;
        std::cin >> iny;
        int flag{0};

        for (char test : inx)
        {
            int res = test;
            if (res > 57)
            {
                ++flag;
            }
        }
        for (char test : iny)
        {
            if (test < 48 || test > 57)
            {
                ++flag;
            }
        }
        if (flag)
        {
            flag = 0;
            continue;
        }
        x = std::stoi(inx);
        y = std::stoi(iny);
        break;
    }

    std::cout << x << '+' << y << '=' << x + y << '\n';
    std::cout << x << '-' << y << '=' << x - y << '\n';
    std::cout << x << '*' << y << '=' << x * y << '\n';
    std::cout << x << '/' << y << '=' << x / y << " with remainder of " << x % y << '\n';
    std::cout << "Square Root of " << x << "is " << sqrt(x) << '\n';
    std::cout << "Square Root of " << y << "is " << sqrt(y) << '\n';
    std::cout << x << '^' << y << '=' << pow(x, y) << '\n';

    return 0;
}
