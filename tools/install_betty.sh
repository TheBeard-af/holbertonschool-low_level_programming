#!/bin/bash

set -e

echo "Installing Betty dependencies..."

apt-get update
apt-get install -y git

echo "Downloading Betty..."

cd /tmp
rm -rf Betty
git clone https://github.com/holbertonschool/Betty.git

echo "Installing Betty style and documentation tools..."

cd Betty
./install.sh

echo "Creating the Holberton Betty wrapper..."

cat > /usr/local/bin/betty <<'EOF'
#!/bin/bash

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
EOF

chmod a+x /usr/local/bin/betty

echo "Betty installation complete!"
