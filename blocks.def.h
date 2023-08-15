//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "dwmblocks-ip",                5,                  1 },
	{"", "dwmblocks-memory",	        10,		            2 },
    {"", "dwmblocks-battery",           10,                 3 },
    {"", "dwmblocks-backlight",         0,                  4 },
	{"", "dwmblocks-volume",            0,                  5 },
	{"", "dwmblocks-clock",             60,                 6 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
