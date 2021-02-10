#include <iostream>
using namespace std;

class Player1 {
public:
  void Attack () {  cout << "enemy takes 10 points of damage. " << endl; }
};

class Player2 {
public:
  void Attack () {  cout << "enemy takes 20 points of damage. " << endl; }
};

class Player3 {
public:
  void Attack () {  cout << "enemy takes 30 points of damage. " << endl; }
};

class All_out_attack {
public:
  Player1 p1;
  Player2 p2;
  Player3 p3;

  void all_out_attack (){
    p1.Attack();
    p2.Attack();
    p3.Attack();
  }
};

int main (){
  All_out_attack aoa;
  aoa.all_out_attack();

  return 0;
}
