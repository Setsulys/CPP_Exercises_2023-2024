
gitnew:
	git pull upstream master
	git branch $b
	git switch $b
	git push origin $b
	git rm -r --cached $l
	git commit -m "remove $l"
	git push origin $b

git:
	git add .
	git commit -m "$m"
	git push origin $b
