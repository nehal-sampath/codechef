#include <iostream>
using namespace std;

int main() {
  int r;
  int b;
  r = 45;
  b = 23;
  if (r > b) {
    cout << "Rob Scored higher marks than Bob." << endl;
  } else if ( r == b) {
    cout << "Bob & Rob both scored the same" << endl;
  }
  
  r = 15;
  b = 15;
  if (r > b) {
    cout << "Rob Scored higher marks than Bob." << endl;
  } else if( r == b) {
    cout << "Bob & Rob both scored the same" << endl;
  }
  return 0;
}
