#pragma once
#include "timeOfDay.h"

namespace ChoEunhye2372048
{
   class alarm
   {
        private:
            timeOfDay wakeTime{};
            bool inActive{};

        public:
        alarm(timeOfDay t = timeOfDay{1,1}, bool a = false) : wakeTime{t}, inActive{a} {}
        void print()
        {
            wakeTime.print();
            std::cout << " alarm is " << ( (inActive) ? "on" : "off" ) << "\n"; //inActive가 ture 면 on, false면 off
        }
        const timeOfDay& gethWakeTime() const {return wakeTime;}
        void setWakeTime(const timeOfDay& t) {wakeTime = t;} //참조형식 아니고 값형식
   };
}
