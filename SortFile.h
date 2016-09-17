//SortFile.h
//头文件
void QuickSort(int sourceArr[],int left,int right);
void QuickSortPack(int sourceArr[],int len);

void HeapAdjust(int sourceArr[],int adjust,int len);
void BuildHeap(int sourceArr[],int len);
void HeapSort(int sourceArr[],int len);

void SelectSort(int sourceArr[],int len);

void BubbldSort(int sourceArr[],int len);

void InsertSort(int sourceArr[],int len);

void ShellSort(int sourceArr[],int len);

int check(int sourceArr[],int len);

void perfomace(int sourceArr[],int len,FILE* fp);

void MergeSort(int sourceArr[],int lowIndex,int hightIndex);
void MergeSortPack(int sourceArr[],int len);

int* assignmentsourceArray(int sourceArr[],int len);

void gentrateNumbers(int sourceArr[],int len);

int HowmanyNumber();
