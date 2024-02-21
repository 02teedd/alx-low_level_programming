#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count_words(char *str);
char *get_next_word(char *str);
char **allocate_memory(int num_words);
void free_memory(char **words);

/**
 * strtow - Splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i = 0, num_words = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	words = allocate_memory(num_words);
	if (words == NULL)
		return (NULL);

	while (*str)
	{
		if (*str != ' ')
		{
			words[i++] = get_next_word(str);
			if (words[i - 1] == NULL)
			{
				free_memory(words);
				return (NULL);
			}
			str += sizeof(char) * (strlen(words[i - 1]) + 1);
		}
		else
		{
			str++;
		}
	}
	words[i] = NULL;
	return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: The string to count words in 
 *
 * Return: the number of words
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

/**
 * get_next_word - Extracts the next word from a string
 * @str: The string to extract the word from
 *
 * Return: pointer to the extracted word
 */
char *get_next_word(char *str)
{
	int word_len = 0;
	char *word, *start = str;

	while (*str && *str != ' ')
	{
		word_len++;
		str++;
	}

	word = malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);

	strncpy(word, start, word_len);
	word[word_len] = '\0';

	return (word);
}

/**
 * allocate_memory - Allocate memory for an array of strings
 * @num_words: the number of words in the array
 * 
 * Return: pointer to the allocated memory
 */
char **allocate_memory(int num_words)
{
	char **words = malloc(sizeof(char *) * (num_words + 1));

	if (words == NULL)
		return (NULL);

	return (words);
}

/**
 * free_memory - frees memory allocated for an array of strings
 * @words: the array of strings to free
 *
 * Return: nothing
 */
void free_memory(char **words)
{
	int i;

	for (i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}
	free(words);
}
