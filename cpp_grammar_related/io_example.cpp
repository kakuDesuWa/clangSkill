//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
  const int age = 18;
  cout << "Enter you Password:____\b\b\b\b";
  int code;
  cin >> code;
  cout << "You Password is " << code << endl;
  cout << "Let them eat g\u00e2teau.\n";
  cout << "sizeof(float) " << sizeof(float) << endl;
  cout << "sizeof(int) " << sizeof(unsigned int) << endl;
  cout << 3 / 1;
  cout << -3 / 1;
  cout << 3 / -1;
  cout << -3 / -1 << endl;

  cout << 3 % 2;
  cout << -3 % 2;
  cout << 3 % -2;
  cout << -3 % -2 << endl;

  cout << -7 % 4 << endl;
  cout << (int)1.3 << endl;
  return 0;
}