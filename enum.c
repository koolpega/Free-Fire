#include <stdio.h>

// Define enum
enum WeekDay { SUN, MON, TUE, WED, THU, FRI, SAT };

// Function to convert enum to string
const char* dayToString(enum WeekDay day) {
    switch (day) {
        case SUN: return "Sunday";
        case MON: return "Monday";
        case TUE: return "Tuesday";
        case WED: return "Wednesday";
        case THU: return "Thursday";
        case FRI: return "Friday";
        case SAT: return "Saturday";
        default: return "Invalid day";
    }
}

int main() {
    int input;
    enum WeekDay day;

    printf("Enter day number (0-6): ");
    scanf("%d", &input);

    // Check for valid input
    if (input < 0 || input > 6) {
        printf("Invalid input! Please enter a number between 0 and 6.\n");
    } else {
        day = (enum WeekDay)input;
        printf("Day: %s\n", dayToString(day));
    }

    return 0;
}
