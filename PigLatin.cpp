/*
 Author:  Siidney Watson - siidney.watson.work@gmail.com
 Organization:  LolaDog Studio
*/
#include<iostream>
#include<cstring>
#include<cctype>

bool isVowel(char c)
{
	const char VOWEL[6] = "aeiou";

	return static_cast<bool>(strchr(VOWEL, tolower(c)));
}

char* formConsonant(const char* str)
{
	static const char SUFFIXCON[3] = "ay";
	int n = 0;

	char* pigStr = reinterpret_cast<char*>(calloc(1, sizeof(str) + sizeof(SUFFIXCON) + 1));

	char* original = (char*)str;

	bool tpunct = static_cast<bool>(ispunct(str[strlen(str)-1]));

	size_t lenStr = ((tpunct) ? strlen(str) - 1 : strlen(str));

	for (; *str; ++str, ++n)
	{
		if (isVowel(str[0]))
		{
			break;
		}
	}

	memmove(pigStr, str, lenStr - n);

	if (static_cast<bool>(isupper(original[0])))
	{
		pigStr[0] = toupper(pigStr[0]);
		original[0] = toupper(original[0]);
	}

	memmove(pigStr + strlen(pigStr), original, n);
	memmove(pigStr + strlen(pigStr), SUFFIXCON, strlen(SUFFIXCON));

	if (tpunct)
	{
		memmove(pigStr + strlen(pigStr), &str[strlen(str) - 1], 1);
	}

	return pigStr;
}
char* formVowel(const char* str)
{
	static const char* SUFFIXVOWEL = "yay";

	char* pigStr = reinterpret_cast<char*>(calloc(1, sizeof(str) + sizeof(SUFFIXVOWEL) + 1));

	bool tpunct = static_cast<bool>(ispunct(str[strlen(str) - 1]));
	size_t lenStr = ((tpunct) ? strlen(str) - 1 : strlen(str));

	memmove(pigStr, str, lenStr);
	memmove(pigStr + strlen(pigStr), SUFFIXVOWEL, strlen(SUFFIXVOWEL));

	if (tpunct)
	{
		memmove(pigStr + strlen(pigStr), &str[strlen(str) - 1], 1);
	}
	return pigStr;
}

char* creatLatinWord(const char* str)
{
	int i = (static_cast<bool>(ispunct(str[0])) ? 1 : 0);

	if (isVowel(str[i]))
	{
		return formVowel(str);
	}
	if (!isVowel(str[i]))
	{
		return formConsonant(str);
	}
}

void printLatinWord(const char* str)
{
	char* pigWord = creatLatinWord(str);

	printf("%s ", pigWord);

	free(pigWord);
}

int main()
{
	char sentence[255];
	char delim[] = " ";
	char* strPtr = nullptr;

	std::cout << "Enter a sentence for pig Latin conversion: ";
	std::cin.getline(sentence, 255);

	char* tokenPtr = strtok_s(sentence, delim, & strPtr);

	while (tokenPtr != nullptr)
	{
		printLatinWord(tokenPtr);
		tokenPtr = strtok_s(NULL, delim, &strPtr);
	}
	std::cout << std::endl;
	return 0;

}
