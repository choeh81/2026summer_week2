// 3. alarm.h: alarm 클래스 정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: timeOfDay형 wakeTime, bool형 inActive
// public 멤버함수 인라인으로 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정 (이건 내가 쓰는거: test할필요는 없는듯 이미 test해서 보내줌)
// -print: 표준스트림출력으로 멤버변수들 출력, hour:minute alarm is on/off 형식
// -wakeTime의 접근함수를 참조형식으로 구현

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
