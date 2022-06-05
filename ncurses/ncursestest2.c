#include <ncurses.h>

int main()
{
        initscr();
        printw("this is Ncurses version %s\n",NCURSES_VERSION);
        refresh();
        getch();
        endwin();
        return(0);
}