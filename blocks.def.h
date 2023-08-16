//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "$HOME/.config/dwmblocks/ip",                5,                  1 },
	{"", "$HOME/.config/dwmblocks/memory",	        10,		            2 },
    {"", "$HOME/.config/dwmblocks/battery",           10,                 3 },
    {"", "$HOME/.config/dwmblocks/backlight",         0,                  4 },
	{"", "$HOME/.config/dwmblocks/volume",            0,                  5 },
	{"", "$HOME/.config/dwmblocks/clock",             60,                 6 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
