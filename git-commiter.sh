#!/bin/bash

git status
git add .
git commit -m "$1"
echo "Commit Message: " $1
git push