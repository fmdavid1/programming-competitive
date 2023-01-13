#include <bits/stdc++.h>

using namespace std;
//  
int main(){
	string p, l;
	cin>>p;
	vector<string> f;
	
	for(int i = 0; i < p.size(); i++){
		if(p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U' || p[i] == 'Y' || p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' || p[i] == 'y'){
			
		}else{
			p[i] = tolower(p[i]);
			l = p[i];
			f.push_back(".");
			f.push_back(l);
		}
	}
	for(int i = 0; i < f.size(); i++){
		cout<<f[i];
	}
	return 0;
}
