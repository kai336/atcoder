#include <ncurses.h>
#include <bits/stdc++.h>
using namespace std;

int K_ENTER = 10;
int K_ESC = 27;
int K_SPACE = 32;
int K_BACKSPACE = 127;
int K_TAB = 9;

void main_menu();
void type();
void tab_menu();

int main(){
    main_menu();
    return 0;
}

void main_menu(){
    initscr();
    noecho();
    curs_set(0);
    int y = 1;
    
    while(true){
        clear();
        mvprintw(y, 30, "Hello World");
        int ch = getch();
        if(ch == 'q') break;
        if(ch == K_ENTER) type();
        else{
            //cout << ch << endl;
        }
    }

    endwin();
    return;
}

void type(){
    initscr();
    noecho();
    curs_set(0);
    clear();
    mvprintw(12, 30, "test");
    while(true){
        
        int ch = getch();
        if(ch == K_TAB) tab_menu();
    }
}

void tab_menu(){
    initscr();
    noecho();
    curs_set(0);
    
    while(true){
        clear();
        mvprintw(12, 30, "enter to restart");
        mvprintw(15, 30, "esc to return");
        int ch = getch();
        if(ch == K_ESC){
            clear();
            endwin();
            exit(0);
        }
        else if(ch == K_ENTER) main_menu();
        else if(ch == K_TAB) return;
    }
}