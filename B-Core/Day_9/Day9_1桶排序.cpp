/********************************
	本节内容 :
	桶排序/箱排序(Bucket Sort)
	优点 : 执行效率高
	缺点 : 所需内存大
********************************/
#if 1
#define NUMMAX 10000 
#define BUCKETMAX 10
#include<bits/stdc++.h>
using namespace std;
typedef int Type;
void newBucket(Type*arrBucketAddr[], int arrBucketMax)
{
	int i = 0;
	for (int i = 0; i < arrBucketMax; i++) {
		arrBucketAddr[i] = new Type[arrNumMax];
	}
}
void sortBucketToNum(type )
void sortNumToBucket(Type arrNum[], int arrNumMax, Type* arrBucketAddr[], int arrBucketMax, int BucketFlag[], int way)
{
	int i = 0;
	int j = 0;
	if (way == 1) {
		for (i = 0; i < arrNumMax; i++) {
			for (j = 0; j < arrBucketMax; j++) {
				if (arrNum[i] / 1 % 10 == j) {
					*(arrBucket[j] + BucketFlag[j]) = arrNum[i];
					BucketFlag[j]++;
					break;
				}
			}
		}
	}
	else if (way == 2) {
		/**/
	}
}
void bucketSort(Type arrNum[], int arrNumMax, int way)
{
	Tpye** arrBucket = new Type * [BUCKETMAX];//二级指针 
	int BucketFlag[BUCKETMAX] = { 0 };
	new Bucket(arrBucket, BUCKETMAX, arrNumMax);
}
int main()
{
	Type* arrNum = new Type[NUMMAX];

	bucketSort(arrNum, NUMMAX, 1);
	
	delete arrNUM;
	return 0;
}
#endif
