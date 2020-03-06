#include <iostream>
#include <vector>
using namespace std;
vector <int> primes;
bool notPrime[87000001];
void sieve (){
	
	notPrime[0] = notPrime[1] = true;
	
	for(int i=2;i*i<87000000 ; i++){
		if(!notPrime[i]){
			for(int j=i*i;j<=87000000;j+=i)
			notPrime[j] = true;
		}
	}
	for(int i=2;i<87000000;i++){
		if(!notPrime[i])
		primes.push_back(i);
	}
}
int main(){
	
	int q, k;
	cin>>q;
	
	sieve();
	
	while(q--){
		
		cin>>k;
		cout<<primes[k-1]<<"\n";
	}
	
	return 0;
}
