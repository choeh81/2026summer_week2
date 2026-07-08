#include "alarm.h"
#include "timeOfDay.h"
#include <array>


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



// int main(){
//     using namespace ChoEunhye2372048;
//     timeOfDay t1, t2;
//     std::cin >> t1 >> t2;
//     std::cout << t1 << " " << t2 << std::endl;
//     std::cout << ++t2 << std::endl;
//     std::cout << t2++ << std::endl;
//     std::cout << t2 << std::endl;

//     if(t1==t2) std::cout << "same\n";
//     else std::cout << "different\n";

//     std::cout << t1 + t2 << std::endl;
// }





namespace ChoEunhye2372048{
    void printAlarmArray(const alarm a[], const int n){
        for (int i=0; i<n; i++)
            std::cout << a[i];        
    }

    void parVal(timeOfDay v){ v += 1; }
    void parRef(timeOfDay& r){ r += 1; }
    void parPtr(timeOfDay* p){ *p += 1; }

    timeOfDay retVal(timeOfDay v){ v += 1; return v; }
    timeOfDay& retRef(timeOfDay& r){ r += 1; return r; }
    timeOfDay* retPtr(timeOfDay* p){ *p += 1; return p; }
}

// int main(){
//     using namespace ChoEunhye2372048;

//     const int n{4};
//     alarm a[n];

//     a[0] = alarm{"morning", {6,0}, 1};
//     a[1].setName("class");
//     a[1].setWakeTime({9,0});
//     a[1].setActive(1);
//     a[2].input();
    
//     std::cin >> a[3];
//     printAlarmArray(a,n);

//     std::array<alarm, n> b;
//     for(int i = 0 ; i < b.size(); ++i)
//         b.at(i) = a[i]; // b[i]
//     for (const auto& bi : b)
//         bi.print();
// }

int main()
{
    using namespace ChoEunhye2372048;

    timeOfDay val{11, 30}; std::cout << val << " ";
    parVal(val); std::cout << val << std::endl;
    timeOfDay& ref{val}; std::cout << ref << " ";
    parRef(ref); std::cout << ref << std::endl;
    timeOfDay* ptr{&val}; std::cout << *ptr << " ";
    parPtr(ptr); std::cout << *ptr << std::endl;
    
    val = timeOfDay{15, 30}; 
    std::cout << val << " " << retVal(val) << "\n"; //return값이 있으면 바로 std::cout 뒤에 쓸 수 있음
    std::cout << ref << " " << retRef(ref) << "\n";
    std::cout << *ptr << " " << *retPtr(ptr) << "\n";

    // timeOfDay t1, t2;
    // std::cin >> t1 >> t2;
    // std::cout << t1 << " " << t2 << std::endl;
    // std::cout << ++t2 << std::endl;
    // std::cout << t2++ << std::endl;
    // std::cout << t2 << std::endl;

    timeOfDay *tPtr{new timeOfDay};
    tPtr->setHour(18);
    tPtr->setMinute(30);
    std::cout << *tPtr << std::endl;
    delete tPtr;

}