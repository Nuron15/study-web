import re
from collections import Counter

def normalize_text(text: str) -> str:
    text = text.lower()
    text = re.sub(r"[^a-z0-9\s]", " ", text)
    text = re.sub(r"\s+", " ", text).strip()
    return text

def word_count(text: str) -> int:
    normalized = normalize_text(text)
    if not normalized:
        return 0
    return len(normalized.split())

def top_n_words(text: str, n: int = 10):
    normalized = normalize_text(text)
    words = normalized.split()
    counter = Counter(words)
    return counter.most_common(n)