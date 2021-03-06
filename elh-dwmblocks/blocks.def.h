// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {" : ", "sudo xbps-install -S > /dev/null 2>&1; ~/.local/bin/xbps-updates",
     30, 0},
    {" : ", "pamixer --get-volume", 1, 0},
    {" ", "free -h | awk '/^Mem/ { print $3\"/\" $2 }' | sed s/i//g", 30, 0},
    {"", "date '+%b %d (%a) %I:%M%p'", 5, 0},
    /*  {"Kernel: ", "uname -r", 0, 0}, */

};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
