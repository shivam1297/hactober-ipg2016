
//nice code

ll ft[N];

void update(int x, int delta){

      for(; x <= n; x += x&-x)
        ft[x] += delta;
}

ll pref(int x){
     ll sum = 0;
     for(; x > 0; x -= x&-x)
        sum += ft[x];

     return sum;
}

ll query(int l, int r){
	return pref(r) - pref(l-1);
}
