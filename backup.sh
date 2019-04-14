#!/bin/bash

#Script to copy a specified source folder into a specified destination folder
#Folder will be created if it does not already exist

read -p "Please provide a source folder. [/home/sourcefolder]: " sourcef
read -p "Please provide a destination folder. [/home/destfolder]: " destf
if [ -e $sourcef ]; then
    echo "You will be copying files from $sourcef to $destf. Is this okay? Yes/No "
    select yn in "Yes" "No"; do
        case $yn in
            Yes ) sudo cp -ri $sourcef $destf ;;
            No ) echo "Aborting..."
            break ;;
            * ) echo "Please enter Yes or No."
        esac
    done
else
    echo "Source does not exist. Aborting..."
fi 