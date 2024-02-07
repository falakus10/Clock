#include <stdio.h>
#include <unistd.h>
int main(){
    int second;
    int minute;
    int hour;
    hour = minute = second = 0;
    while(1) {
        system("cls");
        printf("%02d: %02d: %02d", hour, minute, second);
        fflush(stdout);
        second++;
        if (second == 60) {
            minute = minute + 1;
            second = 0;
        }
        if (minute == 60) {
            hour = hour + 1;
            minute = 0;
        }
        if (hour == 24) {
            hour = 0;
            minute = 0;
            second = 1;
        }
        sleep(1);
    }
    return 0;
}
