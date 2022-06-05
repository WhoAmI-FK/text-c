#include <ncurses.h>

int main()
{
        int cp, foreground, background;

        initscr();
        start_color();

        cp = 1;

        for( foreground=0;foreground<8;foreground++)
        {
                for(background=0;background<8;background++)
                {
                        init_pair(cp,foreground,background);
                        attrset(COLOR_PAIR(cp));
                        printw("Pair %d %d ",foreground,background);
                        cp++;
                }
                addch('\n');
        }
        refresh();
        getch();
        endwin();

        return(0);

}