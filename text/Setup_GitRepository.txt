github.com

One of many services offering hosting of git repos

The repository for this course is
http://github.com/pek-ia/cpp-academy

It's a public repository, so I don't put anything there that would be confidential, trade secrets, or other private info.

Important git commands on your computer

Clone a remote repo to your machine

git clone -v repo-name
for example, a remote repo:
git clone -v http://github.com/pek-ia/cpp-academy

Stage new and/or changed files for your next commit

git add [filenames]

Stage files that you've updated with a chance to pick

Check the status of your staged files

git status

Commit changes to your local repo

git commit

Shortcut to stage and commmit all modified/deleted files (but not new ones)

git commit -a

Save changes back to a remote repo

git push

(BUT!  you can't do this with MY repo unless I give you a token)

Update your local repo to match the remote one (merge from remote)

git pull

Things that you might do while working on a design, and how to make git deal with it.

Rename a file

Move a file to different directory

Replace a file with a completely different one with the same name

Remove a file

Add a file

Change the filename extension (.cpp to .cc, for example)

Why use git?

Back up your precious source files
Share files with others
See what changes you've made without writing them down
Track project history
Associate changes with particular bug fixes, etc.
Undo changes that turn out to be bad
Revert to a known point in project history
Branch off derivative code
Merge branches


Things to save in git:

Source code files
Test cases and inputs

Things not to save in git

Executables
Binary files
Data files that 'appear' to change content, but don't really
Files that are regenerated on each new build