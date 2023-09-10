#script to automate my git push in every git repository
#!/bin/bash

# Verificar el estado del repositorio
if ! git status --porcelain; then
    echo "No hay cambios para confirmar."
    exit 1
fi

# Añadir todos los cambios
git add .

# Solicitar el mensaje del commit
read -p "Enter the commit message: " COMMITMESSAGE

# Confirmar los cambios
git commit -m "$COMMITMESSAGE"

# Solicitar el nombre de la rama (por defecto, "main")
read -p "Enter the name of the branch [main]: " BRANCH
BRANCH=${BRANCH:-main}

# Hacer un push a la rama especificada
git push origin "$BRANCH"

# Verificar si el push fue exitoso
if [ $? -eq 0 ]; then
    echo "REPOSITORY UPDATED SUCCESSFUL!"
else
    echo "Error al actualizar el repositorio."
    exit 1
fi

# Mostrar los últimos 2 commits
git log -n 2
