#include <stdio.h>

enum Day { MONDAY, TUESDAY,WEDNESDAY,THURSDAY,FRIDAY, SATURDAY,SUNDAY};
int main() {
    
    enum Day today = WEDNESDAY;

    printf("The value of today (WEDNESDAY) is: %d\n", today);

    switch (today) {
        case MONDAY:
            printf("It's Monday, the start of the work week.\n");
            break;
        case TUESDAY:
            printf("It's Tuesday, second day of the week.\n");
            break;
        case WEDNESDAY:
            printf("It's Wednesday, midweek!\n");
            break;
        case THURSDAY:
            printf("It's Thursday, almost there.\n");
            break;
        case FRIDAY:
            printf("It's Friday, end of the work week.\n");
            break;
        case SATURDAY:
            printf("It's Saturday, weekend time!\n");
            break;
        case SUNDAY:
            printf("It's Sunday, the day of rest.\n");
            break;
        default:
            printf("Invalid day.\n");
            break;
    }

}
