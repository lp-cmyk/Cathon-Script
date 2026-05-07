# Security Policy

## Supported Versions
| Version | Supported          |
| ------- | ------------------ |
| latest  | :white_check_mark: |

## Reporting a Vulnerability
If you find any security vulnerabilities in Cathon‑Script,
please report privately via GitHub Security Advisory.
Do NOT create public issues for security bugs.

## Security Design
- Cathon core is lightweight (99.9KB), no third‑party unsafe dependencies
- WASM runtime runs in browser sandbox, isolated from host system
- Mobile interpreter runs in app sandbox, no arbitrary file access by default
- Compiler strictly restricts system calls to prevent injection attacks

## Project Security Notes
All core architecture and security design are original.
Part of implementation code is AI‑assisted and audited manually.
