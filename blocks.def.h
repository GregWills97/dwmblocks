//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/    /*Command*/    /*Interval*/    /*Signal Num*/
	{"",        "gde-sbkernel",     0,               1},
	{"",        "gde-sbtemps",      3,               2},
	{"",        "gde-sbmemory",     3,               3},
	{"",        "gde-sbvolume",     0,               4},
	{"",        "gde-sbbattery",    5,               5},
	{"",        "gde-sbclock day",  3600,            6},
	{"",        "gde-sbclock time", 60,              7},
	{"",        "gde-sbinternet",   5,               8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
