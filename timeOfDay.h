#pragma once
#include <iostream>

namespace ChoEunhye2372048
{
    class timeOfDay
    {
    private:
        int hour{};
        int minute{};
        void testHour(){
            if( (hour<0) || (hour>23) ) {
                std::cout << "Invaild hour\n";
                std::exit(1);} 
        };
        void testMinute(){
            if( (minute<0) || (minute>59) ) {
                std::cout << "Invaild minute\n";
                std::exit(1);};
        };

    public:
        timeOfDay(int h = 0, int m = 0) : hour{h}, minute{m}
        {testHour();
        testMinute();}

        void input(){
            std::cout << "Enter hour(0~23): ";
            std::cin >> hour;
            testHour();
            std::cout << "Enter minute(0~59): ";
            std::cin >> minute;
            testMinute();
        };
        
        void setHour(int h) {
            hour = h; 
            testHour();}
        void setMinute(int m){
            minute = m;
            testMinute();}
        void print() const{
            if(hour<10) std::cout << "0";
            std::cout << hour << ":" ;
            if(minute<10) std::cout << "0";
            std::cout << minute;}
        int getHour() const {return hour;}
        int getMinute() const {return minute;}




        timeOfDay operator++(){
            ++minute; // 0~59 사이의 값이어야 함, 59인 경우는 시간이 +1 되어야함
            if ( minute == 60 ) { minute = 0; ++hour; }// 0~23 사이의 값이어야 함, 넘어가면 0으로 리셋
            if( hour == 24 ) { hour = 0; }
            return timeOfDay{hour, minute};
        }
        timeOfDay operator++(int){
            timeOfDay temp{hour, minute};
            minute++;
            if ( minute == 60 ) { minute = 0; ++hour; }// 0~23 사이의 값이어야 함, 넘어가면 0으로 리셋
            if( hour == 24 ) { hour = 0; }
            return temp;
        }
        
        friend std::istream& operator>>(std::istream& is, timeOfDay& t){
        //std::cin (input()) -> is
            std::cout << "Enter hour(0~23): "; //지워도 된다는데 이유를 모르겠음 7/6 11:17 녹화 참고
            is >> t.hour;
            t.testHour();
            std::cout << "Enter minute(0~59): "; //지워도 된다는데 이유를 모르겠음 7/6 11:17 녹화 참고
            is >> t.minute;
            t.testMinute();
            return is;
        }

        friend std::ostream& operator<<(std::ostream& os, const timeOfDay& t){
        //std::cout (print()) -> os
            if(t.hour < 10) os << "0";
            os << t.hour << ":" ;
            if(t.minute < 10) os << "0";
            os << t.minute;
            return os;
        }
        friend bool operator==(const timeOfDay& t1, const timeOfDay& t2){
            return t1.hour == t2.hour && t1.minute == t2.minute;
        }
        friend timeOfDay operator+(const timeOfDay& t1, const timeOfDay& t2){
        //59+1=60 되면서 hour+1
            int minute1{t1.minute + t1.hour*60};
            int minute2{t2.minute + t2.hour*60};
            int totalMinute{minute1+minute2};
            int newHour{totalMinute / 60};
            int newMinute{totalMinute % 60}; //0~23이어야 함
            if(newHour>24) newHour = newHour %= 24; // = newHour % 24
            return timeOfDay{newHour, newMinute};
        }

    };
};

