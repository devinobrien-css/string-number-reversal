/** Has two functions for reversing small strings and integer numbers
 *
 */
#include <stdio.h>
#include <string.h>

int reverse_word(char name[30]);
int reverse_num(int num);

int main()
{
	char name[30];
	printf("Enter a Word to reverse: ");
	scanf("%s",name);
	printf("The word is %s\n", name);
	reverse_word(name);
	printf("Backwards: %s\n\n", name);

	int num = 0;
	printf("Enter a number to reverse: ");
	scanf("%d",&num);
	printf("The num is %d\n", num);
	int num_rev = reverse_num(num);
	printf("Backwards: %d", num_rev);
	
} 

int reverse_word(char word[30])
{
	char word_rev[strlen(word)]; 
	int j = strlen(word)-1;
	for(int i = 0; i < strlen(word); i++)
	{
		word_rev[i] = word[j];
		j--;
	}
	word_rev[strlen(word)] = '\0';
	strcpy(word,word_rev);
	return 0; 
}

int reverse_num(int num)
{
	int num_rev = 0;
	while(num != 0)
	{
		num_rev = (num_rev*10) + (num % 10);
		num /= 10;
	}
	return num_rev;
}


