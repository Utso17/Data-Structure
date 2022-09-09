#include <iostream>
using namespace std;
struct TIME
{
  int seconds;
  int minutes;
  int hours;
};

void differenceBetweenTimePeriod (struct TIME t1, struct TIME t2, struct TIME *diff);
int main()
{
    struct TIME t1, t2, difference;
    cout << "Enter 1st time" << endl;
    cout << "Enter hours : ";
    cin >> t1.hours ;
    cout << "Enter minutes  : ";
    cin >> t1.minutes ;
    cout << "Enter seconds : ";
    cin >> t1.seconds;

    cout << "Enter 2nd time." << endl;
    cout << "Enter hours : ";
    cin >> t2.hours ;
    cout << "Enter minutes  : ";
    cin >> t2.minutes ;
    cout << "Enter seconds  : ";
    cin >> t2.seconds;

    differenceBetweenTimePeriod(t1, t2, &difference);
    cout << endl << "time difference: "<< difference.hours<<"  hours  " << difference.minutes << " minutes  " << difference.seconds<<"sec";
    return 0;
}
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *difference){

    if(t2.seconds > t1.seconds)
    {
        --t1.minutes;
        t1.seconds += 60;
    }
    difference->seconds = t1.seconds - t2.seconds;
    if(t2.minutes > t1.minutes)
    {
        --t1.hours;
        t1.minutes += 60;
    }
    difference->minutes = t1.minutes-t2.minutes;
    difference->hours = t1.hours-t2.hours;
}

