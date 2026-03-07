import re

with open(r'c:\Users\suyas\Downloads\CODING(1)\250 CPP Code\250_C_QUESTIONS.txt', 'r', encoding='utf-8') as f:
    text = f.read()

idx = text.find('1. While Loop or While-Do Loop Questions')
idx2 = text.find('3. For Loop Questions', idx)

section = text[idx:idx2]

lines = section.split('\n')
questions = []
for line in lines:
    line = line.strip()
    # A valid question title in this document starts without non-alphabet characters mostly, or starts with a word.
    if len(line) > 10 and not '{' in line and not '#' in line and not ';' in line and not '(' in line and not '/' in line and not '<' in line and not '>' in line:
        questions.append(line)

with open(r'c:\Users\suyas\Downloads\CODING(1)\250 CPP Code\questions_list.txt', 'w', encoding='utf-8') as f:
    for q in questions:
        f.write(q + '\n')
