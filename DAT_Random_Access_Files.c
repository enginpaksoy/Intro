#include <stdio.h>

typedef struct Customer {
	int account_no;
	char name[20];
	double balance;
}Customer;

int main() {
	FILE* filePtr = fopen("deneme.dat", "wb");
	if (filePtr == NULL) {
		printf("file cannot open\n");
		return 0;
	}

	Customer customer; //customer[100]
	customer.account_no = 0;
	strcpy(customer.name, "");
	customer.balance = 0.0;

	for (int i = 0; i < 100; i++){
		fwrite(&customer, sizeof(customer), 1, filePtr);
	}
	
	printf("Enter a account_no for writing (1 to 100 if you want to exit enter -1): ");
	scanf("%d", &customer.account_no);
	while (customer.account_no != -1) {
		printf("Enter customer name and balance: ");
		scanf("%s %lf", customer.name, &customer.balance);
		
		fseek(filePtr, sizeof(customer) * (customer.account_no - 1), SEEK_SET);
		fwrite(&customer, sizeof(customer), 1, filePtr);

		printf("Enter a account_no for writing (1 to 100 if you want to exit enter -1): ");
		scanf("%d", &customer.account_no);
	}
	fclose(filePtr);
	filePtr = fopen("deneme.dat", "rb");

	printf("Enter a account_no for reading (1 to 100 if you want to exit enter -1): ");
	scanf("%d", &customer.account_no);
	while(customer.account_no != -1){
		fseek(filePtr, sizeof(customer) * (customer.account_no - 1), SEEK_SET);
		fread(&customer, sizeof(customer), 1, filePtr);
		printf("customer account_no: %d, name: %s, balance: %lf\n", customer.account_no, customer.name, customer.balance);

		printf("Enter a account_no for reading (1 to 100 if you want to exit enter -1): ");
		scanf("%d", &customer.account_no);
	}

	fclose(filePtr);
	return 0;

}
