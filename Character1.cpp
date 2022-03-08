#include <iostream>
using namespace std;
int main(){
    int upperLT=0 , lowerLT=0;
    char text[10000];
    cin >> text;
    for(int i=0 ; text[i] != '\0' ;i++){
        if(text[i] >= 'A' && text[i] <= 'Z') {
      upperLT = 1 ;
    }
    else { 
      lowerLT = 1 ;
    }
  }
    if ( upperLT == lowerLT ) {
    cout << "Mix";
  }
  else if (lowerLT == 1) {
    cout <<"All Small Letter";
  }
  else if (upperLT == 1) { 
    cout << "All Capital Letter" ; 
  }
  return 0;

}