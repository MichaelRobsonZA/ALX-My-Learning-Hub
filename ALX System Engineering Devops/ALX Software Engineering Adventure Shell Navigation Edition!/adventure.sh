#!/bin/bash

# Welcome the player to the ALX Software Engineering Adventure
echo "Welcome to the ALX Software Engineering Adventure!"
echo "You are a software engineering student in the ALX program, and your goal is to complete your training and become a professional software engineer."
echo "In this adventure, you will learn about various shell navigation commands and how to use them."
echo "Let's begin!"

# Define an array of commands to be used in the adventure
commands=(cd ls pwd less file ln cp mv rm mkdir type which help man)

# Start the adventure
while true; do
  # Ask the player which command they would like to learn next
  echo "Which command would you like to learn next?"
  echo "Enter the number corresponding to the command:"
  for i in "${!commands[@]}"; do
    echo "$((i+1))) ${commands[i]}"
  done

  # Read the player's choice
  read choice

  # Use the 'cd' command
  if [ "$choice" = "1" ]; then
    echo "Enter the directory you would like to change to (e.g. 'cd /etc'):"
    read cmd
    eval $cmd
    if [ $? -eq 0 ]; then
      echo "The 'cd' command was executed successfully."
      echo "You are now in the $(pwd) directory."
    else
      echo "The 'cd' command failed. Please try again."
    fi

  # Use the 'ls' command
  elif [ "$choice" = "2" ]; then
    echo "Enter the 'ls' command you would like to execute (e.g. 'ls -al'):"
    read cmd
    eval $cmd
    if [ $? -eq 0 ]; then
      echo "The 'ls' command was executed successfully."
    else
      echo "The 'ls' command failed. Please try again."
    fi

  # Use the 'pwd' command
  elif [ "$choice" = "3" ]; then
    echo "Enter the 'pwd' command you would like to execute (e.g. 'pwd'):"
    read cmd
    eval $cmd
    if [ $? -eq 0 ]; then
      echo "The 'pwd' command was executed successfully."
      echo "You are in the $(pwd) directory."
    else
      echo "The 'pwd' command failed. Please try again."
    fi

  # Use the 'less' command
  elif [ "$choice" = "4" ]; then
    echo "Enter the 'less' command you would like to execute (e.g. 'less file.txt'):"
    read cmd
    eval $cmd
    if [ $? -eq 0 ]; then
      echo "The 'less' command was executed successfully."
    else
      echo "The 'less' command failed. Please try again."
    fi

  # Use the 'file' command
  elif [ "$choice" = "5" ]; then
    echo "Enter the 'file' command you would like to execute (e.g. 'file file.txt'):"
    read cmd
    eval $cmd
    if [ $? -eq 0 ]; then
      echo "The 'file' command was executed successfully."
echo "What do you want to do next?"
echo "1) Learn about another command"
echo "2) Quit the ALX Software Engineering Adventure"
read next
if [ "$next" = "1" ]; then
continue
elif [ "$next" = "2" ]; then
break
else
echo "Invalid choice. Please try again."
fi
else
echo "The 'file' command was not executed successfully. Please try again."
fi

echo "No problem. You can try again later or move on to another command."

echo "Which command would you like to learn next?"
read choice
done

echo "Congratulations! You have completed this section of the ALX software engineering course on shell navigation."
echo "You are now ready to move on to more advanced topics and continue your journey to becoming a professional software engineer."
