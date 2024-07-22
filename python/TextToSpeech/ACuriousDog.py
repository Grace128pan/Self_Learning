import PyPDF2
from gtts import gTTS
import os
import re

def read_pdf_page(file_path, page_number):
    # Open the PDF file
    with open(file_path, 'rb') as file:
        reader = PyPDF2.PdfReader(file)
        text = ''
        # Check if the page number is valid
        if page_number < len(reader.pages):
            page = reader.pages[page_number]
            text = page.extract_text()
        else:
            print(f"Page number {page_number} is out of range. The document has {len(reader.pages)} pages.")
    return text

def add_natural_pauses(text):
    # List of titles to avoid pauses after them
    titles = ["Mr.", "Mrs.", "Ms.", "Dr.", "Prof."]
    
    # Temporary marker for handling titles
    for title in titles:
        text = text.replace(title, title.replace(".", "[dot]"))
    
    # Add pauses after commas and periods
    text = re.sub(r'\,\s*', ',\n', text)
    text = re.sub(r'\.\s*', '.\n', text)
    
    # Replace the temporary marker with a space
    text = text.replace("[dot]", ".")
    
    return text

def text_to_speech(text, lang='en'):
    text = add_natural_pauses(text)
    tts = gTTS(text=text, lang=lang, slow=True)
    tts.save("page3.mp3")
    os.system("start page3.mp3")  # This command is for Windows. Use 'open' instead of 'start' for MacOS

def main():
    file_path = 'python/TextToSpeech/1.pdf'  # PDF file path
    page_number = 2  # Page numbers start from 0, so page 3 is index 2
    text = read_pdf_page(file_path, page_number)
    if text:
        text_to_speech(text)
    else:
        print("No text found on the specified page.")

if __name__ == "__main__":
    main()
