# VCS-assignment

### Brief
---

first Things first, I didn't have git installed on my linux machine so I did the following to add and config it
```
sudo apt install git
ssh-keygen
vim /home/badra022/.ssh/id_rsa.pub  #to copy the public key to github
```

then create a local repo for the assignment:
```
mkdir VCS-assignment
cd VCS-assignment
git init
git branch -m master main
git remote add origin https://github.com/badra022/VCS-assignment.git
```

then added the code in the main branch:
```
touch main.cpp
vim main.cpp    #added the code here
g++ main.cpp -o app
./app    #to see the output
git add main.cpp
git commit -m "initial commit"
```
then create ```getAvgFeature``` and ```getMinFeature``` and added the code to them:
```
git checkout -b getAvgFeature
# added the code
git add main.cpp
git commit -m "implemented the Average feature"

git checkout main

git checkout -b getMinFeature
# added the code
git add main.cpp
git commit -m "implemented the minimum feature"
```

then, merged ```getAvgFeature``` branch then deleted then added the other branch and fixed conflicts then commited:
```
git merge getAvgFeature    #Fast forward
git merge getMinFeature    #solve conflicts then commit
#solved commits
git add main.cpp
git commit -m "solved conflicts"

git push origin main
git push origin getMinFeature
```
