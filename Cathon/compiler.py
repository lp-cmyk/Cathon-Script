import zipfile
import os

def create_car(output_path, files_to_package):
    with zipfile.ZipFile(output_path, 'w') as zf:
        for file in files_to_package:
            zf.write(file, os.path.basette(file))
    print(f"CAC 包已生成：{output_path}")

# 打包所有辅助文件
files = [
    "main.ca", "utils.cac", "hook.cacw",
    "config.cfg", "lang.pack", "meta.json",
    "tool.parser", "hook.inject", "patch.apply"
]

create_car("cathon_project.car", files)