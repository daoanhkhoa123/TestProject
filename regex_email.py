import re

text = """John's email is john@example.com. Mary can be reached at mary@gmail.com.
The meeting is scheduled for 2023-09-15. Don't forget to bring your ID!
Our support hotline is (123)456-7890. Call us if you have any questions"""

email_pattern = r'\b\w+@[a-zA-Z]+\.[a-zA-Z]{2,}\b'
date_pattern = r'\d{4}-\d{2}-\d{2}'
phone_pattern = r'\(\d{3}\)\d{3}-\d{4}'

def extract_emails(text):
    emails = re.findall(email_pattern, text)
    return emails

def extract_dates(text):
    dates = re.findall(date_pattern, text)
    return dates

def extract_phones(text):
    phones = re.findall(phone_pattern, text)
    return phones

emails = extract_emails(text)
print(emails)

dates = extract_dates(text)
print(dates)

phones = extract_phones(text)
print(phones)


