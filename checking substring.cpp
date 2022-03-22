bool issubstring(string s, string p){
	int n=s.sz, m=p.sz;
	for(int i=0; i<=n-m; i++){
		int j;
		for(j=0; j<m; j++){
			if(p[i+j] !=s[j]) break;
		}
		if(j==m) return true;
	}
	return false;
}