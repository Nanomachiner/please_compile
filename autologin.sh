#!/usr/bin/expect -f

#This script logs you into each of your VMs automatically and lets you interact with each
#before connecting to the next.
#Assumes use of same user and pass between each

if {[llength $argv] != 3} {
puts "Usage: ./autologin.sh Username listofIPs.txt Password. Exiting..." ;

} else {
    
    set username [lindex $argv 0 end]
    set file [open [lindex $argv 1]]
    set IP [split [read $file]"\n"]
    close $file
    set password [lindex $argv 2]
    
    foreach ip $IP {
        if {$ip == "EOF"} {
            exit
            #I stuck an EOF at the end of my IP list so that garbage at the end
            #of the file isn't passed into the script
        } else {
            spawn ssh $username@$ip
            expect {
                "assword" {
                    send "$password\r" ;
                }
                "yes/no" {
                    send "yes\r"
                }
            }
            interact ;
        }
    }
}