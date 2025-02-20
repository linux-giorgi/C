#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void plays(const char *note) {
    // function to run audio files
    char com[100];
    snprintf(com, sizeof(com), "play -q %s.wav > /dev/null 2>&1 &", note);
    system(com);
}

int main() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    printw("Use 1, 2, 3, 4, 5, 6, 7 or q to quit.\n");
    printw("Press 'q' to quit.\n");
    refresh();
    int ch;
    while ((ch = getch()) != 'q') {
        switch (ch) {
            case '1':
                plays("C");
                break;
            case '2':
                plays("D");
                break;
            case '3':
                plays("E");
                break;
            case '4':
                plays("F");
                break;
            case '5':
                plays("G");
                break;
            case '6':
                plays("A");
                break;
            case '7':
                plays("B");
                break;
            default:
                printw("Use 1, 2, 3, 4, 5, 6, 7 or q to quit.\n");
                refresh();
                break;
        }
    }
    endwin();
    return 0;
}
