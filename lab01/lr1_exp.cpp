#include<iostream>
#include<limits>


template<class T>
T get_machine_zero(){
    T a = T(1.0);
    T zero = a;
    while (a > T(0.0)){
        zero = a;
        a /= 2;
    }
    return zero;
}


int main(){
    float zero_f = get_machine_zero<float>();
    float inf_f = std::numeric_limits<float>::max();
    float eps_f = std::numeric_limits<float>::epsilon();

    double zero_d = get_machine_zero<double>();
    double inf_d = std::numeric_limits<double>::max();
    double eps_d = std::numeric_limits<double>::epsilon();

    long double zero_ld = get_machine_zero<long double>();
    long double inf_ld = std::numeric_limits<long double>::max();
    long double eps_ld = std::numeric_limits<long double>::epsilon();

    std::cout << "-- Single precision mode --" << std::endl;
    std::cout << "Zero: " << zero_f << std::endl;
    std::cout << "Infinity: " << inf_f << std::endl;
    std::cout << "Epsilon: " << eps_f << std::endl << std::endl;

    std::cout << "-- Double precision mode --" << std::endl;
    std::cout << "Zero: " << zero_d << std::endl;
    std::cout << "Infinity: " << inf_d << std::endl;
    std::cout << "Epsilon: " << eps_d << std::endl << std::endl;

    std::cout << "-- Extended precision mode --" << std::endl;
    std::cout << "Zero: " << zero_ld << std::endl;
    std::cout << "Infinity: " << inf_ld << std::endl;
    std::cout << "Epsilon: " << eps_ld << std::endl;

    return 0;
}
