#include <bits/stdc++.h>
using namespace std;

void reverse(string word, int lastInd)
{
	if(lastInd >=0){
		cout << word[lastInd];
		reverse(word, lastInd-1);
	}
}

int main ()
{
  string s;
  getline(cin, s);

  stringstream ss(s);
  string word;
  int starting = 1;

  while(ss >> word)
  {
  	if(starting == 1)
  	{
  		starting = 0;
  	} else {
  		cout << " ";
  	}
  	int num = word.size();
	reverse(word, num-1);

  }
  return 0;
}