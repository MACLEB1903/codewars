import os
import re

def has_public_class(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
        return re.search(r'\bpublic\s+class\s+\w+', content) is not None

def rename_invalid_java_files(directory):
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith('.java') and not file.startswith('-x-'):
                full_path = os.path.join(root, file)
                if not has_public_class(full_path):
                    new_name = f"-x-{file}"
                    new_path = os.path.join(root, new_name)
                    print(f"Renaming: {file} → {new_name}")
                    os.rename(full_path, new_path)

if __name__ == "__main__":
    rename_invalid_java_files(".")
