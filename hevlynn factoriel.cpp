#include<iostream>
int f,n,i;
int main(int argv,char** argc){
	std::cout<<"entrez l'entier dont vous voulez connaitre le factoriel"<<std::endl;
	std::cin>>n;
	if(n==0){
		f=1;
	}
	else{
		f=1;
		for(i=1;i<=n;i++){
		f=f*i;
	}
	}
	std::cout<<"le factoriel de "<<n<<" est "<<f<<std::endl;
	return 0;
}
