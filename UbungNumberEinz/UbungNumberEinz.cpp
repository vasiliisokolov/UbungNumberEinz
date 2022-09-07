#include <iostream>
#include <vector>

std::vector<int> replace(std::vector<int>);

int main()
{
    int n, remove;
    std::cout << "Enter vector  size!" << std::endl;
    std::cin >> n;
    std::cout << "Fill the vector!" << std::endl;
    std::vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        std::cin >> vec[i];
    }
    std::cout << "Enter the value to be removed:\n";
    std::cin >> remove;
    


}

std::vector<int> replace(std::vector<int> vec)
{
    for (int i = vec.size() - 1; i != 0; i--)
    {
        if()
        vec.pop_back();
        
    }


        return vec;
}