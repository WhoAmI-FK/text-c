#include <ncurses.h>

int main()
{
        initscr();
        addstr("This text is ");
        attron(A_BOLD);
        addstr("bold");
        attroff(A_BOLD);
        addch('\n');
        addstr("This text is ");
        attron(A_REVERSE);
        addstr("reverse");
        attroff(A_REVERSE);
        addch('\n');
        addstr("This text is ");
        attron(A_UNDERLINE);
        addstr("underlined");
        attrset(A_NORMAL);
        addch('\n');
        refresh();
        getch();
        endwin();

        return(0);
}