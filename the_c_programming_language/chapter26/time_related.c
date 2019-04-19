//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2016/04/16.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <time.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)
#define NEW_LINE printf("\n")

int main() {
    clock_t start_clock_time = clock();
    time_t start_time_time = time(NULL);

    printf("Clocks per second: %f\n", (double) CLOCKS_PER_SEC);
    printf("Time is: %f\n", (double)time(NULL));
    NEW_LINE;
    printf("Time translate ctime is %s", ctime(&start_time_time));
    struct tm *struct_time;
    struct_time = gmtime(&start_time_time);
    printf("Time translate struct tm, tm.tm_mon/tm.tm_mday: %d/%d\n", struct_time->tm_mon, struct_time->tm_mday);
    NEW_LINE;
    printf("Processor time used: %f sec.\n", (clock() - start_clock_time) / (double) CLOCKS_PER_SEC);
    printf("Runing time: %f sec.\n", difftime(start_time_time, time(NULL)));
}
