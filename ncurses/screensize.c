#include <ncurses.h>

int main()
{
        int width,height;
        initscr();
        getmaxyx(stdscr,height,width);
        printw("The standard screen is %d rows by %d columns.\n",height,width);
        refresh();
        getch();
        endwin();
        return(0);

}