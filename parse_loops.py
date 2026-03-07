import re

with open(r'c:\Users\suyas\Downloads\CODING(1)\250 CPP Code\250_C_QUESTIONS.txt', 'r', encoding='utf-8') as f:
    text = f.read()

idx = text.find('1. While Loop or While-Do Loop Questions')
idx2 = text.find('3. For Loop Questions', idx)

section = text[idx:idx2]
# print lines that are not code (heuristic: look for camelcase/titles or specific patterns)
lines = [l.strip() for l in section.split('\n') if l.strip()]
for line in lines:
    if len(line) > 5 and not '{' in line and not '#' in line and not ';' in line and not '(' in line:
        print(line)
