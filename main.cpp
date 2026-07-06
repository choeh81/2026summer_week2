#include "alarm.h"
#include "timeOfDay.h"

int main(){
    using namespace ChoEunhye2372048;
    timeOfDay t1, t2;
    std::cin >> t1 >> t2;
    std::cout << t1 << " " << t2 << std::endl;
    std::cout << ++t2 << std::endl;
    std::cout << t2++ << std::endl;
    std::cout << t2 << std::endl;

    if(t1==t2) std::cout << "same\n";
    else std::cout << "different\n";

    std::cout << t1 + t2 << std::endl;
}

// namespace ChoEunhye2372048
// {
//     bool compareTimeOfDay(const timeOfDay& t1, const timeOfDay& t2)
//     {
//         return t1.getHour() == t2.getHour() && t1.getMinute() == t2.getMinute();
//     }
// }

// int main()
// {
//     using namespace ChoEunhye2372048;
//     alarm a1;a1.print();
//     alarm a2{timeOfDay{11,44},1};a2.print();

//     if(compareTimeOfDay(a1.gethWakeTime(), a2.gethWakeTime())) std::cout << "same\n";
//     else std::cout << "different\n";
// };


