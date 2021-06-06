//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] =
{
/*  ICON   COMMAND                                        UPDATE INTERVAL  UPDATE SIGNAL */
    {"",   "~/Desktop/dwmblocks/scripts/network",         5,               0},
    {" ", "~/Desktop/dwmblocks/scripts/outputVolume",    0,               10},
    {" ", "~/Desktop/dwmblocks/scripts/inputVolume",     0,               11},
    {"",   "~/Desktop/dwmblocks/scripts/date",            60,              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
