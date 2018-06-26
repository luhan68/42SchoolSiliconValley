find . -name '*.sh' | xargs -n 1 basename | sed -e 's/\.sh$//'
