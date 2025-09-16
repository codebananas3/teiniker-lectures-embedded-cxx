#ifndef _MAILBOX_H
#define _MAILBOX_H

#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

namespace app {
    struct Mailbox {
        string owner;
        char messages[10];
        int count;
    }

    extern Mailbox mailbox;

    void mailbox_init(string owner="Unknown");
    void mailbox_add(char messages);
    void mailbox_add(char messages);
    void mailbox_add(char messages);    
}

#endif
