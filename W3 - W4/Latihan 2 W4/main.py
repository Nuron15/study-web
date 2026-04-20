import argparse
from strutils import normalize_text, word_count, top_n_words

def read_text_from_input():
    print("Masukkan teks (enter 2x untuk selesai):")
    lines = []
    while True:
        line = input()
        if line == "" and lines:
            break
        lines.append(line)
    return "\n".join(lines)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--file", help="Input dari file")
    parser.add_argument("--text", help="Input teks langsung")
    parser.add_argument("--top", type=int, default=10)

    args = parser.parse_args()

    if args.file:
        with open(args.file, "r", encoding="utf-8") as f:
            text = f.read()
    elif args.text:
        text = args.text
    else:
        text = read_text_from_input()

    print("\n=== HASIL ANALISIS TEKS ===")
    print("Teks ternormalisasi:")
    print(normalize_text(text))
    print("\nJumlah kata:", word_count(text))

    print(f"\nTop {args.top} kata:")
    for word, count in top_n_words(text, args.top):
        print(f"- {word}: {count}")

if __name__ == "__main__":
    main()