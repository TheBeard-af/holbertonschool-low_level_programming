#!/bin/bash

set -e

BASHRC="$HOME/.bashrc"
ALIASES="$HOME/.bash_aliases"
BACKUP_DATE=$(date +%Y%m%d%H%M%S)

echo "Setting up your Bash customisation..."

# Back up existing configuration files
if [ -f "$BASHRC" ]; then
    cp -p "$BASHRC" "$BASHRC.bak.$BACKUP_DATE"
fi

if [ -f "$ALIASES" ]; then
    cp -p "$ALIASES" "$ALIASES.bak.$BACKUP_DATE"
fi

touch "$BASHRC" "$ALIASES"

# Add Git aliases if they are not already installed
if ! grep -Fq "# >>> holberton aliases >>>" "$ALIASES"; then
    cat >> "$ALIASES" <<'EOF'

# >>> holberton aliases >>>
alias cm="chmod u+x"
alias ga="git add"
alias gc="git commit -m"
alias gp="git push"
alias gt="git status"
alias cl="clear"
# <<< holberton aliases <<<
EOF
fi

# Add the coloured prompt if it is not already installed
if ! grep -Fq "# >>> holberton prompt >>>" "$BASHRC"; then
    cat >> "$BASHRC" <<'EOF'

# >>> holberton prompt >>>
if [[ $- == *i* ]]; then
    GREEN='\[\e[38;2;93;213;3m\]'
    BLUE='\[\e[38;2;80;170;255m\]'
    RESET='\[\e[0m\]'

    PS1="${GREEN}\u@holberton${RESET}:${BLUE}\w${RESET}\n\$ "
fi
# <<< holberton prompt <<<
EOF
fi

# Make sure Bash loads the aliases
if ! grep -Fq '. "$HOME/.bash_aliases"' "$BASHRC"; then
    cat >> "$BASHRC" <<'EOF'

# Load personal aliases
if [ -f "$HOME/.bash_aliases" ]; then
    . "$HOME/.bash_aliases"
fi
EOF
fi

echo "Bash customisation installed!"
echo "Run: source ~/.bashrc"
