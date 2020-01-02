#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  double deg, dis;
  int buf;
  cin >> deg >> dis;
  string houi, dir;
  buf = (deg+112.5)/225;
  switch ( buf ) {
    case 1:
      dir = "nne";
      break;
    case 2:
      dir = "ne";
      break;
    case 3:
      dir = "ene";
      break;
    case 4:
      dir = "e";
      break;
    case 5:
      dir = "ese";
      break;
    case 6:
      dir = "se";
      break;
    case 7:
      dir = "sse";
      break;
    case 8:
      dir = "s";
      break;
    case 9:
      dir = "ssw";
      break;
    case 10:
      dir = "sw";
      break;
    case 11:
      dir = "wsw";
      break;
    case 12:
      dir = "w";
      break;
    case 13:
      dir = "wnw";
      break;
    case 14:
      dir = "nw";
      break;
    case 15:
      dir = "nnw";
      break;
    default :
      dir = "n";
      break;
  }
  int huryoku;
  dis = round(float(dis)/6.0);
  if(dis <= 2){
    huryoku = 0;
    dir = "C";
  }else if(dis <= 15) huryoku = 1;
  else if(dis <= 33) huryoku = 2;
  else if(dis <= 54) huryoku = 3;
  else if(dis <= 79) huryoku = 4;
  else if(dis <= 107) huryoku = 5;
  else if(dis <= 138) huryoku = 6;
  else if(dis <= 171) huryoku = 7;
  else if(dis <= 207) huryoku = 8;
  else if(dis <= 244) huryoku = 9;
  else if(dis <= 284) huryoku = 10;
  else if(dis <= 326) huryoku = 11;
  else huryoku = 12;

  cout << dir << " " << huryoku << endl;
  return 0;
}
