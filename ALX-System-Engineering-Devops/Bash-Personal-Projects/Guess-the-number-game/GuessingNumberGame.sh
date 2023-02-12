#!/bin/bash

# Generate a random number between 1 and 100
answer=$((RANDOM % 100 + 1))

# Prompt the user to guess the number
echo "Guess a number between 1 and 100:"
read guess

# Keep looping until the user correctly guesses the number
while [ "$guess" -ne "$answer" ]; do
  if [ "$guess" -lt "$answer" ]; then
    echo "The number is higher. Guess again:"
  else
    echo "The number is lower. Guess again:"
  fi
  read guess
done

# Announce the correct answer
echo "Congratulations! You've correctly guessed the number $answer."
