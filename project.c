#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <sys/time.h>

struct timetable
{
    char time[5];
    char destination[18];
};

struct station
{
    int stationNum;
    char station[18];
    int intervalFromGongneung;
};

typedef struct timetable Timetable;
typedef struct station Station;

char* const startStation = "Gongneung";

Timetable weekday[397];
Timetable saturday[343];
Timetable hoilday[343];

Station stations[51];

void LoadTimeTable();
void LoadStationInterval();
void ChooseCountOfStation();
void ChooseDestinationStation();
int CompareBetweenTimetableAndCurrentTime(); // if same 1, else 0
void PrintDurationOfTime();

int main(void)
{

}
