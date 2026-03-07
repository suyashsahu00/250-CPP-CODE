import sys, re
with open(r'c:\Users\suyas\Downloads\CODING(1)\250 CPP Code\250 C QUESTIONS.rtf', 'r', encoding='latin-1') as f:
    data = f.read()

# remove RTF tags
data = re.sub(r'\\[a-zA-Z]+(-?\d+)? ?', '', data)
data = re.sub(r'[\{\}]', '', data)
data = re.sub(r'\\\*\\.*?;', '', data)
data = re.sub(r'\\\'[a-fA-F0-9]{2}', '', data)

idx = data.find('While Loop')
print(data[idx:idx+2000] if idx != -1 else "NOT_FOUND")
