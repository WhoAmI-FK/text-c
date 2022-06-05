#include <ncurses.h>

int main()
{
        char name[32];


        initscr();


        addstr("Type your name: ");
        refresh();
        getnstr(name,32);


        printw("Hello, %s",name);
        refresh();
        getch();


        endwin();
        return(0);
}
