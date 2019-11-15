#include <ncurses.h>
#include <iostream>

int     main()
{
    initscr();
    // usleep();
    // curs_set(0);
    // keypad(stdsrc,true);
    // nodelay(stdsrc,true);
    /////////////
    // WINDOW *win;
    // win = newwin(height, width, y, x);
    // wrefresh(win);
    //delwin(win)
    /////////////////
    // start_color();
    // init_pair(1, COLOR_MAGENTA, COLOR_GREEN);
    // attron(COLOR_PAIR(1));
    // printw("Something");
    // attroff(COLOR_PAIR(1));
    ////color
    // noecho();
    // int x,y;
    // getmaxyx(stdscr, y, x);
    // move(y/2, x/2);
    // attron(A_BOLD);
    // attron(A_REVERSE);
    // printw("a");
    // attroff(A_BOLD);
    // attroff(A_REVERSE);
    // refresh();
    getch();
    ///////
    // raw();
    // int c;
    // printw("Write something (ESC to escape): ");
    // while ((c=getch())!=27)
    // {
    //     move(10, 0);
    //     printw("Keycode : %d, and the character %c", c, c);
    //     move(0, 0);
    //     printw("Write something");
    //     refresh();
    // }
    ///////
    // move(5, 10);
    // printw("Hello World");
    // mvprintw(5, 10, "no");
    // refresh();
    // getch();
    endwin();
    return (0);
}
