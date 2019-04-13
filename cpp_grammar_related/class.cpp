//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

class PrintFunc {
 public:
  void show_me();
  char name[10];
  int age;

};

void PrintFunc::show_me() {
    cout << "hello, c++ world\n";
    cout << name;
    cout << "\t";
    cout << age;
    cout << "\n";
}

int main() { 
    PrintFunc p;
    strcpy(p.name, "kaku");
    p.age = 18;
    p.show_me();
    return 0;
}
