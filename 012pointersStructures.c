//working with pointers and structures  page 285
/*
1.structures are defined like this
struct date {
    int month;
    int day;
    int year;
};
struct date todaysDate;
2. we can define a variable to be a pointer to a struct date variable:
struct date *datePtr;
datePtr = &todaysDate;
after this assignment, we can indirectly access any of the members of the date structure pointed by datePtr
(*datePtr).day = 21;
3. to test the value of month stored in the date structure pointed by datePtr, we can write a statement
if ((*datePtr).month == 12)
    printf("It's July\n");
*/