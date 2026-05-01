# -*- coding: utf-8 -*-
import os
import sys

def version():
    return "Cathon v1.0.0"

def parse_code(code):
    return code.strip()

def load_file(path):
    if os.path.exists(path):
        with open(path,"r",encoding="utf-8") as f:
            return f.read()
    return ""