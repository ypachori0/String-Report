#include <iostream>
#include <string>	//for using string data type and its functions
#include <cctype> //for isspace() function

using namespace std;

int main(){
   
   string userInput;
   //initialized them to 0 so that whenever program is run it won't cause errors during the loop
   int letters = 0;
   int vowels = 0;
   int consonants = 0;
   int digits = 0;
   int charCount = 0;
   int words = 0;
   bool inWord = false;
   
   cout << "Please enter a string: " << endl;
   getline(cin, userInput); //use getline because cin will only read the first word in the line whereas getline will read the entire line
   
   /* used a for loop to traverse the input string character by character. for loop makes it simpler
   and easier to read. used a range based for loop, automatically iterates over each element of a container
   which is a character in this case.*/
   
   
   
   for(char ch : userInput) {
      //charCount++; //increments the character count
      
     
      
      if(isalpha(ch)){ //here we use an if statement to check if the character is an alphabet. if it is then the letter count is incremented
         letters++;
         
         /*we use a nested if stataement to check if the letter is a vowel or not.
         if it is then the vowel count is incremented. if not then the consonant count is incremented.*/
         
         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
               vowels++;
               }
         else {
            consonants++;
            }
         if(!inWord) {
            inWord = true;
            words++;
            }
         }
      
      //using an if statement to check if the character is a digit. if so, the digit count is incremented
      else if(isdigit(ch)){
         digits++;
         if(!inWord) {
            inWord = true;
            words++;
            }
         }
      else if(isspace(ch) || ispunct(ch)) {
         inWord = false;
         }
      if(!isspace(ch)) {
         charCount++;
         }
   }
   
   
   //output in required format
   cout << "-*-*-*-\n"	;				
	cout << "Number of alphabets = " << letters << "\n";
	cout << "Number of vowels = "    << vowels << "\n";
	cout << "Number of consonants = " << consonants << "\n";
	cout << "Number of digits = "    << digits << "\n";
	cout << "Number of characters = " << charCount << "\n";
	cout << "Number of words = "     << words << "\n";
   
   return 0;
}
  