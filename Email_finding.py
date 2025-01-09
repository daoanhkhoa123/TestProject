import re

text = '''
John's email is john@example.com. Mary can be reached at mary@gmail.com.
The meeting is scheduled for 2023-09-15. Don't forget to bring your ID!
Our support hotline is (123)456-7890. Call us if you have any questions
'''

pattern = r'(\b[.\S]+@[.\S]+\.[\w]+\b)|(\d{4}-\d{2}[-/]\d{2})|(\(\d{3}\)\d{3}-\d{4})'

matches = re.findall(pattern, text)
print(matches)

for match in matches:
    for group in match:
        if group:
            print(group)