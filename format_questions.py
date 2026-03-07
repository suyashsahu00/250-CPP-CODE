import re

with open(r'c:\Users\suyas\Downloads\CODING(1)\250 CPP Code\250_CPP_QUESTIONS.txt', 'r', encoding='utf-8') as f:
    lines = f.readlines()

output = []
code_keywords = ['#include', 'int main', 'printf', 'scanf', 'return ', '{', '}', '/*', '*/', '//', 'float ', 'int ', 'double ', 'char ', 'long ']

for line in lines:
    line = line.strip()
    if not line:
        continue
    # skip code
    is_code = False
    for kw in code_keywords:
        if kw in line:
            is_code = True
            break
    if is_code or ';' in line or '=' in line or line.startswith('if ') or line.startswith('while ') or line.startswith('for ') or line.startswith('else') or line.startswith('****'):
        continue
    
    if re.match(r'^\d+\.\s', line): 
        output.append("\n" + line)
        continue
    if line.lower().startswith('recommended posts'):
        continue
    if "PDF Free Download" in line:
         continue
    if "For Solutions Please Visit" in line:
         continue
    if "expert only" in line.lower() or "legendary level" in line.lower():
         output.append("\n" + line)
         continue
    if "this is a high-level section" in line.lower() or "This is a high-level section" in line:
         continue
    if line.endswith('Questions and Answers'):
         output.append("\n" + line)
         continue
    if line == "Puzzles Questions" or line == "Simple C Questions":
         output.append("\n" + line)
         continue
         
    # Format as question
    line = re.sub(r'\.$', '', line)
    line = line.replace('“', '').replace('”', '').replace('‘', '').replace('’', "")
    line = line.replace('–', '-').replace('—', '-')
    line = re.sub(r'[\\/:*?"<>|]', '', line)
    words = line.split()
    cpp_name = "_".join(words) + ".cpp"
    output.append(cpp_name)

with open(r'c:\Users\suyas\Downloads\CODING(1)\250 CPP Code\250_CPP_QUESTIONS.txt', 'w', encoding='utf-8') as f:
    f.write("\n".join(output))
