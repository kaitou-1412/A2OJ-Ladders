vowels = {'a', 'e', 'i', 'o', 'u', 'y'}
word = input().lower()
word_set = set(word)
required_word_set = word_set.difference(vowels)
final_word_list = [letter for letter in word if letter in required_word_set]
if len(final_word_list) > 0:
    final_word = "." + ".".join(final_word_list)
else:
    final_word = ""
print(final_word)