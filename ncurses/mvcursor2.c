#include <ncurses.h>
#include <string.h>

int main()
{
        char center_text[]="Powered by Ncurses";
        int width, height, y, x,len;
        initscr();
        getmaxyx(stdscr,height,width);
        len = strlen(center_text);
        y = height>>1;
        x = (width>>1)-(len>>1);
        mvaddstr(y,x,center_text);
        refresh();
        getch();
        endwin();

        return(0);
}