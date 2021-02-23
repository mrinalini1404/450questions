// C++ program to count all duplicates
// from string using maps
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
	map<char,int>s;
	for(int i=0;i<str.size()-1;i++){
		s[str[i]]+=1;
	}
	
	
	for (auto it : s) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
/* Driver code*/
int main()
{
	string str = "test string";
	printDups(str);
	return 0;
}
