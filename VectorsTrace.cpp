/*
Vectors Trace
Pawelski
5/12/2022
Please follow the insturctions on the activity guide!
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers1;
    std::vector<int> numbers2 = { 1, 2, 4, 5 };

    std::cout << numbers2[0] << "\n";
    std::cout << numbers2[2] << "\n";
    std::cout << numbers2[numbers2[1]] << "\n";

    int sum = numbers2[0] + numbers2[1] + numbers2[2] + numbers2[3];
    std::cout << "Sum of numbers1 = " << sum << "\n";

    //std::cout << numbers1[0] << std::endl;
    return 0;
}
