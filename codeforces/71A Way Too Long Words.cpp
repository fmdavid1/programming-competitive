#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	vector<string> lista;
	for(int i = 0; i<a; i++){
		string pa, res;
		cin>>pa;
		if(pa.size() > 10){
			string ini, fin, med;
			int a;
			ini = pa[0];
			a = pa.size()-2;
			med = to_string(a);
			fin = pa[pa.size()-1];
			res.append(ini).append(med).append(fin);
			lista.push_back(res);
		}else{
			lista.push_back(pa);
		}
	}
	for(int i = 0; i<a; i++){
		cout<<lista[i]<<endl;
	}
	return 0;
}
