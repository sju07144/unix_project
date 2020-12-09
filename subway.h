#ifndef __SUBWAY_H__
#define __SUBWAY_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <signal.h>
#define WEEKDAY_SIZE 397
#define SATURDAY_SIZE_AND_HOLIDAY_SIZE 343
#define STATION_INTERVAL_SIZE 51

struct timetable
{
    char _time[10];
    char destination[100];
};

struct station
{
    int stationNum;
    char station[30];
    int intervalFromGongneung;
};

typedef struct timetable Timetable;
typedef struct station Station;

int CanStartSimulation(); // 시작 여부 판정
void LoadTimeTable(); // 지하철 시간표 불러오기
void LoadStationInterval(); // 지하철 시간간격표 불러오기
void ChooseCountOfStation(); // 역 개수 고르기
void ChooseDestinationStation(); // 도착역 고르기
struct tm* FindCurrentTimeByTm(); // 현재 시간 찾기(struct tm)
void ChangeTimeFromCharToInt(); // char* 타입의 시간을 int 타입으로 바꾸기
/*
    현재 시간과 가장 가까운 열차 출발시간의 index 가져오기
*/
int FindStartTimeWeekdayIndex(); 
int FindStartTimeSaturdayIndex();
int FindStartTimeHolidayIndex();
int CompareBetweenTimetableAndCurrentTime(char* _destination); // if same 1, else 0
int ReturnStationNumber(char* station); // 역 번호 맵핑
void PrintDurationOfTime(); // 지속시간 출력
void PrintDurationOfTimeAtAllProcess(); // 모든 프로세스에 대해 출력

#endif
