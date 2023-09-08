#script to automate my git push in every git repository
git status --porcelain
git add .
	read -p "Enter the commit message:" COMMITMESSAGE
git commit -m "$COMMITMESSAGE"
	read -p "Enter the name of the branch (main):" BRANCH
git push origin "$BRANCH"
	echo "<<<<<<<<<<<<<<<REPOSITORY UPDATED SUCCESSFUL!!>>>>>>>>>>>>>>>"
git log -n 2