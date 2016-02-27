#!/usr/bin/env bash

#declaring a directory
DIR[0]='/var/www/vhosts/irina.com/httpdocs/BestMujik/IDE/HelloWorldPrograms/c/*.c'
DIR[1]='/var/www/vhosts/irina.com/httpdocs/BestMujik/IDE/HelloWorldPrograms/cpp/*.cpp'
DIR[2]='/var/www/vhosts/irina.com/httpdocs/BestMujik/IDE/HelloWorldPrograms/python/*.py'
DIR[3]='/var/www/vhosts/irina.com/httpdocs/BestMujik/IDE/HelloWorldPrograms/ruby/*.rb'
DIR[4]='/var/www/vhosts/irina.com/httpdocs/BestMujik/IDE/HelloWorldPrograms/java/*.java'
DIR[5]='/var/www/vhosts/irina.com/httpdocs/BestMujik/IDE/HelloWorldPrograms/java'



for ((i=0; i<${#DIR[*]}; i++ ))
do
       if [ $i = 0 ]
       then
                echo "		* * *	"
		echo "Processing C file..."
                gcc -o hello1 ${DIR[$i]}
		RET=$?
			if [ $RET -eq 0 ]; then
                	./hello1
			echo "Succes: C"
			else
				echo "IDE. ERROR happened during the compilation of C file" | mail -s "IDE. ERROR" cojanu_irina@mail.ru
			fi
	fi

	if [ $i = 1 ]
        then
                echo "         * * *   "
		echo "Processing C++ file..."
                g++ -o hello2 ${DIR[$i]}
                RET=$?
                        if [ $RET -eq 0 ]; then
                        ./hello2
			 echo "Succes: C++"
                        else
                                echo "IDE. ERROR happened durring the compilation of C++ file" | mail -s "IDE. ERROR"  cojanu_irina@mail.ru
                        fi
        fi

	if [ $i = 2 ]
        then
		echo "         * * *   "                
		echo "Processing python file..."
                python ${DIR[$i]}
                RET=$?
                        if [ $RET -eq 0 ]; then
                        echo "Succes: Python"
                        else
                                echo "IDE. ERROR happened durring the compilation of python file" | mail -s "IDE. ERROR"  cojanu_irina@mail.ru
                        fi
        fi

	 if [ $i = 3 ]
        then
                echo "         * * *   "
                echo "Processing ruby file..."
                ruby ${DIR[$i]}
                RET=$?
                        if [ $RET -eq 0 ]; then
                        echo "Succes: Ruby"
                        else
                                echo "IDE. ERROR happened durring the compilation of ruby file" | mail -s "IDE. ERROR"  cojanu_irina@mail.ru
                        fi
        fi
	
	 if [ $i = 4 ]
        then
                echo "         * * *   "
                echo "Processing java file..."
                javac ${DIR[$i]}
                RET=$?
                        if [ $RET -eq 0 ]; then
                        echo "Succes: Java"
                        else
                                echo "IDE. ERROR happened durring the compilation of java file" | mail -s "IDE. ERROR"  cojanu_irina@mail.ru
                        fi
        fi

	if [ $i = 5 ]
	then
		java -cp ${DIR[$i]} HelloWorld
	fi
done
