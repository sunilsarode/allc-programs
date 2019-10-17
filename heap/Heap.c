#include<stdio.h>
#include<stdlib.h>
struct Heap * createHeap(int capacity,int type);
void insert(struct Heap *heap,int data);
void buildHeap(struct Heap *heap,long long arr[],int n);
void heapiphy(struct Heap *heap,int i);
void resizeHeap(struct Heap *heap);
int getLeftChild(struct Heap * heap,int i);
int getRightChild(struct Heap *heap,int i);
long long deleteMin(struct Heap *heap);
struct Heap{
	long long *array;
	int count;
	int capacity;
	int heap_type;
};
int main(){
	
	int n=0;
	scanf("%d",&n);
	long long arr[n];
	
    struct Heap *heap=createHeap(n,0);
    
    long oneday[n];
	long t20[n];
	long test[n];

		for (int i = 0; i < n; i++) {
			oneday[i] = ir.nextLong();
		}
		for (int i = 0; i < n; i++) {
			t20[i] = ir.nextLong();
		}
		for (int i = 0; i < n; i++) {
			test[i] = ir.nextLong();
		}
		long sum[] = new long[n];
		for (int i = 0; i < n; i++) {
			sum[i] = (oneday[i] + t20[i] + test[i]);
		}
	
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	
	buildHeap(heap,arr,n);
	
	for(int i=0;i<n;i++){
		printf("%lld",heap->array[i]);
	}
	
	insert(heap,4);
	printf("\n");
	for(int i=0;i<heap->count;i++){
		printf("%lld",heap->array[i]);
	}
	printf("\n");
	
	printf("%lld",deleteMin(heap));
	
	
	
	return 0;
}
void insert(struct Heap *heap,int data){
	
	int k;
	if(heap->count==heap->capacity){
		resizeHeap(heap);
	}
	heap->count++;
	k=heap->count-1;
	heap->array[k]=data;
	while (k > 0) {
			int p = (k - 1) / 2;
			long long parent = heap->array[p];
			long long item= heap->array[k];
			if (parent >item) {
				heap->array[p]=item;
				heap->array[k]=parent;
				k = p;
			} else {
				break;
			}

		}
	
}
void buildHeap(struct Heap *heap,long long arr[],int n){
	
	while(n>heap->capacity)
	{
		resizeHeap(heap);
	}
	
	for(int i=0;i<n;i++){
		heap->array[i]=arr[i];
	}
	heap->count=n;
	for(int i=(n-1)/2;i>=0;i--){
		heapiphy(heap,i);
	}
}

void heapiphy(struct Heap *heap,int i){
	
	int l,r,min;
	long long temp;
	l=getLeftChild(heap,i);
	r=getRightChild(heap,i);
	if(l!=-1 && (heap->array[l]<heap->array[i])){
		min=l;
	}else{
		min=i;
	}
	if(r!=-1&&(heap->array[r]<heap->array[min])){
		min=r;
	}
	if(min!=i){
		temp=heap->array[i];
		heap->array[i]=heap->array[min];
		heap->array[min]=temp;
		heapiphy(heap,min);
	}
	
	
}
int getLeftChild(struct Heap *heap,int i){
	
	int left=2*i+1;
	if(left>=heap->count){
		return -1;
	}
	return left;
}
int getRightChild(struct Heap *heap,int i){
	int right=2*i+2;
	if(right>=heap->count){
		return -1;
	}
	return right;
}

void resizeHeap(struct Heap *heap){
	
	long long*oldArray=heap->array;
	heap->array=(long long*)malloc(sizeof(long long)*heap->capacity*2);
	
	for(int i=0;i<heap->capacity;i++){
		heap->array[i]=oldArray[i];
	}
	heap->capacity*=2;
	free(oldArray);
	
	
}
struct Heap * createHeap(int capacity ,int type){
	struct Heap *heap=(struct Heap*)malloc(sizeof(struct Heap));
	heap->heap_type=type;
	heap->count=0;
	heap->capacity=capacity;
	heap->array=(long long*)malloc(sizeof(long long)*heap->capacity);
	return heap;
}
long long deleteMin(struct Heap *heap){
	long long data;
	if(heap->count==0){
		return -1;
	}
	data=heap->array[0];
	heap->array[0]=heap->array[heap->count-1];
	heap->count--;
	heapiphy(heap,0);
	return data;
}
