#include<stdio.h>
#include<math.h>
int main(){
	unsigned int figure, choix;
	float perimetre, surface,diametre,rayon;
	float longueur,largeur; 
	float a,b,c;
	const float pi=3.14;
	printf("vous voulez calculer le perimetre ou le surface\n");
	printf("1_perimetre\n");
	printf("2_surface\n");
	scanf("%d",&choix);
	if(choix==1){
	printf("1_cercle\n");
	printf("2_triangle\n");
	printf("3_rectangle\n");
	printf("vous voulez calculer le perimetre de quoi ?\n");
	scanf("%d",&figure);
	 switch(figure){
	 	case 1 :
	 		printf("entrer le diametre du cercle\n");
	 		scanf("%f",&diametre);
	 		perimetre=diametre*pi;
	 		printf("le perimetre de votre cercle est :%f ",perimetre);
	 		break;
	 	case 2 :
	 		printf("entrer le cote ab de votre triangle\n ");
	 		scanf("%f",&a);
	 		printf("entrer le cote bc de votre triangle\n");
	 		scanf("%f",&b);
	 		printf("entrer le cote ac de votre triangle\n");
	 		scanf("%f",&c);
	 		perimetre= a+b+c ;
	 		printf("le perimetre de votre triangle est: %f",perimetre);
	 		break;
	 	case 3 :
	 		printf("entrer la longueur du rectangle\n");
	 		scanf("%f",&longueur);
	 		printf("entrer la largeur du rectangle\n");
	 		scanf("%f",&largeur);
	 		perimetre= (longueur+largeur)*2;
	 		printf("le perimetre de votre rectangle est : %f",perimetre);
	 		break;
	 	default :
	 		printf("choix invalide\n");
	 }
	}else if (choix==2){
	                printf("1_cercle\n");
	                printf("2_triangle\n");
	                printf("3_rectangle\n");
	                printf("vous voulez calculer la surface de quoi ?\n");
	                scanf("%d",&figure);
	                switch(figure){
	                     	case 1 :
	 	                    	printf("entrer le rayon du cercle\n");
	 	                    	scanf("%f",&rayon);
	 		                    surface=rayon*rayon*pi;
	 		                    printf("la surface  de votre cercle est :%f ",surface);
	 		                    break;
	                    	case 2 :
	 		                    printf("entrer la base  de votre triangle\n ");
	 		                    scanf("%f",&a);
	 		                    printf("entrer la hauteur de votre triangle\n");
	 		                    scanf("%f",&b);
	 		                    surface= (a*b)/2;
	 		                    printf("le surface de votre triangle est: %f",surface);
	 		                    break;
	 	                    case 3 :
	 		                    printf("entrer la longueur du rectangle\n");
	 		                    scanf("%f",&longueur);
	 		                    printf("entrer la largeur du rectangle\n");
	 		                    scanf("%f",&largeur);
	 		                    surface= longueur*largeur;
	 		                    printf("le surface de votre rectangle est : %f",surface);
	 		                    break;
	 	                   default :
	 		                    printf("choix invalide\n");
	                }
	
}else {
	printf("choix invalide");
}
return 0;
}
