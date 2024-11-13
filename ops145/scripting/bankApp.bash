#!/bin/bash
#
#Author: Collins and Slg Students


#loop
#meaning it will do this till there is something telling it to stop
while true;
do
	#get the number from the user
	read -p "Enter a number between 1 - 4: " userNumber

	#if the number is 
	# greater than or equal to - (ge) 1  
	# and - &&
	# number user entered is 
	# less than or equal to - (le) 4
	#
	# so the number it is expecting should be between 1 -4
	if [[ "$userNumber" -ge 1 ]] && [[ $userNumber -le 4 ]]; then

		
		#if it is withing than range then break out of the loop
		#we have gotten a good number
		break
	else

		#if the number is not good show them this message and ask for a number again from the top
		echo " Your number is invalid "

	#ending of the if that checks the userNumber entered
	fi
#ending of the loop
done



#Now that we are out of the loop what do we do with the user entered value?
#Find out what happens if i call this userNumber without dollar sign($) in front of it
# userNumber instead of $userNumber
case $userNumber in
	1)
		echo "This is a Savings Account"

		## try to find out why this ";;" is important 
		## You can try removing it and seeing what happens
		;;
	2)
		echo "This is a Chequing Account"
		;;
	3)

		echo "This is a Business Account"
		;;
	4)
		echo "This is an Investment Acconunt"
		;;

	## find out what *) mean?

	*)
		echo "This is bad, we didn't account for this"
		;;

## find out what esac does?
esac
