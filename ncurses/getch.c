#include <ncurses.h>

int main()
{
        int ch;
        initscr();
        addstr("Type text; press ~ to EXIT:\n");
        refresh();

        while((ch=getch())!='~');
        endwin();
        return(0);


}