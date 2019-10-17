New-Item -Path . -Name 'gen' -ItemType "directory"

For ($i = 0;$i -le 99; $i++){

 $filename = "cpp_{0}.cpp" -f $i
 
 New-Item -Path "./gen/" -Name $filename -ItemType "file" -Value '#include "pch.h"
#include "10percent.h"
#include "95percent.h"'
}

For ($i = 100;$i -le 949; $i++){

 $filename = "cpp_{0}.cpp" -f $i
 
 New-Item -Path "./gen/" -Name $filename -ItemType "file" -Value '#include "pch.h"
#include "95percent.h"'
}

For ($i = 950;$i -le 999; $i++){

 $filename = "cpp_{0}.cpp" -f $i
 
 New-Item -Path "./gen/" -Name $filename -ItemType "file" -Value '#include "pch.h"'
}