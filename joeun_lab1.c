#include <stdio.h>

#define SIZE 5

void calculate(double* e, double* m, double* e100, double* m100, double* av, int size);

int main(void) {

	double eng100[SIZE];
	double math100[SIZE];
	double avg[SIZE];

	double eng[SIZE] = { 4.1, 3.0, 2.8, 4.2, 3.5 };
	double math[SIZE] = { 3.1, 3.5, 3.3, 3.2, 2.7 };

	calculate(eng, math, eng100, math100, avg, SIZE);

	printf("영어백분률: ");
	for (int i = 0; i < SIZE; i++)
		printf("%.2lf ", eng100[i]);

	printf("\n수학백분률: ");
	for (int i = 0; i < SIZE; i++)
		printf("%.2lf ", math100[i]);

	printf("\n평균백분률: ");
    printf("%.2lf ", avg[0]);
	// for (int i = 0; i< 4; i++){
    //     printf("%.2lf ", avg[i]);
    // }

}

void calculate(double* e, double* m, double* e100, double* m100, double* av, int size) {
	//영어백분률
    double sum = 0.0;
	double avg_result;
	for (int i = 0; i < SIZE; i++, e++, e100++)
	*e100 = *e * 10 + 54;
    sum += *e100;
    printf("%lf \n",sum);
	//수학백분률
	for (int i = 0; i < SIZE; i++, m++, m100++) 
	*m100 = *m * 10 + 54;
	sum = sum + *m100;
	//평균백분률

	avg_result = sum / (SIZE*2);

	for (int i = 0; i < SIZE; i++, e++, m++) {
		*av = avg_result;
	}
}