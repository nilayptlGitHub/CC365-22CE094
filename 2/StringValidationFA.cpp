#include<bits/stdc++.h>
using namespace std;

int main(){
  int inputSymbol,Tstate,iniState,AccState,numAccepState;
  cout<<"Enter the number of input symbol: ";
  cin>>inputSymbol;
  char symbol[inputSymbol];
  for(int i=0;i<inputSymbol;i++){
    cout<<"Enter the symbol "<<i+1<<": ";
    cin>>symbol[i];
  }
  cout<<"Enter the number of state: ";
  cin>>Tstate;
  cout<<"Enter the initial state: ";
  cin>>iniState;
  cout<<"Enter the number of accept state: ";
  cin>>numAccepState;
  int acceptState[numAccepState];
  for(int i=0;i<numAccepState;i++){
    cout<<"Enter the accept state: ";
    cin>>acceptState[i];
  }
  cout<<"Fill the transition table: "<<endl;
  int transitionTable[(2*Tstate)][inputSymbol];
  for(int i=0;i<Tstate;i++){
    for(int j=0;j<inputSymbol;j++){
      cout<<"Enter the transition for state "<<i+1<<" and symbol "<<symbol[j]<<": ";
      cin>>transitionTable[i][j];
    }
  }
  string inputString;
  cout<<"Enter the input string: ";
  cin>>inputString;
  int currentState=iniState;
  for(int i=0;i<inputString.length();i++){
    int flag=0;
    for(int j=0;j<inputSymbol;j++){
      if(inputString[i]==symbol[j]){
        currentState=transitionTable[currentState-1][j];
        flag=1;
        break;
      }
    }
    if(flag==0){
      cout<<"Invalid input string"<<endl;
      return 0;
    }
  }
  int flag=0;
  for(int i=0;i<numAccepState;i++){
    if(currentState==acceptState[i]){
      flag=1;
      break;
    }
  }
  if(flag==1){
    cout<<"Valid input string"<<endl;
  }
  else{
    cout<<"Invalid input string"<<endl;
  }
  return 0;
}