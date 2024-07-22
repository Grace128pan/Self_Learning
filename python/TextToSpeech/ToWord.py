import PyPDF2
from docx import Document
import re

def read_pdf(file_path):
    # Open the PDF file
    with open(file_path, 'rb') as file:
        reader = PyPDF2.PdfReader(file)
        text_by_page = []
        # Read each page and extract text
        for page_num in range(len(reader.pages)):
            page = reader.pages[page_num]
            text = page.extract_text()
            text_by_page.append(text)
    return text_by_page

def sanitize_text(text):
    # Remove or replace non-XML-compatible characters
    if text:
        text = re.sub(r'[^\x09\x0A\x0D\x20-\x7E\x85\xA0-\uD7FF\uE000-\uFFFD]', '', text)
    return text

def save_to_word(text_by_page, output_path):
    # Create a new Word document
    doc = Document()
    
    # Add text to the Word document page by page
    for page_num, text in enumerate(text_by_page):
        if text:
            sanitized_text = sanitize_text(text)
            doc.add_paragraph(sanitized_text)
            if page_num < len(text_by_page) - 1:
                doc.add_page_break()  # Add a page break after each page except the last one
    
    # Save the document
    doc.save(output_path)

def main():
    pdf_file_path = 'python/TextToSpeech/1.pdf'  # PDF file path
    word_file_path = 'python/TextToSpeech/1.docx'  # Output Word file path
    
    # Read text from the PDF
    text_by_page = read_pdf(pdf_file_path)
    
    # Save the text to a Word document
    save_to_word(text_by_page, word_file_path)
    
    print(f"PDF file '{pdf_file_path}' has been converted to Word file '{word_file_path}'.")

if __name__ == "__main__":
    main()
