#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ERROR 0
#define OK 1
#define initsize 100
#define increment 10
typedef int Selemtype;
typedef struct
{
	int *top;
	int *base;
	int size;
}Stack;
int init(Stack &S)
{
	