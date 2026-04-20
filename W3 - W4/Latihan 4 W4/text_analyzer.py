import re
from collections import Counter

def normalize_text(text: str) -> str:
    text = text.lower()
    text = re.sub(r"[^a-z0-9\s]", " ", text)
    text = re.sub(r"\s+", " ", text).strip()
    return text

def analyze_text(text: str):
    normalized = normalize_text(text)
    words = normalized.split() if normalized else []

    word_count = len(words)
    unique_word_count = len(set(words))
    sentence_count = len(re.findall(r"[.!?]+", text))
    paragraph_count = len([p for p in re.split(r"\n\s*\n", text) if p.strip()])

    freq = Counter(words)
    top_words = freq.most_common(10)

    return {
        "word_count": word_count,
        "unique_word_count": unique_word_count,
        "sentence_count": sentence_count,
        "paragraph_count": paragraph_count,
        "top_words": top_words,
    }

def main():
    file_path = input("Masukkan nama file teks: ").strip()

    with open(file_path, "r", encoding="utf-8") as f:
        text = f.read()

    result = analyze_text(text)

    print("\n=== HASIL TEXT ANALYZER ===")
    print("Jumlah kata          :", result["word_count"])
    print("Jumlah kata unik     :", result["unique_word_count"])
    print("Jumlah kalimat       :", result["sentence_count"])
    print("Jumlah paragraf      :", result["paragraph_count"])
    print("\n10 kata terbanyak:")
    for word, count in result["top_words"]:
        print(f"- {word}: {count}")

    with open("hasil_analisis.txt", "w", encoding="utf-8") as out:
        out.write("=== HASIL TEXT ANALYZER ===\n")
        out.write(f"Jumlah kata          : {result['word_count']}\n")
        out.write(f"Jumlah kata unik     : {result['unique_word_count']}\n")
        out.write(f"Jumlah kalimat       : {result['sentence_count']}\n")
        out.write(f"Jumlah paragraf      : {result['paragraph_count']}\n\n")
        out.write("10 kata terbanyak:\n")
        for word, count in result["top_words"]:
            out.write(f"- {word}: {count}\n")

if __name__ == "__main__":
    main()