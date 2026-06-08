struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double area(triangle tr){
    double p=(tr.a+tr.b+tr.c)/2.0;
    return sqrt(p*(p-tr.a)*(p-tr.b)*(p-tr.c));
}
void sort_by_area(triangle* tr, int n) {
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(area(tr[j])>area(tr[j+1])){
                triangle t=tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=t;
            }
        }
    }
}

int main(){
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}