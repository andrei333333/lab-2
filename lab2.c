#include <stdio.h>

void function(int x, int* i){
	if(x == 0)
		return;
	x=x-2;
	(*i)++;
	function(x, i);
}

int main(){
	int a=30, i=0;
	function(a, &i);	
	printf("%d", i);
	return 0;	
}

