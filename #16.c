int main (){
	float n,ma=0,mal=0;
int i;
 for(i=0;i<15;i++){
	printf("diga a sua altura: ");
	scanf("%f ",&n);

	if(ma>n && n<mal){
	ma=n;
	mal=n;
	}
	if(n<mal && n!=0){
	mal=n;
	}
		if(n>ma && n!=0){
	ma=n;
	}
	}
		
	printf("a maior altura e %f \n",ma);
		printf(" a menor altura e %f \n",mal);
	return 0;
}