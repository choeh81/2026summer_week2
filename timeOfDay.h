// 1. 본인이름학번의 네임스페이스
// -본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 1234567일 경우 KimPro1234567
// using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.
// -using 지시자 예: { using namespace std; cout << "Enter your id: "; }
// -네임스페이스 지정자 예: std::cout << "Enter your id: ";

#pragma once
#include <iostream>

namespace ChoEunhye2372048
{
    class timeOfDay
    {
        private:
            int hour{};
            int minute{};
            void testHour()
            {
                if( (hour<0) || (hour>23) )
                {
                    std::cout << "Invaild hour\n";
                    std::exit(1);
                }
            };
            void testMinute()
            {
                if( (minute<0) || (minute>59) )
                {
                    std::cout << "Invaild minute\n";
                    std::exit(1);
                };
            };

        public:
            timeOfDay(int h = 1, int m = 1)
            : hour{h}, minute{m}
            {
                testHour();
                testMinute();
            }

            void input
            (
                std::cout << "Enter hour(0~23): ";
                std::cin >> hour;
                void testHour();
                std::cout << "Enter minute(0~59): ";
                std::cin >> minute;
                void testMinute();
            );
        
            void setHour(int h) 
            {
                hour = h; 
                testHour();
            }
            void setMinute(int m)
            {
                minute = m;
                testMinute();
            }
            void print() const
            {
                if(hour<10) std::cout << "0";
                std::cout << hour << ":" 
                if(minute<10) std::cout << "0";
                std::cout << minute;
            }
            int getHour() const {return hour;}
            int getMinute() const {return minute;}
            
    };
};


// 2. timeOfDay.h: timeOfDay 클래스 정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: int형 hour, int형 minute
// private 멤버함수 정의
// -testHour: hour는 0~23가 아니면 프로그램 종료
// -testMinute: minute은 0~59가 아니면 프로그램 종료


// public 멤버함수 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정, test함수들 호출
// -input: 표준스트림입력으로 멤버변수들 입력, test함수들 호출
// -set 접근함수들: 멤버변수 값 설정 및 test함수 호출
// const 멤버함수 정의
// -print: 표준스트림출력으로 멤버변수들 출력, 1자리수면 앞에 0을 붙여줌, hour:minute형식
// -get 접근함수들: 멤버변수 값 리턴