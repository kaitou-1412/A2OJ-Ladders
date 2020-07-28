word = input()
words_list = word.split("WUB")
while '' in words_list:
    words_list.remove('')
print(" ".join(words_list))