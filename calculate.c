#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	FILE *fp;
	fopen_s(&fp,"result.txt", "w");
	int a;
	scanf_s("%d", &a);
	int N;
	scanf_s("%d", &N);
	fprintf(fp, "%d\n", a);
	srand((unsigned)time(NULL));
	int d[100],sum=0;
	for (int i = 0; i < N; i++) {
		d[i] = rand() % 3 + 3;
		sum = sum + d[i];
	}
	int b[100], c[100];
	for (int i = 0; i < sum; i++) {
		b[i] = rand() % 100;
	}
	for (int i = 0; i < sum - N; i++) {
		c[i] = rand() % 4;
	}
	int m = 0,n = 0;
	for (int i = 0; i < N; i++) {
		if (d[i] == 3) {
			if (c[m] == 0) {
				if (c[m+1] == 0)fprintf(fp, "%d+%d+%d=%d\n", b[n],  b[n+1],  b[n+2],  b[n] +  b[n+1] +  b[n+2]);
				else if (c[m+1] == 1)fprintf(fp, "%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] + b[n + 1] - b[n + 2]);
				else if (c[m+1] == 2)fprintf(fp, "%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] + b[n + 1] * b[n + 2]);
				else if (c[m+1] == 3)fprintf(fp, "%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] + b[n + 1] / b[n + 2]);
			}
			else if (c[m] == 1) {
				if (c[m+1] == 0)fprintf(fp, "%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] - b[n + 1] + b[n + 2]);
				else if (c[m+1] == 1)fprintf(fp, "%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] - b[n + 1] - b[n + 2]);
				else if (c[m+1] == 2)fprintf(fp, "%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] - b[n + 1] * b[n + 2]);
				else if (c[m+1] == 3)fprintf(fp, "%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] - b[n + 1] / b[n + 2]);
			}
			else if (c[m] == 2) {
				if (c[m+1] == 0)fprintf(fp, "%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] * b[n + 1] + b[n + 2]);
				else if (c[m+1] == 1)fprintf(fp, "%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] * b[n + 1] - b[n + 2]);
				else if (c[m+1] == 2)fprintf(fp, "%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] * b[n + 1] * b[n + 2]);
				else if (c[m+1] == 3)fprintf(fp, "%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] * b[n + 1] / b[n + 2]);
			}
			else if (c[m] == 3) {
				if (c[m+1] == 0)fprintf(fp, "%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] / b[n + 1] + b[n + 2]);
				else if (c[m+1] == 1)fprintf(fp, "%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] / b[n + 1] - b[n + 2]);
				else if (c[m+1] == 2)fprintf(fp, "%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] / b[n + 1] * b[n + 2]);
				else if (c[m+1] == 3)fprintf(fp, "%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n] / b[n + 1] / b[n + 2]);
			}
			m = m + 2;
			n = n + 3;
		}
		else if (d[i] == 4) {
			if (c[m] == 0) {
				if (c[m + 1] == 0) {
					if (c[m + 2] == 0)fprintf(fp, "%d+%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] + b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d+%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] + b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d+%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] + b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d+%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] + b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 1) {
					if (c[m + 2] == 0)fprintf(fp, "%d+%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] - b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d+%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] - b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d+%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] - b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d+%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] - b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 2) {
					if (c[m + 2] == 0)fprintf(fp, "%d+%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] * b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d+%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] * b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d+%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] * b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d+%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] * b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 3) {
					if (c[m + 2] == 0)fprintf(fp, "%d+%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] / b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d+%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] / b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d+%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] / b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d+%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] + b[n + 1] / b[n + 2] / b[n + 3]);
				}
			}
			if (c[m] == 1) {
				if (c[m + 1] == 0) {
					if (c[m + 2] == 0)fprintf(fp, "%d-%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] + b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d-%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] + b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d-%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] + b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d-%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] + b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 1) {
					if (c[m + 2] == 0)fprintf(fp, "%d-%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] - b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d-%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] - b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d-%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] - b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d-%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] - b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 2) {
					if (c[m + 2] == 0)fprintf(fp, "%d-%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] * b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d-%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] * b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d-%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] * b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d-%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] * b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 3) {
					if (c[m + 2] == 0)fprintf(fp, "%d-%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] / b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d-%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] / b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d-%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] / b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d-%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] - b[n + 1] / b[n + 2] / b[n + 3]);
				}
			}
			if (c[m] == 2) {
				if (c[m + 1] == 0) {
					if (c[m + 2] == 0)fprintf(fp, "%d*%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] + b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d*%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] + b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d*%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] + b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d*%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] + b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 1) {
					if (c[m + 2] == 0)fprintf(fp, "%d*%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] - b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d*%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] - b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d*%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] - b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d*%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] - b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 2) {
					if (c[m + 2] == 0)fprintf(fp, "%d*%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] * b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d*%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] * b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d*%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] * b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d*%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] * b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 3) {
					if (c[m + 2] == 0)fprintf(fp, "%d*%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] / b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d*%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] / b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d*%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] / b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d*%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] * b[n + 1] / b[n + 2] / b[n + 3]);
				}
			}
			if (c[m] == 3) {
				if (c[m + 1] == 0) {
					if (c[m + 2] == 0)fprintf(fp, "%d/%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] + b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d/%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] + b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d/%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] + b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d/%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] + b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 1) {
					if (c[m + 2] == 0)fprintf(fp, "%d/%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] - b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d/%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] - b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d/%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] - b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d/%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] - b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 2) {
					if (c[m + 2] == 0)fprintf(fp, "%d*%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] * b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d*%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] * b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d*%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] * b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d*%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] * b[n + 2] / b[n + 3]);
				}
				else if (c[m + 1] == 3) {
					if (c[m + 2] == 0)fprintf(fp, "%d/%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] / b[n + 2] + b[n + 3]);
					else if (c[m + 2] == 1)fprintf(fp, "%d/%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] / b[n + 2] - b[n + 3]);
					else if (c[m + 2] == 2)fprintf(fp, "%d/%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] / b[n + 2] * b[n + 3]);
					else if (c[m + 2] == 3)fprintf(fp, "%d/%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n] / b[n + 1] / b[n + 2] / b[n + 3]);
				}
			}
			m = m + 3;
			n = n + 4;
		}
		else if (d[i] == 5) {
			if (c[m] == 0) {
				if (c[m + 1] == 0) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d+%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d+%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d+%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d+%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d+%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d+%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d+%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d+%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d+%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d+%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d+%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d+%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d+%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d+%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d+%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d+%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] + b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 1) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d-%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d-%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d-%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d-%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d-%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d-%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d-%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d-%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d-%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d-%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d-%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d-%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d-%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d-%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d-%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d-%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] - b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 2) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d*%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d*%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d*%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d*%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d*%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d*%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d*%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d*%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d*%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d*%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d*%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d*%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d*%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d*%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d*%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d*%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] * b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 3) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d/%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d/%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d/%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d/%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d/%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d/%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d/%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d/%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d/%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d/%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d/%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d/%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d+%d/%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d+%d/%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d+%d/%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d+%d/%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] + b[n + 1] / b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
			}
			if (c[m] == 1) {
				if (c[m + 1] == 0) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d+%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d+%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d+%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d+%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d+%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d+%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d+%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d+%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d+%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d+%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d+%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d+%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d+%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d+%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d+%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d+%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] + b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 1) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d-%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d-%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d-%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d-%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d-%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d-%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d-%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d-%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d-%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d-%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d-%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d-%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d-%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d-%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d-%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d-%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] - b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 2) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d*%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d*%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d*%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d*%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d*%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d*%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d*%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d*%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d*%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d*%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d*%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d*%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d*%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d*%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d*%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d*%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] * b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 3) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d/%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d/%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d/%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d/%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d/%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d/%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d/%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d/%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d/%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d/%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d/%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d/%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d-%d/%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d-%d/%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d-%d/%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d-%d/%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] - b[n + 1] / b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
			}
			if (c[m] == 2) {
				if (c[m + 1] == 0) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d+%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d+%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d+%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d+%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d+%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d+%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d+%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d+%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d+%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d+%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d+%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d+%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d+%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d+%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d+%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d+%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] + b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 1) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d-%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d-%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d-%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d-%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d-%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d-%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d-%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d-%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d-%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d-%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d-%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d-%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d-%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d-%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d-%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d-%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] - b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 2) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d*%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d*%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d*%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d*%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d*%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d*%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d*%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d*%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d*%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d*%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d*%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d*%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d*%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d*%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d*%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d*%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] * b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 3) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d/%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d/%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d/%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d/%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d/%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d/%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d/%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d/%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d/%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d/%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d/%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d/%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d*%d/%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d*%d/%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d*%d/%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d*%d/%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] * b[n + 1] / b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
			}
			if (c[m] == 3) {
				if (c[m + 1] == 0) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d+%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d+%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d+%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d+%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d+%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d+%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d+%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d+%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d+%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d+%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d+%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d+%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d+%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d+%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d+%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d+%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] + b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 1) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d-%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d-%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d-%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d-%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d-%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d-%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d-%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d-%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d-%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d-%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d-%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d-%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d-%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d-%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d-%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d-%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] - b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 2) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d*%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d*%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d*%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d*%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d*%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d*%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d*%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d*%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d*%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d*%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d*%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d*%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d*%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d*%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d*%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d*%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] * b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
				if (c[m + 1] == 3) {
					if (c[m + 2] == 0) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d/%d+%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] + b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d/%d+%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] + b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d/%d+%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] + b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d/%d+%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] + b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 1) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d/%d-%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] - b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d/%d-%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] - b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d/%d-%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] - b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d/%d-%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] - b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 2) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d/%d*%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] * b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d/%d*%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] * b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d/%d*%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] * b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d/%d*%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] * b[n + 3] / b[n + 4]);
					}
					if (c[m + 2] == 3) {
						if (c[m + 3] == 0)
							fprintf(fp, "%d/%d/%d/%d+%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] / b[n + 3] + b[n + 4]);
						else if (c[m + 3] == 1)
							fprintf(fp, "%d/%d/%d/%d-%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] / b[n + 3] - b[n + 4]);
						else if (c[m + 3] == 2)
							fprintf(fp, "%d/%d/%d/%d*%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] / b[n + 3] * b[n + 4]);
						else if (c[m + 3] == 3)
							fprintf(fp, "%d/%d/%d/%d/%d=%d\n", b[n], b[n + 1], b[n + 2], b[n + 3], b[n + 4], b[n] / b[n + 1] / b[n + 2] / b[n + 3] / b[n + 4]);
					}
				}
			}
			m = m + 4;
			n = n + 5;
		}
	}
}