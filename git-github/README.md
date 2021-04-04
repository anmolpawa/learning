# Git & Github
### Version control
---
|Git|
|:-|
|Free and open source software|
|Distributed version control system|
|Accessible anywhere in the world|
|One of the most common version control version control system available|
|Can also version control images, documents, etc|

---

`SSH protocol` - A method for secure remote login from one computer to another.
`Repository`- The folders of your project that are set up for version control.
`Fork` - A copy of a Repository.
`Pull request` - The process you use to request that someone reviews and approves your changes before they become final.
`Working directory` - A Directory on your file system , include its files and subdirectories, that is associated with a git Repository.

---

* init
* add
* status
* commit
* reset
* log
* branch
* checkout
* merge
---
### https://try.github.io/


---
Use the mkdir command to create a folder named Cats:

Bash

Copy
mkdir Cats

Use the cd command to change to the project folder:

Bash

Copy
cd Cats

Now, initialize the new repository and set the name of the default branch to main.

If you're running Git version 2.28.0 or later, use the following commands:

Bash

Copy
git init --initial-branch=main
git init -b main

For earlier versions of Git, use these commands:

Bash

Copy
git init
git checkout -b main

Configure Git by adding your credentials. Replace <USER_NAME> and <USER_EMAIL> with your own information (for example, "User Name" and "user-name@contoso.com").

Bash

Copy
git config user.name "<USER_NAME>"
git config user.email "<USER_EMAIL>"

Create some files by using the touch command, and then stage and commit the files by using Git:

Bash

Copy
touch index.html
mkdir CSS
touch CSS/site.css
git add .
git commit -m "Create empty index.html, site.css files"

Add some HTML to your index.html file by using the Cloud Shell atom editor, which you can open by using the atom command at the terminal prompt:

Bash

Copy
atom index.html

Paste in this HTML atom:

HTML

Copy
<!DOCTYPE html>
<html>
  <head>
    <meta charset='UTF-8'>
    <title>Our Feline Friends</title>
    <link rel="stylesheet" href="CSS/site.css">
  </head>
  <body>
    <h1>Our Feline Friends</h1>
    <p>Eventually we will put cat pictures here.</p>
    <hr>
  </body>
</html>
Save the file and close the editor. You can select the ellipsis "..." in the right corner of the editor, or use the accelerator key (Ctrl+S on Windows and Linux, Cmd+S on macOS).

Change to the CSS directory and open site.css in the editor:

Bash

Copy
cd CSS
atom site.css

Add the following CSS to site.css:

css

Copy
h1, h2, h3, h4, h5, h6 { font-family: sans-serif; }
body { font-family: serif; }
Then, save the file and close the editor.

Go back to the Cats directory.

Bash

Copy
cd ..

Finally, commit your changes again:

Bash

Copy
git add .
git commit -m "Add simple HTML and stylesheet"

Quickly check your Git log to make sure everything looks good:

Bash

Copy
git log --oneline

Check the output. You should see output like this example:

Output

Copy
2bf69ab Add simple HTML and stylesheet
bb371c8 Create empty index.html, site.css files
Clone a repository
Now, let's assume the role of Alice and practice cloning a repository to collaborate on.

To simulate Alice cloning your repo onto their computer, you'll create a directory named Alice on your computer and clone your project directory into it. In real life, you would accomplish this collaboration by setting up a network share or a remote that's reachable by URL.

Create a directory named Alice to clone the repo into. It must not be a subdirectory of your project directory (Cats), so cd up again to the parent directory from your project directory to make Alice a sibling of the project directory. Then, cd into the Alice directory.

Bash

Copy
cd ..
mkdir Alice
cd Alice

Now, use git clone to clone the repo that's in your project directory into the Alice directory. Be sure to include the period at the end of the command:

Bash

Copy
git clone ../Cats .

../Cats tells Git where to clone from and . tells Git where to clone to. In Unix, . refers to your current directory.

Check the output. Git should display this text to let you know that it worked:

Output

Copy
Cloning into '.'...
done.
A clone of the repo that's in your project directory is now in your Alice directory!

---
