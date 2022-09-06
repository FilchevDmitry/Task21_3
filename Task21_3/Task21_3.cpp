#include <iostream>
#include <cmath>
#include<vector>

struct Data_vector
{
    double x_one = 0;
    double y_one = 0;
    double x_two = 0;
    double y_two = 0;
    double scalar = 0;
};
double sum(double& x_one, double& x_two)
{
    return(x_one + x_two);
}
double diff(double x_one, double x_two)
{
    return(x_one - x_two);
}
double mult(double x_one, double x_two)
{
    return(x_one * x_two);
}
double div(double x_one, double x_two)
{
    return(x_one / x_two);
}
void data(Data_vector& vec,int operation)
{
    if (operation < 3) 
    {
        std::cout << "Enter the coordinates of the first vector :" << std::endl;
        std::cout << "x=";
        std::cin >> vec.x_one;
        std::cout << "y=";
        std::cin >> vec.y_one;
        std::cout << "Enter the coordinates of the second vector :" << std::endl;
        std::cout << "x=";
        std::cin >> vec.x_two;
        std::cout << "y=";
        std::cin >> vec.y_two;
    }
    else if (operation == 3)
    {
        std::cout << "Enter the coordinates of the vector :" << std::endl;
        std::cout << "x=";
        std::cin >> vec.x_one;
        std::cout << "y=";
        std::cin >> vec.y_one;
        std::cout << "Enter the coordinates of the scalar :" << std::endl;
        std::cout << "scalar=";
        std::cin >> vec.scalar;
    }
    else
    {
        std::cout << "Enter the coordinates of the vector :" << std::endl;
        std::cout << "x=";
        std::cin >> vec.x_one;
        std::cout << "y=";
        std::cin >> vec.y_one;
    }
}

int main()
{
    Data_vector vec;
    int operation=0;
    std::cout << "Enter the operation:\n1-add\n2-subtract\n3-scale\n4-length\n5-normalize\n";
    std::cin >> operation;
    if (operation == 1)
    {
        data(vec,operation);
        std::cout << "Result:(" << sum(vec.x_one, vec.x_two) << "," << sum(vec.y_one, vec.y_two)<<")"<<std::endl;
    }
    else if (operation == 2)
    {
        data(vec,operation);
        std::cout << "Result:(" << diff(vec.x_one, vec.x_two) << "," << diff(vec.y_one, vec.y_two) << ")" << std::endl;
    }
    else if (operation == 3)
    {
        data(vec,operation);
        std::cout << "Result:(" << mult(vec.x_one, vec.scalar) << "," << mult(vec.y_one, vec.scalar) << ")" << std::endl;
    }
    else if (operation == 4)
    {
        data(vec, operation);
        std::cout << "Result:(" << sqrt(mult(vec.x_one, vec.x_one) + mult(vec.y_one, vec.y_one)) << ")" << std::endl;
    }
    else if (operation == 5)
    {
        data(vec, operation);
        double norm = sqrt(mult(vec.x_one, vec.x_one) + mult(vec.y_one, vec.y_one));
        std::cout << "Result:(" << div(vec.x_one, norm) << "," << div(vec.y_one, norm) << ")" << std::endl;
    }

}

