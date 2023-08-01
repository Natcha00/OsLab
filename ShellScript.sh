for file in $(find . -type f -name "L*.c")
do
 #trimmedName=`echo $file|cut -d'/' -f2`
 trimmedName=`echo $file | cut -d'/' -f2`

 Lab13_name=$(echo $trimmedName | cut -d'.' -f1)
 #printf "%s\n" $prog_name
 gcc -o $Lab13_name $trimmedName

 if [ -f $Lab13_name ]
 then
  ans=$(./$Lab13_name)
  if [ $ans = 20 ]
  then
   point=10
  else
   point=7
  fi
 else
  point=5
 fi


 echo $trimmedName $point
# echo $file $trimmedName
done