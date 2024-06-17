
#include <iostream>

void leftTriangleUpFullPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void leftTriangleDownFullPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void leftTriangleUpFullNumbersPattern(const int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}


void rectangleFullPattern(const int n, const int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}



void rightTriangleUpFullPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 2; j++)
        {
            std::cout << " ";
        }
        
        for (int j = n - i - 1; j < n ; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void leftTriangleUpFullNumbersIncrPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << i + 1;
        }
        std::cout << std::endl;
    }
}

void leftTriangleUpHollowPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0 || i == j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    for (int j = 0; j <= n; j++)
    {
        std::cout << "*";
    }
}


void rectangleHollowPattern(const int n, const int m)
{
    for (int j = 0; j < m; j++)
    {
        std::cout << "*" ;
    }
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i != 0 || i != n - 1) && (j == 0 || j == m - 1))
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    for (int j = 0; j < m; j++)
    {
        std::cout << "*";
    }
}

void leftTriangleFullAllNumsPatern(const int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            count++;
            std::cout << count;
        }
        std::cout << std::endl;
    }
}



void triangleOddEvenStarPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            std::cout << " ";
        }

        for (int j = 0; j <  i + 1; j++)
        {
            std::cout << "* ";  
        }
        std::cout << std::endl;
    }
}

void triangleOddStarUpPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++) 
        {
            std::cout << " ";
        }
        for (int j = 0 ; j < 2*i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}


void triangleAlphabetColPattern(const int n)
{
    char c = 'A';
    int asciiValue = (int)c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << (char)(c + j);
        }
        std::cout << std::endl;
    }
}


void triangleAlphabetLeftDownPattern(const int n)
{
    char c = 'A';
    int asciiValue = (int)c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            std::cout << (char)(c + j);
        }
        std::cout << std::endl;
    }
}

void triangleAlphabetRowPattern(const int n)
{
    char c = 'A';
    int asciiValue = (int)c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << (char)(c + i);
        }
        std::cout << std::endl;
    }
}


void triangleOddStarDownPattern(const int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}



void diamondStarPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = n - 2; i >= 0; i--)
    { 
        for (int j = 0; j < n - i - 1; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}


void trangleBigRightPattern(const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 2; j++)
        {
            std::cout << "*";
        }
     std::cout << std::endl;
    }
}


int main()
{
    //rectangleFullPattern(3, 4);
    //leftTriangleUpFullNumbersPattern(1);
    //rightTriangleUpFullPattern(5);
    //rectangleHollowPattern(8, 4);
    //leftTriangleUpHollowPattern(12);
    //leftTriangleDownFullPattern(5);
    //rightTriangleUpFullPattern(12);             
    //leftTriangleUpFullNumbersIncrPattern(5);
    //leftTriangleFullAllNumsPatern(4);
    //triangleOddEvenStarPattern(5);
    //triangleOddStarUpPattern(24);
    //triangleAlphabetColPattern(5);
    //triangleAlphabetLeftDownPattern(5);
    //triangleAlphabetRowPattern(5);
    //triangleOddStarDownPattern(15);
    //diamondStarPattern(8);
    trangleBigRightPattern(5);

    return 0;
}

