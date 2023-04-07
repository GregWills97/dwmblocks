//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"/home/greg/Documents/gde/dwmblocks/gde-sbkernel",		0,		1},
	{"",	"/home/greg/Documents/gde/dwmblocks/gde-sbtemps",		3,		2},
	{"",	"/home/greg/Documents/gde/dwmblocks/gde-sbmemory",		3,		3},
	{"",	"/home/greg/Documents/gde/dwmblocks/gde-sbvolume",		0,		4},
	{"",	"/home/greg/Documents/gde/dwmblocks/gde-sbbattery",		5,		5},
	{"",	"/home/greg/Documents/gde/dwmblocks/gde-sbclock day",	3600,	6},
	{"",	"/home/greg/Documents/gde/dwmblocks/gde-sbclock time",	60,		7},
	{"",	"/home/greg/Documents/gde/dwmblocks/gde-sbinternet",	5,		8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
