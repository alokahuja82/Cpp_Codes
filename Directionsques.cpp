/*A person wants to go from origin to a particular location, he can move in only 4 directions(i.e
East, West, North, South) but his friend gave him
a long route, help a person to find minimum
Moves so that he can reach to the destination.
Input –NESNWES
Output –E
You need to print the lexicographically sorted
string. Assume the string will have only ‘E’ ‘N’ ‘S’
‘W’ characters.
E.g –SSSNEEEW
output –EESS

*/


#include<iostream>
using namespace std;

int main() {
  int x=0,y=0;

  char ch = cin.get();

  while(ch != '\n'){
    if (ch == 'N')
      y++;
    if (ch == 'S')
      y--;
    if (ch == 'E')
      x++;
    if (ch == 'W')
      x--;
    ch = cin.get();
  }
  if(x>=0 and y>=0){
    for(int i=0;i<x;i++){
      cout<<"E";
    }
    for(int i=0;i<y;i++){
      cout<<"N";
    }
  }
  else if(x<=0 and y>=0){
    x *=-1;
    for(int i=0;i<x;i++){
      cout<<"W";
    }
    for(int i=0;i<y;i++){
      cout<<"N";
    }
  }
  else if (x<=0 and y<=0){
    x *=-1;
    y *=-1;
    for(int i=0;i<x;i++){
      cout<<"W";
    }
    for(int i=0;i<y;i++){
      cout<<"S";
    }
  }
  else{
    for(int i=0;i<x;i++){
      cout<<"E";
    }
    y *=-1;
    for(int i=0;i<y;i++){
      cout<<"S";
    }
  }
  return 0;
}
