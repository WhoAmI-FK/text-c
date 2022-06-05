#include <ncurses.h>

int main()
{
        initscr();
        if(!has_colors())
        {
                endwin();
                puts("Ncurses reports colors unavailable");
                return(1);
        }
        if( start_color() != OK)
        {
                endwin();
                puts("Unable to start Ncurses color text");
                return(1);
        }
        printw("Ncurses reports %d colors available\n",COLORS);
        printw("and up to %d color pairs.",COLOR_PAIRS);
        refresh();
        getch();
        endwin();
        return(0);
}