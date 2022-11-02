#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu(){
	
 char addons_menu;
	printf("MENU\n");
	printf("1: TexMex Chicken\tP165\n");
	printf("2: TexMex Beef\tP165\n");
	printf("3: Chipotle BBQ Chicken\tP165\n");
	printf("4: Chipotle BBQ Beef\tP165\n");
	printf("5: Dave's Single\tP155\n");
	printf("6: Bacon Mushroom Melt\tP105\n");
	printf("7: Cheeseburger Deluxe\tP86\n");
	printf("8: Classic Chicken Sandwich\tP135\n");
	printf("9: Spicy Chicken Sandwich\tP135\n");
	printf("10: Baconator Single\tP159\n");
	printf("-------------------------\n");
	printf("Add-ons\n");
	printf("11: Ice Tea\tP55\n");
	printf("12: Frosty Coffee\tP89\n");
	printf("13: Caesar Salad Supreme\tP79\n");
	printf("14: Apple Waldorf Salad\tP79\n");
	printf("-------------------------\n");
	printf("Actions\n");
	printf("15: CANCEL ORDER\n");
	}

int orders(){
 int qty = 0, 
	 order = 0, 
	 addonC = 0, 
	 addonPrice = 0, 
	 total = 0, 
	 i = 0, 
	 limit = 0, 
	 cash, change;
	 
 char choice[1], addonChoice[1];
 char order_name[20][20];
 int quantity[20];
 int order_price[20];
 
	while (strcmp(choice, "n") != 0){ 
		printf("\nChoose your order: ");
		scanf("%d", &order);
		
	if(order == 15){
		printf("Order Canceled. Thank you! Come Again!\n\n\n");
		return 0;
		break;
	}
	
 	 printf("Any Add-On? (y/n): ");
 	 scanf("%s", addonChoice);
 
	if (strcmp(addonChoice, "y") == 0){
		printf("Enter Add-On: ");
		scanf("%d", &addonC);
		if (addonC == 11){
			addonPrice = 55;
		}
		else if (addonC == 12){
			addonPrice = 89;
		}
		else if (addonC == 13){
			addonPrice = 79;
		}
		else if (addonC == 14){
			addonPrice = 79;
		}
		else{
			printf("Invalid. Please Try Again!");
			return 0;
		}
	}
	
	else if (strcmp(addonChoice, "n") != 0 || strcmp(addonChoice, "n") != 0){
		printf("Invalid. Please Try Again!");
		getchar();
		orders();
	}
	
	 printf("Quantity: ");
	 scanf("%d", &qty); 
	 quantity[i] = qty;

	if (order == 1){
		strcpy(order_name[i], "TexMex Chicken");
		order_price[i] = (165 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 2){
		strcpy(order_name[i], "TexMex Beef");
		order_price[i] = (165 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 3){
		strcpy(order_name[i], "Chipotle BBQ Chicken");
		order_price[i] = (165 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 4){
		strcpy(order_name[i], "Chipotle BBQ Beef");
		order_price[i] = (165 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 5){
		strcpy(order_name[i], "Dave's Single");
		order_price[i] = (155 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 6){
		strcpy(order_name[i], "Bacon Mushroom Melt");
		order_price[i] = (105 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 7){
		strcpy(order_name[i], "Cheeseburger Deluxe");
		order_price[i] = (86 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 8){
		strcpy(order_name[i], "Classic Chicken Sandwich");
		order_price[i] = (135 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 9){
		strcpy(order_name[i], "Spicy Chicken Sandwich");
		order_price[i] = (135 + addonPrice)*qty;
		total = total + order_price[i];
	}
	if (order == 10){
		strcpy(order_name[i], "Baconator Single");
		order_price[i] = (159 + addonPrice)*qty;
		total = total + order_price[i];
	}
	
	 printf("Sub-total: %d", total);
	 printf("\nAnything Else? (y/n): ");
	 scanf("%s", choice);
	 i++;
	}
	
	limit = i;
	while (strcmp(choice, "n") == 0){
		printf("-------------------------\n");
		printf("RECEIPT");
		printf("\n\nItem \t\t\tNo. \t\tPrice");
	for (i=0; i<limit; i++){
		printf("\n%s", order_name[i]);
		printf("\t\t%d", quantity[i]);
		printf("\t\t%d", order_price[i]);
	}
		printf("\nTotal: \t\t\t\t\t%d", total);
		printf("\nInput amount of cash: ");
		scanf("%d", &cash);
		printf("\nCASH: %d", cash);
		change = cash - total;
		printf("\nCHANGE: %d", change);
		printf("\nThank you for ordering!");
		
	break;
	}
 }

int main(){
 char response[5];
 printf("Welcome to Wendy's!\n\n Are you ready to order? (y/n): ");
 scanf("%s", response);
	if (!strcmp(response, "y")){
		menu();
		orders();
 	}
	else if (!strcmp(response, "n")){
		printf("Thank you! Come Again!\n\n\n");
		return 0;
	}
	else
	{
 		printf("Invalid.  Please try again.\n\n\n");
 		main();
	}
}
