#include <ncurses.h>

int main()
{
        int width, height, midy, midx;
        initscr();
        getmaxyx(stdscr,height,width);
        midy = height>>1;
        midx=width>>1;
        move(midy,midx);
        addch('*');
        refresh();
        getch();
        endwin();

        return(0);
}