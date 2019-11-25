#define MAX 100
/*Funções:*/
void CountingSort(int *v){
    int k;
    int bucket[MAX];
    for(int i = 0; i < MAX ; i++){
        bucket[i] = 0;
    }
    for(int i = 0; i < MAX; i++){
        bucket[v[i]]++;
    }
    for(int i = 0, j = 0; j < MAX; j++){
        for(k = bucket[j]; k > 0; k-- ){
            v[i++] = j;
        }
    }
}
