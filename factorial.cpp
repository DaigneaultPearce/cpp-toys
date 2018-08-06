#include <cstdio>

int fact(int p);
int main(int argc, char *argv[]) {

	int x = 0;
	int solution = 0;
	printf("Enter an integer >> ");
	scanf("%d", &x);
	solution = fact(x);
	solution ? printf("%d factorial equals %d",x, fact(x)) : 
		printf("Not defined for negative numbers!\n");
}

int fact(int pfac) {
	if (pfac < 0) {
		return 0;
	}
	else if (pfac) {
		for (int i = pfac - 1; i > 1; i--) {
			pfac *= i;
		}
		return pfac;
	}
	else
		return 1;
}